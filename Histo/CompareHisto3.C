#include "TF1.h"
#include "TH1.h"
#include "TH2.h"
#include "TROOT.h"
#include "TKey.h"
#include "TStyle.h"
#include "TFile.h"
#include "TDirectory.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TColor.h"
#include "TLegend.h"
#include "TPaveText.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void CompareHisto(string tagf1, string file1, string tagf2, string file2, string tagf3, string file3, string histoName, string part, string beamE){
  gStyle->SetOptStat(0);
  TString TFile11=file1, TFile22=file2, TFile33=file3;
  TFile *f11 = TFile::Open(TFile11);
  TFile *f22 = TFile::Open(TFile22);
  TFile *f33 = TFile::Open(TFile33);
  
  TString tag11 = tagf1;
  TString tag22 = tagf2;
  TString tag33 = tagf3;
  TH1F *h11,*h22,*h33;
  double h11Max=0,h22Max=0,h33Max=0;

  TCanvas *can11 = new TCanvas("can11","",600,500);
  can11->SetRightMargin(0.10); can11->SetTopMargin(0.12);
  can11->SetLeftMargin(0.15);  can11->SetBottomMargin(0.10);

  TIter next(f11->GetListOfKeys());
  TKey *key;
  while ((key=(TKey*)next())) {
    std::string fileHistoName = key->GetName();
    std::string userHistoName = "h_"+histoName;
    if (fileHistoName.compare(0, userHistoName.length(), userHistoName) != 0) continue;

    h11 = dynamic_cast<TH1F*>(f11->Get(key->GetName()));
    h22 = dynamic_cast<TH1F*>(f22->Get(key->GetName()));
    h33 = dynamic_cast<TH1F*>(f33->Get(key->GetName()));
    std::cout<<key->GetName()<<": Mean Value: "<< h11->GetMean() << std::endl;
    std::cout<<key->GetName()<<": Mean Value: "<< h22->GetMean() << std::endl;
    std::cout<<key->GetName()<<": Mean Value: "<< h33->GetMean() << std::endl;
        
    h22->Scale(h11->Integral()/h22->Integral());
    h33->Scale(h11->Integral()/h33->Integral());

    h11Max=h11->GetMaximum();
    h22Max=h22->GetMaximum();
    h33Max=h33->GetMaximum();
    //h11->Rebin(2); 
    //h22->Rebin(2);
    //h33->Rebin(2);
    
    TString hTitle= part+"  "+beamE+"GeV   "+fileHistoName;
    TString hxTitle= "";
    if(histoName=="SumELayer")      hxTitle= "MIP";
    else if(histoName=="SumE")      hxTitle= "MIP";
    else if(histoName=="SumEAll")      hxTitle= "MIP";
    else if(histoName=="E1byE7")    hxTitle= "E1/E7";
    else if(histoName=="E1byE19")   hxTitle= "E1/E19";
    else if(histoName=="E7byE19")   hxTitle= "E7/E19";
    else if(histoName=="E7byEAll")  hxTitle= "E7/E19";
    else if(histoName=="E19byEAll") hxTitle= "E19/EAll";
    else hxTitle = fileHistoName;
    TString hyTitle= "Events Normalized to Data";

    //h11->GetYaxis()->SetRangeUser(0,0.15);
    //h11->SetMarkerStyle(20);
    h11->SetLineColor(1);  h11->SetLineWidth(3);
    if (h11Max>=h22Max && h11Max>=h33Max ) { 
      h11->Draw("hist");
      h11->SetTitle(hTitle);
      h11->GetXaxis()->SetTitle(hxTitle);
      h11->GetYaxis()->SetTitle(hyTitle);
      h11->GetXaxis()->SetTitleOffset(1.1);
      h22->Draw("hist same"); h33->Draw("hist same");
    }
    if (h22Max>=h11Max && h22Max>=h33Max ) { 
      h22->Draw("hist"); 
      h22->SetTitle(hTitle);
      h22->GetXaxis()->SetTitle(hxTitle);
      h22->GetYaxis()->SetTitle(hyTitle);
      h22->GetXaxis()->SetTitleOffset(1.1);
      h11->Draw("hist same"); h33->Draw("hist same");
    }
    if (h33Max>=h11Max && h33Max>=h22Max ) { 
      h33->Draw("hist"); 
      h33->SetTitle(hTitle);
      h33->GetXaxis()->SetTitle(hxTitle);
      h33->GetYaxis()->SetTitle(hyTitle);
      h33->GetXaxis()->SetTitleOffset(1.1);
      h11->Draw("hist same"); h22->Draw("hist same");
    }
    h22->SetLineColor(2);    h22->SetLineWidth(2);
    //h22->Draw("hist same");
    h33->SetLineColor(4);    h33->SetLineWidth(2);
    //h33->Draw("hist same");
    
    
    TLegend *leg = new TLegend(0.10,0.88,0.98,0.95);
    leg->SetBorderSize(0);
    leg->SetNColumns(3);
    leg->SetFillColor(0);
    leg->AddEntry(h11,tag11);
    leg->AddEntry(h22,tag22);
    leg->AddEntry(h33,tag33);
    leg->Draw();

    can11->Update();    
    TString canName= part+"_"+beamE+"GeV_"+fileHistoName;
    can11->Print(canName+".pdf");
    can11->Print(canName+".png");
    can11->Print(canName+".root");
  } // while Loop

}


int main(int argc, const char *argv[]){
  gROOT->ProcessLine("#include <vector>");
  //gROOT->ProcessLine("#include <map>");

  string tagf1     = argv[1];
  string file1     = argv[2];
  string tagf2     = argv[3];
  string file2     = argv[4];
  string tagf3     = argv[5];
  string file3     = argv[6];
  string histoName = argv[7];
  string part      = argv[8];
  string beamE     = argv[9];

  CompareHisto(tagf1, file1, tagf2, file2, tagf3, file3, histoName, part, beamE);

  return 0;
}


//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Aug 19 11:57:36 2019 by ROOT version 6.18/00
// from TTree hits/HGC rechits
// found on file: ntupleNewBeamProfEleE100.root
//////////////////////////////////////////////////////////
 
#ifndef HGCTBAna_h
#define HGCTBAna_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "impactPoints.C" // For accessing other tree variables

// Header file for the classes stored in the TTree if any.
#include "vector"

// Header files include by the USER
#include <iostream>

using namespace std;

class HGCTBAna {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   impactPoints   *fOther;  // for Friend Tree

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          event;
   ULong64_t       trigger_timestamp;
   UInt_t          run;
   Int_t           pdgID;
   Float_t         beamEnergy;
   Float_t         trueBeamEnergy;
   Float_t         energyLostEE;
   Float_t         energyLostFH;
   Float_t         energyLostBH;
   Float_t         energyLostBeam;
   Float_t         energyLostOutside;
   UInt_t          NRechits;
   vector<unsigned int> *rechit_detid;
   vector<unsigned int> *rechit_module;
   vector<unsigned int> *rechit_layer;
   vector<unsigned int> *rechit_chip;
   vector<unsigned int> *rechit_channel;
   vector<unsigned int> *rechit_type;
   vector<float>   *rechit_x;
   vector<float>   *rechit_y;
   vector<float>   *rechit_z;
   vector<short>   *rechit_iu;
   vector<short>   *rechit_iv;
   vector<short>   *rechit_iU;
   vector<short>   *rechit_iV;
   vector<float>   *rechit_energy;
   vector<float>   *rechit_energy_noHG;
   vector<float>   *rechit_amplitudeHigh;
   vector<float>   *rechit_amplitudeLow;
   vector<bool>    *rechit_hg_goodFit;
   vector<bool>    *rechit_lg_goodFit;
   vector<bool>    *rechit_hg_saturated;
   vector<bool>    *rechit_lg_saturated;
   vector<bool>    *rechit_fully_calibrated;
   vector<bool>    *rechit_noise_flag;
   vector<float>   *rechit_TS2High;
   vector<float>   *rechit_TS2Low;
   vector<float>   *rechit_TS3High;
   vector<float>   *rechit_TS3Low;
   vector<unsigned short> *rechit_Tot;
   vector<short>   *rechit_toa_calib_flag;
   vector<short>   *rechit_toaFall_flag;
   vector<short>   *rechit_toaRise_flag;
   vector<float>   *rechit_toaFall_norm;
   vector<float>   *rechit_toaRise_norm;
   vector<float>   *rechit_toaFall_time;
   vector<float>   *rechit_toaRise_time;
   vector<float>   *rechit_toaFall_corr_time;
   vector<float>   *rechit_toaRise_corr_time;
   vector<float>   *rechit_calib_time_toaFall;
   vector<float>   *rechit_calib_time_toaRise;
   vector<unsigned short> *rechit_toaRise;
   vector<unsigned short> *rechit_toaFall;
   vector<float>   *rechit_timeMaxHG;
   vector<float>   *rechit_timeMaxLG;
   vector<float>   *rechit_time_mc_firstHit;
   vector<float>   *rechit_time_mc_lastHit;
   vector<float>   *rechit_time_mc;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_trigger_timestamp;   //!
   TBranch        *b_run;   //!
   TBranch        *b_pdgID;   //!
   TBranch        *b_beamEnergy;   //!
   TBranch        *b_trueBeamEnergy;   //!
   TBranch        *b_energyLostEE;   //!
   TBranch        *b_energyLostFH;   //!
   TBranch        *b_energyLostBH;   //!
   TBranch        *b_energyLostBeam;   //!
   TBranch        *b_energyLostOutside;   //!
   TBranch        *b_NRechits;   //!
   TBranch        *b_rechit_detid;   //!
   TBranch        *b_rechit_module;   //!
   TBranch        *b_rechit_layer;   //!
   TBranch        *b_rechit_chip;   //!
   TBranch        *b_rechit_channel;   //!
   TBranch        *b_rechit_type;   //!
   TBranch        *b_rechit_x;   //!
   TBranch        *b_rechit_y;   //!
   TBranch        *b_rechit_z;   //!
   TBranch        *b_rechit_iu;   //!
   TBranch        *b_rechit_iv;   //!
   TBranch        *b_rechit_iU;   //!
   TBranch        *b_rechit_iV;   //!
   TBranch        *b_rechit_energy;   //!
   TBranch        *b_rechit_energy_noHG;   //!
   TBranch        *b_rechit_amplitudeHigh;   //!
   TBranch        *b_rechit_amplitudeLow;   //!
   TBranch        *b_rechit_hg_goodFit;   //!
   TBranch        *b_rechit_lg_goodFit;   //!
   TBranch        *b_rechit_hg_saturated;   //!
   TBranch        *b_rechit_lg_saturated;   //!
   TBranch        *b_rechit_fully_calibrated;   //!
   TBranch        *b_rechit_noise_flag;   //!
   TBranch        *b_rechit_TS2High;   //!
   TBranch        *b_rechit_TS2Low;   //!
   TBranch        *b_rechit_TS3High;   //!
   TBranch        *b_rechit_TS3Low;   //!
   TBranch        *b_rechit_Tot;   //!
   TBranch        *b_rechit_toa_calib_flag;   //!
   TBranch        *b_rechit_toaFall_flag;   //!
   TBranch        *b_rechit_toaRise_flag;   //!
   TBranch        *b_rechit_toaFall_norm;   //!
   TBranch        *b_rechit_toaRise_norm;   //!
   TBranch        *b_rechit_toaFall_time;   //!
   TBranch        *b_rechit_toaRise_time;   //!
   TBranch        *b_rechit_toaFall_corr_time;   //!
   TBranch        *b_rechit_toaRise_corr_time;   //!
   TBranch        *b_rechit_calib_time_toaFall;   //!
   TBranch        *b_rechit_calib_time_toaRise;   //!
   TBranch        *b_rechit_toaRise;   //!
   TBranch        *b_rechit_toaFall;   //!
   TBranch        *b_rechit_timeMaxHG;   //!
   TBranch        *b_rechit_timeMaxLG;   //!
   TBranch        *b_rechit_time_mc_firstHit;   //!
   TBranch        *b_rechit_time_mc_lastHit;   //!
   TBranch        *b_rechit_time_mc;   //!

   HGCTBAna(string infile, TTree *tree=0);
   virtual ~HGCTBAna();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(string outputfile, int nTotEvent, int nPrintEvent, float mipCut);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef HGCTBAna_cxx
HGCTBAna::HGCTBAna(string infile, TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
/*
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/afs/cern.ch/work/a/asroy/public/HGCalTB2018/SIMtoDataFormat/CMSSW_9_3_0/src/HGCal/ntupleNewBeamProfEleE100.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/afs/cern.ch/work/a/asroy/public/HGCalTB2018/SIMtoDataFormat/CMSSW_9_3_0/src/HGCal/ntupleNewBeamProfEleE100.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/afs/cern.ch/work/a/asroy/public/HGCalTB2018/SIMtoDataFormat/CMSSW_9_3_0/src/HGCal/ntupleNewBeamProfEleE100.root:/rechitntupler");
      dir->GetObject("hits",tree);

   }
*/
  
   TString inputfile = infile;
   cout<<"Input file : " << inputfile << endl;
   TTree *tree2;   

   if (tree == 0) {
     TFile *f = TFile::Open(inputfile);

     TDirectory *dir1 = dynamic_cast<TDirectory*>(f->Get("rechitntupler"));
     dir1->GetObject("hits",tree);
     TDirectory *dir2 = dynamic_cast<TDirectory*>(f->Get("trackimpactntupler"));
     dir2->GetObject("impactPoints",tree2);
   }
   Init(tree);

   fOther = new impactPoints(tree2);
}

HGCTBAna::~HGCTBAna()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t HGCTBAna::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t HGCTBAna::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void HGCTBAna::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   rechit_detid = 0;
   rechit_module = 0;
   rechit_layer = 0;
   rechit_chip = 0;
   rechit_channel = 0;
   rechit_type = 0;
   rechit_x = 0;
   rechit_y = 0;
   rechit_z = 0;
   rechit_iu = 0;
   rechit_iv = 0;
   rechit_iU = 0;
   rechit_iV = 0;
   rechit_energy = 0;
   rechit_energy_noHG = 0;
   rechit_amplitudeHigh = 0;
   rechit_amplitudeLow = 0;
   rechit_hg_goodFit = 0;
   rechit_lg_goodFit = 0;
   rechit_hg_saturated = 0;
   rechit_lg_saturated = 0;
   rechit_fully_calibrated = 0;
   rechit_noise_flag = 0;
   rechit_TS2High = 0;
   rechit_TS2Low = 0;
   rechit_TS3High = 0;
   rechit_TS3Low = 0;
   rechit_Tot = 0;
   rechit_toa_calib_flag = 0;
   rechit_toaFall_flag = 0;
   rechit_toaRise_flag = 0;
   rechit_toaFall_norm = 0;
   rechit_toaRise_norm = 0;
   rechit_toaFall_time = 0;
   rechit_toaRise_time = 0;
   rechit_toaFall_corr_time = 0;
   rechit_toaRise_corr_time = 0;
   rechit_calib_time_toaFall = 0;
   rechit_calib_time_toaRise = 0;
   rechit_toaRise = 0;
   rechit_toaFall = 0;
   rechit_timeMaxHG = 0;
   rechit_timeMaxLG = 0;
   rechit_time_mc_firstHit = 0;
   rechit_time_mc_lastHit = 0;
   rechit_time_mc = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("trigger_timestamp", &trigger_timestamp, &b_trigger_timestamp);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("pdgID", &pdgID, &b_pdgID);
   fChain->SetBranchAddress("beamEnergy", &beamEnergy, &b_beamEnergy);
   fChain->SetBranchAddress("trueBeamEnergy", &trueBeamEnergy, &b_trueBeamEnergy);
   fChain->SetBranchAddress("energyLostEE", &energyLostEE, &b_energyLostEE);
   fChain->SetBranchAddress("energyLostFH", &energyLostFH, &b_energyLostFH);
   fChain->SetBranchAddress("energyLostBH", &energyLostBH, &b_energyLostBH);
   fChain->SetBranchAddress("energyLostBeam", &energyLostBeam, &b_energyLostBeam);
   fChain->SetBranchAddress("energyLostOutside", &energyLostOutside, &b_energyLostOutside);
   fChain->SetBranchAddress("NRechits", &NRechits, &b_NRechits);
   fChain->SetBranchAddress("rechit_detid", &rechit_detid, &b_rechit_detid);
   fChain->SetBranchAddress("rechit_module", &rechit_module, &b_rechit_module);
   fChain->SetBranchAddress("rechit_layer", &rechit_layer, &b_rechit_layer);
   fChain->SetBranchAddress("rechit_chip", &rechit_chip, &b_rechit_chip);
   fChain->SetBranchAddress("rechit_channel", &rechit_channel, &b_rechit_channel);
   fChain->SetBranchAddress("rechit_type", &rechit_type, &b_rechit_type);
   fChain->SetBranchAddress("rechit_x", &rechit_x, &b_rechit_x);
   fChain->SetBranchAddress("rechit_y", &rechit_y, &b_rechit_y);
   fChain->SetBranchAddress("rechit_z", &rechit_z, &b_rechit_z);
   fChain->SetBranchAddress("rechit_iu", &rechit_iu, &b_rechit_iu);
   fChain->SetBranchAddress("rechit_iv", &rechit_iv, &b_rechit_iv);
   fChain->SetBranchAddress("rechit_iU", &rechit_iU, &b_rechit_iU);
   fChain->SetBranchAddress("rechit_iV", &rechit_iV, &b_rechit_iV);
   fChain->SetBranchAddress("rechit_energy", &rechit_energy, &b_rechit_energy);
   fChain->SetBranchAddress("rechit_energy_noHG", &rechit_energy_noHG, &b_rechit_energy_noHG);
   fChain->SetBranchAddress("rechit_amplitudeHigh", &rechit_amplitudeHigh, &b_rechit_amplitudeHigh);
   fChain->SetBranchAddress("rechit_amplitudeLow", &rechit_amplitudeLow, &b_rechit_amplitudeLow);
   fChain->SetBranchAddress("rechit_hg_goodFit", &rechit_hg_goodFit, &b_rechit_hg_goodFit);
   fChain->SetBranchAddress("rechit_lg_goodFit", &rechit_lg_goodFit, &b_rechit_lg_goodFit);
   fChain->SetBranchAddress("rechit_hg_saturated", &rechit_hg_saturated, &b_rechit_hg_saturated);
   fChain->SetBranchAddress("rechit_lg_saturated", &rechit_lg_saturated, &b_rechit_lg_saturated);
   fChain->SetBranchAddress("rechit_fully_calibrated", &rechit_fully_calibrated, &b_rechit_fully_calibrated);
   fChain->SetBranchAddress("rechit_noise_flag", &rechit_noise_flag, &b_rechit_noise_flag);
   fChain->SetBranchAddress("rechit_TS2High", &rechit_TS2High, &b_rechit_TS2High);
   fChain->SetBranchAddress("rechit_TS2Low", &rechit_TS2Low, &b_rechit_TS2Low);
   fChain->SetBranchAddress("rechit_TS3High", &rechit_TS3High, &b_rechit_TS3High);
   fChain->SetBranchAddress("rechit_TS3Low", &rechit_TS3Low, &b_rechit_TS3Low);
   fChain->SetBranchAddress("rechit_Tot", &rechit_Tot, &b_rechit_Tot);
   fChain->SetBranchAddress("rechit_toa_calib_flag", &rechit_toa_calib_flag, &b_rechit_toa_calib_flag);
   fChain->SetBranchAddress("rechit_toaFall_flag", &rechit_toaFall_flag, &b_rechit_toaFall_flag);
   fChain->SetBranchAddress("rechit_toaRise_flag", &rechit_toaRise_flag, &b_rechit_toaRise_flag);
   fChain->SetBranchAddress("rechit_toaFall_norm", &rechit_toaFall_norm, &b_rechit_toaFall_norm);
   fChain->SetBranchAddress("rechit_toaRise_norm", &rechit_toaRise_norm, &b_rechit_toaRise_norm);
   fChain->SetBranchAddress("rechit_toaFall_time", &rechit_toaFall_time, &b_rechit_toaFall_time);
   fChain->SetBranchAddress("rechit_toaRise_time", &rechit_toaRise_time, &b_rechit_toaRise_time);
   fChain->SetBranchAddress("rechit_toaFall_corr_time", &rechit_toaFall_corr_time, &b_rechit_toaFall_corr_time);
   fChain->SetBranchAddress("rechit_toaRise_corr_time", &rechit_toaRise_corr_time, &b_rechit_toaRise_corr_time);
   fChain->SetBranchAddress("rechit_calib_time_toaFall", &rechit_calib_time_toaFall, &b_rechit_calib_time_toaFall);
   fChain->SetBranchAddress("rechit_calib_time_toaRise", &rechit_calib_time_toaRise, &b_rechit_calib_time_toaRise);
   fChain->SetBranchAddress("rechit_toaRise", &rechit_toaRise, &b_rechit_toaRise);
   fChain->SetBranchAddress("rechit_toaFall", &rechit_toaFall, &b_rechit_toaFall);
   fChain->SetBranchAddress("rechit_timeMaxHG", &rechit_timeMaxHG, &b_rechit_timeMaxHG);
   fChain->SetBranchAddress("rechit_timeMaxLG", &rechit_timeMaxLG, &b_rechit_timeMaxLG);
   fChain->SetBranchAddress("rechit_time_mc_firstHit", &rechit_time_mc_firstHit, &b_rechit_time_mc_firstHit);
   fChain->SetBranchAddress("rechit_time_mc_lastHit", &rechit_time_mc_lastHit, &b_rechit_time_mc_lastHit);
   fChain->SetBranchAddress("rechit_time_mc", &rechit_time_mc, &b_rechit_time_mc);
   Notify();
}

Bool_t HGCTBAna::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void HGCTBAna::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t HGCTBAna::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef HGCTBAna_cxx

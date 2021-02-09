#define lqtobele_cxx
#include "lqtobele.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void lqtobele::Loop()
{
    TH1F *histo[34];
    TH1F *histo_reweight[34];
    
    string hist[34] = {"hist_GenEle1_Pt","hist_GenEle1_Eta","hist_GenEle1_Phi","hist_GenEle2_Pt","hist_GenEle2_Eta","hist_GenEle2_Phi","hist_GenJet1_Pt","hist_GenJet1_Eta","hist_GenJet1_Phi","hist_GenJet2_Pt","hist_GenJet2_Eta","hist_GenJet2_Phi","hist_GenJet3_Pt","hist_GenJet3_Eta","hist_GenJet3_Phi","hist_GenJet4_Pt","hist_GenJet4_Eta","hist_GenJet4_Phi","hist_GenJet5_Pt","hist_GenJet5_Eta","hist_GenJet5_Phi","hist_GenLQ1_Pt","hist_GenLQ1_Eta","hist_GenLQ1_Phi","hist_GenLQ1_Mass","hist_GenLQ2_Pt","hist_GenLQ2_Eta","hist_GenLQ2_Phi","hist_GenLQ2_Mass","hist_Jet1_Pt","hist_Jet1_Phi","hist_Jet1_Eta","hist_GenMET_Pt","hist_GenMET_Phi"};
    
    string xtitiles[34] = {"GenEle1_Pt [GeV]","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt [GeV]","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt [GeV]","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt [GeV]","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt [GeV]","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt [GeV]","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt [GeV]","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt [GeV]","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt [GeV]","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","Jet1_Pt [GeV]","Jet1_Phi","Jet1_Eta","GenMET_Pt [GeV]","GenMET_Phi"};
    
    string titiles[34]={"GenEle1_Pt","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","Jet1_Pt","Jet1_Phi","Jet1_Eta","GenMET_Pt","GenMET_Phi"};
    
    float xmin[34]={0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-6,-4,400,0,-6,-4,400,0,-4,-4,0,-4};
    float xmax[34]={3000,5,4,3000,5,4,3000,5,4,3000,5,4,3000,5,4,3000,5,4,3000,5,4,4500,6,4,2100,4500,6,4,2100,10000,4,4,1000,4};
    
    float sumWeight=0;
    float sum_pdfgenWeight=0;
    
    
  if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
    for(int i = 0; i<34; i++)
    {
        histo[i] = new TH1F(hist[i].c_str(),xtitiles[i].c_str(),100,xmin[i],xmax[i]);//histo without rewight
        histo[i]->Sumw2();
        
        histo_reweight[i] = new TH1F((hist[i]+"_reweight").c_str(),(xtitiles[i]+" reweight").c_str(),100,xmin[i],xmax[i]);//histo with reweight
        histo_reweight[i]->Sumw2();
    }
    
        Long64_t nbytes = 0, nb = 0;
        for (Long64_t jentry=0; jentry<nentries;jentry++) {
           Long64_t ientry = LoadTree(jentry);
            
           if (ientry > 47000) break;
           nb = fChain->GetEntry(jentry);   nbytes += nb;
            float weight=Weight*puWeight; //for without pdf reweighting
            float pdfweight=Weight*puWeight*LHEPdfWeight[0]; //for with pdf reweighting
            
            for(int i = 0; i<34; i++){
                float value=fChain->GetBranch(titiles[i].c_str())->GetLeaf(titiles[i].c_str())->GetValue();

                histo[i]->Fill(value,weight);
                histo_reweight[i]->Fill(value,pdfweight);
            }
            sumWeight=sumWeight+Weight;//or use sumWeight+=Weight;
            sum_pdfgenWeight=sum_pdfgenWeight+Weight*LHEPdfWeight[0];
    }
    

    for(int i = 0; i<34; i++){
        histo[i]->Scale(1/sumWeight);
        histo_reweight[i]->Scale(1/sum_pdfgenWeight);
    }
    
        TFile lqtobele("lqtobele.root","recreate");
        lqtobele.cd();
    
    for(int i = 0; i<34; i++){
        histo[i]->Write();
        histo_reweight[i]->Write();
    }
    
        lqtobele.Close();
    }

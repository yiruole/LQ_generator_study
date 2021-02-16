#define lqtodele_cxx
#include "lqtodele.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void lqtodele::Loop()
{
    TH1F *histo[35];
    TH1F *histo_reweight[35];
    
    string hist[35] = {"hist_GenEle1_Pt","hist_GenEle1_Eta","hist_GenEle1_Phi","hist_GenEle2_Pt","hist_GenEle2_Eta","hist_GenEle2_Phi","hist_GenJet1_Pt","hist_GenJet1_Eta","hist_GenJet1_Phi","hist_GenJet2_Pt","hist_GenJet2_Eta","hist_GenJet2_Phi","hist_GenJet3_Pt","hist_GenJet3_Eta","hist_GenJet3_Phi","hist_GenJet4_Pt","hist_GenJet4_Eta","hist_GenJet4_Phi","hist_GenJet5_Pt","hist_GenJet5_Eta","hist_GenJet5_Phi","hist_GenLQ1_Pt","hist_GenLQ1_Eta","hist_GenLQ1_Phi","hist_GenLQ1_Mass","hist_GenLQ2_Pt","hist_GenLQ2_Eta","hist_GenLQ2_Phi","hist_GenLQ2_Mass","hist_Jet1_Pt","hist_Jet1_Phi","hist_Jet1_Eta","hist_GenMET_Pt","hist_GenMET_Phi","nJet_store"};
    
    string xtitiles[35] = {"GenEle1_Pt [GeV]","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt [GeV]","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt [GeV]","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt [GeV]","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt [GeV]","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt [GeV]","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt [GeV]","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt [GeV]","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt [GeV]","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","Jet1_Pt [GeV]","Jet1_Phi","Jet1_Eta","GenMET_Pt [GeV]","GenMET_Phi","nJet_store"};
    
    string titiles[35]={"GenEle1_Pt","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","Jet1_Pt","Jet1_Phi","Jet1_Eta","GenMET_Pt","GenMET_Phi","nJet_store"};
    
    float xmin[35]={0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-5,-4,0,-6,-4,400,0,-6,-4,400,0,-4,-4,0,-4,0};
    float xmax[35]={3000,5,4,3000,5,4,3000,5,4,3000,5,4,3000,5,4,3000,5,4,3000,5,4,4500,6,4,2100,4500,6,4,2100,10000,4,4,1000,4,10};
    
    int nbins[35]={100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,1200,100,100,100,1200,100,100,100,100,100,10};
    
    float sumWeight=0;
    float sum_pdfgenWeight=0;
    
    
  if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
    for(int i = 0; i<35; i++)
    {
        histo[i] = new TH1F(hist[i].c_str(),xtitiles[i].c_str(),nbins[i],xmin[i],xmax[i]); //histo without rewight
        histo[i]->Sumw2();
        
        histo_reweight[i] = new TH1F((hist[i]+"_reweight").c_str(),(xtitiles[i]+" reweight").c_str(),nbins[i],xmin[i],xmax[i]);//histo with reweight
        histo_reweight[i]->Sumw2();
    }
    
        Long64_t nbytes = 0, nb = 0;
        for (Long64_t jentry=0; jentry<nentries;jentry++) {
           Long64_t ientry = LoadTree(jentry);
            
           if (ientry > 47000) break;
           nb = fChain->GetEntry(jentry);   nbytes += nb;
            float weight=Weight*puWeight;//for without pdf reweightin
            float pdfweight=Weight*puWeight*LHEPdfWeight[0]; //for with pdf reweighting
            
            for(int i = 0; i<35; i++){
                float value=fChain->GetBranch(titiles[i].c_str())->GetLeaf(titiles[i].c_str())->GetValue();
                
                if (i > 14 && i < 18 && nJet_store < 4)
                    continue;
                if (i > 17 && i < 21 && nJet_store < 5) //for njet5
                    continue;
                
                histo[i]->Fill(value,weight);
                histo_reweight[i]->Fill(value,pdfweight);
            }
            sumWeight=sumWeight+Weight;//or use sumWeight+=Weight;
            sum_pdfgenWeight=sum_pdfgenWeight+Weight*LHEPdfWeight[0];
    }
    
    
    for(int i = 0; i<35; i++){
        histo[i]->Scale(1/sumWeight);
        histo_reweight[i]->Scale(1/sum_pdfgenWeight);
    }
    
        TFile lqtodele("lqtodele.root","recreate");
        lqtodele.cd();
    
    for(int i = 0; i<35; i++){
        histo[i]->Write();
        histo_reweight[i]->Write();
    }
    
        lqtodele.Close();
    }

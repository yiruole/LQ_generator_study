#define lqtoxe_cxx
#include "lqtoxe.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

float xmax[34];
float xmin[34];
void lqtoxe::Loop()
{
    int massPoint;
    cout << "massPoint=" << endl;
    cin >> massPoint;
    cout << "massPoint=" << massPoint << endl;
    
    TH1F *histo[35];
    TH1F *histo_reweight[35];
    
    string hist[35] = {"hist_GenEle1_Pt","hist_GenEle1_Eta","hist_GenEle1_Phi","hist_GenEle2_Pt","hist_GenEle2_Eta","hist_GenEle2_Phi","hist_GenJet1_Pt","hist_GenJet1_Eta","hist_GenJet1_Phi","hist_GenJet2_Pt","hist_GenJet2_Eta","hist_GenJet2_Phi","hist_GenJet3_Pt","hist_GenJet3_Eta","hist_GenJet3_Phi","hist_GenJet4_Pt","hist_GenJet4_Eta","hist_GenJet4_Phi","hist_GenJet5_Pt","hist_GenJet5_Eta","hist_GenJet5_Phi","hist_GenLQ1_Pt","hist_GenLQ1_Eta","hist_GenLQ1_Phi","hist_GenLQ1_Mass","hist_GenLQ2_Pt","hist_GenLQ2_Eta","hist_GenLQ2_Phi","hist_GenLQ2_Mass","hist_Jet1_Pt","hist_Jet1_Phi","hist_Jet1_Eta","hist_GenMET_Pt","hist_GenMET_Phi","nJet_store"};
    
    string xtitiles[35] = {"GenEle1_Pt [GeV]","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt [GeV]","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt [GeV]","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt [GeV]","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt [GeV]","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt [GeV]","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt [GeV]","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt [GeV]","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt [GeV]","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","Jet1_Pt [GeV]","Jet1_Phi","Jet1_Eta","GenMET_Pt [GeV]","GenMET_Phi","nJet_store"};
    
    string titiles[35]={"GenEle1_Pt","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","Jet1_Pt","Jet1_Phi","Jet1_Eta","GenMET_Pt","GenMET_Phi","nJet_store"};
    

    if(massPoint==500) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=475; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=475; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else if(massPoint==1000) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=975; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=975; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else if(massPoint==1500) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=1475; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=1475; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else if(massPoint==2000) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=1975; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=1975; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else {
        cout << "wrong mass given" << endl;
    }
    
    
    if(massPoint==500) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2000; xmax[7]=5; xmax[8]=4; xmax[9]=2000; xmax[10]=5; xmax[11]=4; xmax[12]=1000; xmax[13]=5; xmax[14]=4; xmax[15]=1000; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=525; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=525; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else if(massPoint==1000) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2000; xmax[7]=5; xmax[8]=4; xmax[9]=2000; xmax[10]=5; xmax[11]=4; xmax[12]=1000; xmax[13]=5; xmax[14]=4; xmax[15]=1000; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=1025; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=1025; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else if(massPoint==1500) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2500; xmax[7]=5; xmax[8]=4; xmax[9]=2500; xmax[10]=5; xmax[11]=4; xmax[12]=1500; xmax[13]=5; xmax[14]=4; xmax[15]=1200; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=1525; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=1525; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else if(massPoint==2000) {
        xmax[0]=3000; xmax[1]=5; xmax[2]=4; xmax[3]=3000; xmax[4]=5; xmax[5]=4; xmax[6]=3000; xmax[7]=5; xmax[8]=4; xmax[9]=3000; xmax[10]=5; xmax[11]=4; xmax[12]=2000; xmax[13]=5; xmax[14]=4; xmax[15]=1500; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=3000; xmax[22]=6; xmax[23]=4; xmax[24]=2025; xmax[25]=3000; xmax[26]=6; xmax[27]=4; xmax[28]=2025; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else {
        cout << "wrong mass given" << endl;
    }
    
    int nbins[35]={100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,1000,100,100,100,1000,100,100,100,100,100,10};
    
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
            float weight=Weight*puWeight; //for without pdf reweighting
            float pdfweight=Weight*puWeight*LHEPdfWeight[0]; //for with pdf reweighting
            
            for(int i = 0; i<35; i++){
                float value=fChain->GetBranch(titiles[i].c_str())->GetLeaf(titiles[i].c_str())->GetValue();

                if (i > 14 && i < 18 && nJet_store < 4)
                    continue;
                if (i > 17 && i < 21 && nJet_store < 5) //for rule out njet5
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
    
        TFile lqtoxe("lqtoxe.root","recreate");
        lqtoxe.cd();
    
    for(int i = 0; i<35; i++){
        histo[i]->Write();
        histo_reweight[i]->Write();
    }
    
        lqtoxe.Close();
    }

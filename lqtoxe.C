#define lqtoxe_cxx
#include "lqtoxe.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


const int arraysize = 65;
float xmax[arraysize];
float xmin[arraysize];

void lqtoxe::Loop()
{
    int massPoint;
    cout << "massPoint=" << endl;       //enter masspoint
    cin >> massPoint;
    cout << "massPoint=" << massPoint << endl;
    
    
    TH1F *histo[arraysize];
    TH1F *histo_reweight[arraysize];
    
    string hist[arraysize] = {"hist_GenEle1_Pt","hist_GenEle1_Eta","hist_GenEle1_Phi","hist_GenEle2_Pt","hist_GenEle2_Eta","hist_GenEle2_Phi","hist_GenJet1_Pt","hist_GenJet1_Eta","hist_GenJet1_Phi","hist_GenJet2_Pt","hist_GenJet2_Eta","hist_GenJet2_Phi","hist_GenJet3_Pt","hist_GenJet3_Eta","hist_GenJet3_Phi","hist_GenJet4_Pt","hist_GenJet4_Eta","hist_GenJet4_Phi","hist_GenJet5_Pt","hist_GenJet5_Eta","hist_GenJet5_Phi","hist_GenLQ1_Pt","hist_GenLQ1_Eta","hist_GenLQ1_Phi","hist_GenLQ1_Mass","hist_GenLQ2_Pt","hist_GenLQ2_Eta","hist_GenLQ2_Phi","hist_GenLQ2_Mass","hist_GenMET_Pt","hist_GenMET_Phi","nJet_store","Gen_ST","hist_Ele1_Pt","hist_Ele1_Eta","hist_Ele1_Phi","hist_Ele2_Pt","hist_Ele2_Eta","hist_Ele2_Phi","hist_Jet1_Pt","hist_Jet1_Eta","hist_Jet1_Phi","hist_Jet2_Pt","hist_Jet2_Eta","hist_Jet2_Phi","hist_Jet3_Pt","hist_Jet3_Eta","hist_Jet3_Phi","hist_Jet4_Pt","hist_Jet4_Eta","hist_Jet4_Phi","hist_Jet5_Pt","hist_Jet5_Eta","hist_Jet5_Phi","ST","PFMET_Type1_Pt","PFMET_Type1_Phi","Me1j1","Me2j2","Me1j2","Me2j1","Gen_Me1j1","Gen_Me2j2","Gen_Me1j2","Gen_Me2j1"};
    
    string xtitiles[arraysize] = {"GenEle1_Pt [GeV]","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt [GeV]","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt [GeV]","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt [GeV]","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt [GeV]","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt [GeV]","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt [GeV]","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt [GeV]","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt [GeV]","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","GenMET_Pt [GeV]","GenMET_Phi","nJet_store","Gen_ST","Ele1_Pt [GeV]","Ele1_Eta","Ele1_Phi","Ele2_Pt [GeV]","Ele2_Eta","Ele2_Phi","Jet1_Pt [GeV]","Jet1_Eta","Jet1_Phi","Jet2_Pt [GeV]","Jet2_Eta","Jet2_Phi","Jet3_Pt [GeV]","Jet3_Eta","Jet3_Phi","Jet4_Pt [GeV]","Jet4_Eta","Jet4_Phi","Jet5_Pt [GeV]","Jet5_Eta","Jet5_Phi","ST","PFMET_Type1_Pt","PFMET_Type1_Phi","Me1j1","Me2j2","Me1j2","Me2j1","Gen_Me1j1","Gen_Me2j2","Gen_Me1j2","Gen_Me2j1"};
    
    string titiles[arraysize]={"GenEle1_Pt","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","GenMET_Pt","GenMET_Phi","nJet_store","Gen_ST","Ele1_Pt","Ele1_Eta","Ele1_Phi","Ele2_Pt","Ele2_Eta","Ele2_Phi","Jet1_Pt","Jet1_Eta","Jet1_Phi","Jet2_Pt","Jet2_Eta","Jet2_Phi","Jet3_Pt","Jet3_Eta","Jet3_Phi","Jet4_Pt","Jet4_Eta","Jet4_Phi","Jet5_Pt","Jet5_Eta","Jet5_Phi","ST","PFMET_Type1_Pt","PFMET_Type1_Phi","Me1j1","Me2j2","Me1j2","Me2j1","Gen_Me1j1","Gen_Me2j2","Gen_Me1j2","Gen_Me2j1"};
    

    if(massPoint==500) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=475; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=475; xmin[29]=0; xmin[30]=-4; xmin[31]=0; xmin[32]=0; xmin[33]=0; xmin[34]=-5; xmin[35]=-4; xmin[36]=0; xmin[37]=-5; xmin[38]=-4; xmin[39]=0; xmin[40]=-5; xmin[41]=-4; xmin[42]=0; xmin[43]=-5; xmin[44]=-4; xmin[45]=0; xmin[46]=-5; xmin[47]=-4; xmin[48]=0; xmin[49]=-5; xmin[50]=-4; xmin[51]=0; xmin[52]=-5; xmin[53]=-4; xmin[54]=0; xmin[55]=0; xmin[56]=-4; xmin[57]=0; xmin[58]=0; xmin[59]=0; xmin[60]=0; xmin[61]=0; xmin[62]=0; xmin[63]=0; xmin[64]=0;
    }
    else if(massPoint==1000) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=975; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=975; xmin[29]=0; xmin[30]=-4; xmin[31]=0; xmin[32]=0; xmin[33]=0; xmin[34]=-5; xmin[35]=-4; xmin[36]=0; xmin[37]=-5; xmin[38]=-4; xmin[39]=0; xmin[40]=-5; xmin[41]=-4; xmin[42]=0; xmin[43]=-5; xmin[44]=-4; xmin[45]=0; xmin[46]=-5; xmin[47]=-4; xmin[48]=0; xmin[49]=-5; xmin[50]=-4; xmin[51]=0; xmin[52]=-5; xmin[53]=-4; xmin[54]=0; xmin[55]=0; xmin[56]=-4; xmin[57]=0; xmin[58]=0; xmin[59]=0; xmin[60]=0; xmin[61]=0; xmin[62]=0; xmin[63]=0; xmin[64]=0;
    }
    else if(massPoint==1500) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=1475; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=1475; xmin[29]=0; xmin[30]=-4; xmin[31]=0; xmin[32]=0; xmin[33]=0; xmin[34]=-5; xmin[35]=-4; xmin[36]=0; xmin[37]=-5; xmin[38]=-4; xmin[39]=0; xmin[40]=-5; xmin[41]=-4; xmin[42]=0; xmin[43]=-5; xmin[44]=-4; xmin[45]=0; xmin[46]=-5; xmin[47]=-4; xmin[48]=0; xmin[49]=-5; xmin[50]=-4; xmin[51]=0; xmin[52]=-5; xmin[53]=-4; xmin[54]=0; xmin[55]=0; xmin[56]=-4; xmin[57]=0; xmin[58]=0; xmin[59]=0; xmin[60]=0; xmin[61]=0; xmin[62]=0; xmin[63]=0; xmin[64]=0;
    }
    else if(massPoint==2000) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=1975; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=1975; xmin[29]=0; xmin[30]=-4; xmin[31]=0; xmin[32]=0; xmin[33]=0; xmin[34]=-5; xmin[35]=-4; xmin[36]=0; xmin[37]=-5; xmin[38]=-4; xmin[39]=0; xmin[40]=-5; xmin[41]=-4; xmin[42]=0; xmin[43]=-5; xmin[44]=-4; xmin[45]=0; xmin[46]=-5; xmin[47]=-4; xmin[48]=0; xmin[49]=-5; xmin[50]=-4; xmin[51]=0; xmin[52]=-5; xmin[53]=-4; xmin[54]=0; xmin[55]=0; xmin[56]=-4; xmin[57]=0; xmin[58]=0; xmin[59]=0; xmin[60]=0; xmin[61]=0; xmin[62]=0; xmin[63]=0; xmin[64]=0;
    }
    else {
        cout << "wrong mass given" << endl;
    }
    
    
    if(massPoint==500) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2000; xmax[7]=5; xmax[8]=4; xmax[9]=2000; xmax[10]=5; xmax[11]=4; xmax[12]=1000; xmax[13]=5; xmax[14]=4; xmax[15]=1000; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=525; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=525; xmax[29]=1000; xmax[30]=4; xmax[31]=10; xmax[32]=5000; xmax[33]=2000; xmax[34]=5; xmax[35]=4; xmax[36]=2000; xmax[37]=5; xmax[38]=4; xmax[39]=2000; xmax[40]=5; xmax[41]=4; xmax[42]=2000; xmax[43]=5; xmax[44]=4; xmax[45]=1000; xmax[46]=5; xmax[47]=4; xmax[48]=1000; xmax[49]=5; xmax[50]=4; xmax[51]=1000; xmax[52]=5; xmax[53]=4; xmax[54]=5000; xmax[55]=1000; xmax[56]=4; xmax[57]=7000; xmax[58]=7000; xmax[59]=7000; xmax[60]=7000; xmax[61]=7000; xmax[62]=7000; xmax[63]=7000; xmax[64]=7000;
    }
    else if(massPoint==1000) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2000; xmax[7]=5; xmax[8]=4; xmax[9]=2000; xmax[10]=5; xmax[11]=4; xmax[12]=1000; xmax[13]=5; xmax[14]=4; xmax[15]=1000; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=1025; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=1025; xmax[29]=1000; xmax[30]=4; xmax[31]=10; xmax[32]=6000; xmax[33]=2000; xmax[34]=5; xmax[35]=4; xmax[36]=2000; xmax[37]=5; xmax[38]=4; xmax[39]=2000; xmax[40]=5; xmax[41]=4; xmax[42]=2000; xmax[43]=5; xmax[44]=4; xmax[45]=1000; xmax[46]=5; xmax[47]=4; xmax[48]=1000; xmax[49]=5; xmax[50]=4; xmax[51]=1000; xmax[52]=5; xmax[53]=4; xmax[54]=6000; xmax[55]=1000; xmax[56]=4; xmax[57]=7000; xmax[58]=7000; xmax[59]=7000; xmax[60]=7000;
            xmax[61]=7000; xmax[62]=7000; xmax[63]=7000; xmax[64]=7000;
    }
    else if(massPoint==1500) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2500; xmax[7]=5; xmax[8]=4; xmax[9]=2500; xmax[10]=5; xmax[11]=4; xmax[12]=1500; xmax[13]=5; xmax[14]=4; xmax[15]=1200; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=1525; xmax[25]=3000; xmax[26]=6; xmax[27]=4; xmax[28]=1525; xmax[29]=1000; xmax[30]=4; xmax[31]=10; xmax[32]=7500; xmax[33]=3000; xmax[34]=5; xmax[35]=4; xmax[36]=2000; xmax[37]=5; xmax[38]=4; xmax[39]=3000; xmax[40]=5; xmax[41]=4; xmax[42]=2000; xmax[43]=5; xmax[44]=4; xmax[45]=1000; xmax[46]=5; xmax[47]=4; xmax[48]=1000; xmax[49]=5; xmax[50]=4; xmax[51]=1000; xmax[52]=5; xmax[53]=4; xmax[54]=7500; xmax[55]=1000; xmax[56]=4; xmax[57]=7000; xmax[58]=7000; xmax[59]=7000; xmax[60]=7000;
            xmax[61]=7000; xmax[62]=7000; xmax[63]=7000; xmax[64]=7000;
    }
    else if(massPoint==2000) {
        xmax[0]=3000; xmax[1]=5; xmax[2]=4; xmax[3]=3000; xmax[4]=5; xmax[5]=4; xmax[6]=3000; xmax[7]=5; xmax[8]=4; xmax[9]=3000; xmax[10]=5; xmax[11]=4; xmax[12]=2000; xmax[13]=5; xmax[14]=4; xmax[15]=1500; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=3000; xmax[22]=6; xmax[23]=4; xmax[24]=2025; xmax[25]=3000; xmax[26]=6; xmax[27]=4; xmax[28]=2025; xmax[29]=1000; xmax[30]=4; xmax[31]=10; xmax[32]=9000; xmax[33]=3000; xmax[34]=5; xmax[35]=4; xmax[36]=2000; xmax[37]=5; xmax[38]=4; xmax[39]=3000; xmax[40]=5; xmax[41]=4; xmax[42]=2000; xmax[43]=5; xmax[44]=4; xmax[45]=1000; xmax[46]=5; xmax[47]=4; xmax[48]=1000; xmax[49]=5; xmax[50]=4; xmax[51]=1000; xmax[52]=5; xmax[53]=4; xmax[54]=9000; xmax[55]=1000; xmax[56]=4; xmax[57]=7000; xmax[58]=7000; xmax[59]=7000; xmax[60]=7000;
            xmax[61]=7000; xmax[62]=7000; xmax[63]=7000; xmax[64]=7000;
    }
    else {
        cout << "wrong mass given" << endl;
    }
    
    int nbins[arraysize]={100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,1000,100,100,100,1000,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100};
    
    float sumWeight=0;
    float sum_pdfgenWeight=0;
    
  
  if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();  //?
    
    for(int i = 0; i<arraysize; i++)
    {
        histo[i] = new TH1F(hist[i].c_str(),xtitiles[i].c_str(),nbins[i],xmin[i],xmax[i]); // define histo without rewight
        histo[i]->Sumw2();      //Create structure to store sum of squares of weights.
        
        histo_reweight[i] = new TH1F((hist[i]+"_reweight").c_str(),(xtitiles[i]+" reweight").c_str(),nbins[i],xmin[i],xmax[i]);//histo with reweight
        histo_reweight[i]->Sumw2();
    //    histo_reweight[i]->SetNpx(1000);
    }
    
    
    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {      //loop over tree entries?
        Long64_t ientry = LoadTree(jentry);                 //?
      if (ientry > 47000) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;   //read all branches
        float weight=Weight*puWeight; //for without pdf reweighting
        float pdfweight=Weight*puWeight*LHEPdfWeight[0]; //for with pdf reweighting
        
        float Gen_ST=GenEle1_Pt+GenEle2_Pt+GenJet1_Pt+GenJet2_Pt;
        float ST=Ele1_Pt+Ele2_Pt+Jet1_Pt+Jet2_Pt;
        
        float Me1j1=sqrt(2*Ele1_Pt*Jet1_Pt*(cosh(Ele1_Eta-Jet1_Eta)-cos(Ele1_Phi-Jet1_Phi))); //invariant mass
        float Me2j2=sqrt(2*Ele2_Pt*Jet2_Pt*(cosh(Ele2_Eta-Jet2_Eta)-cos(Ele2_Phi-Jet2_Phi)));
        float Me1j2=sqrt(2*Ele1_Pt*Jet2_Pt*(cosh(Ele1_Eta-Jet2_Eta)-cos(Ele1_Phi-Jet2_Phi)));
        float Me2j1=sqrt(2*Ele2_Pt*Jet1_Pt*(cosh(Ele2_Eta-Jet1_Eta)-cos(Ele2_Phi-Jet1_Phi)));
        
        float Gen_Me1j1=sqrt(2*GenEle1_Pt*GenJet1_Pt*(cosh(GenEle1_Eta-GenJet1_Eta)-cos(GenEle1_Phi-GenJet1_Phi))); //invariant mass
        float Gen_Me2j2=sqrt(2*GenEle2_Pt*GenJet2_Pt*(cosh(GenEle2_Eta-GenJet2_Eta)-cos(GenEle2_Phi-GenJet2_Phi)));
        float Gen_Me1j2=sqrt(2*GenEle1_Pt*GenJet2_Pt*(cosh(GenEle1_Eta-GenJet2_Eta)-cos(GenEle1_Phi-GenJet2_Phi)));
        float Gen_Me2j1=sqrt(2*GenEle2_Pt*GenJet1_Pt*(cosh(GenEle2_Eta-GenJet1_Eta)-cos(GenEle2_Phi-GenJet1_Phi)));
        
    for(int i = 0; i<arraysize; i++){     //loop over histogram and fill them
        float value;    //declare variable "value"
        if(i==32){
        value=Gen_ST;   //assign variable "value"
        }
        else if(i==54){
        value=ST;
        }
        else if(i==57){
        value=Me1j1;
        }
        else if(i==58){
        value=Me2j2;
        }
        else if(i==59){
        value=Me1j2;
        }
        else if(i==60){
        value=Me2j1;
        }
        
        else if(i==61){
        value=Gen_Me1j1;
        }
        else if(i==62){
        value=Gen_Me2j2;
        }
        else if(i==63){
        value=Gen_Me1j2;
        }
        else if(i==64){
        value=Gen_Me2j1;
        }
        else{
        value=fChain->GetBranch(titiles[i].c_str())->GetLeaf(titiles[i].c_str())->GetValue(); //"value" store value that to filling into histogram. Looking at the titile that we have at the array index, find the branch in the tree with that name and get value of that, this code only be excuted if i is not 32 or 54, because there is no Gen_ST and ST in the branch
        }
                
                if (i > 14 && i < 18 && nJet_store < 4)  //if jet4 doesnt exist, the histgram will fill with zeros, we want to avoid that, so if jet4 doesnt exist, we want to jump out of loop, dont fill histgram(skip124 125)
                    continue;
                if (i > 17 && i < 21 && nJet_store < 5) //for rule out njet5
                    continue;
                
                if (i > 35 && i < 39 && nEle_store < 2) //for rule out nele2
                    continue;
                
                if (i > 38 && i < 42 && nJet_store < 1)
                    continue;
                if (i > 41 && i < 45 && nJet_store < 2)
                    continue;
                if (i > 44 && i < 48 && nJet_store < 3)
                    continue;
                if (i > 47 && i < 51 && nJet_store < 4)
                    continue;
                if (i > 50 && i < 54 && nJet_store < 5)
                    continue;
                
                histo[i]->Fill(value,weight);
                histo_reweight[i]->Fill(value,pdfweight);
            }
            sumWeight=sumWeight+Weight;    //or do sumWeight+=Weight;
            sum_pdfgenWeight=sum_pdfgenWeight+Weight*LHEPdfWeight[0];
    }
    

    for(int i = 0; i<arraysize; i++){
        histo[i]->Scale(47000/sumWeight);  //renormalize
        histo_reweight[i]->Scale(47000/sum_pdfgenWeight);
        // histo_reweight[i]->Scale(nentries/sum_pdfgenWeight);

    }
    
        TFile lqtoxe("lqtoxe.root","recreate");
        lqtoxe.cd();
    
    for(int i = 0; i<arraysize; i++){
        histo[i]->Write();
        histo_reweight[i]->Write();
    }
    
        lqtoxe.Close();
    }

//   In a ROOT session, you can do:
//      root> .L lqtoxe.C
//      root> lqtoxe t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

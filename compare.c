#include <string>
float xmax[34];
float xmin[34];

void compare(int massPoint){
    cout << "massPoint=" << massPoint << endl;
    
    TString filename0 = "/Users/ruoleyi/Desktop/LQ_generator_study/histos_lqtoue_m";
    filename0 += massPoint;
    filename0 += TString(".root");
    cout << "filename0=" << filename0 << endl;

    TString filename1 = "/Users/ruoleyi/Desktop/LQ_generator_study/histos_lqtobele_m";
    filename1 += massPoint;
    filename1 += TString(".root");
    cout << "filename1=" << filename1 << endl;
    
    TString filename2 = "/Users/ruoleyi/Desktop/LQ_generator_study/histos_lqtodele_m";
    filename2 += massPoint;
    filename2 += TString(".root");
    cout << "filename2=" << filename2 << endl;
   
    
 //lqtoue
TFile *_file0 = TFile::Open(filename0);
    TH1F *h0;
    
//lqtobele
TFile *_file1 = TFile::Open(filename1);
    TH1F *h1;
    
//lqtodele
TFile *_file2 = TFile::Open(filename2);
    TH1F *h2;

    
    string hist[34] = {"hist_GenEle1_Pt","hist_GenEle1_Eta","hist_GenEle1_Phi","hist_GenEle2_Pt","hist_GenEle2_Eta","hist_GenEle2_Phi","hist_GenJet1_Pt","hist_GenJet1_Eta","hist_GenJet1_Phi","hist_GenJet2_Pt","hist_GenJet2_Eta","hist_GenJet2_Phi","hist_GenJet3_Pt","hist_GenJet3_Eta","hist_GenJet3_Phi","hist_GenJet4_Pt","hist_GenJet4_Eta","hist_GenJet4_Phi","hist_GenJet5_Pt","hist_GenJet5_Eta","hist_GenJet5_Phi","hist_GenLQ1_Pt","hist_GenLQ1_Eta","hist_GenLQ1_Phi","hist_GenLQ1_Mass","hist_GenLQ2_Pt","hist_GenLQ2_Eta","hist_GenLQ2_Phi","hist_GenLQ2_Mass","hist_Jet1_Pt","hist_Jet1_Phi","hist_Jet1_Eta","hist_GenMET_Pt","hist_GenMET_Phi"};

    string xtitiles[34]={"GenEle1_Pt [GeV]","GenEle1_Eta","GenEle1_Phi","GenEle2_Pt [GeV]","GenEle2_Eta","GenEle2_Phi","GenJet1_Pt [GeV]","GenJet1_Eta","GenJet1_Phi","GenJet2_Pt [GeV]","GenJet2_Eta","GenJet2_Phi","GenJet3_Pt [GeV]","GenJet3_Eta","GenJet3_Phi","GenJet4_Pt [GeV]","GenJet4_Eta","GenJet4_Phi","GenJet5_Pt [GeV]","GenJet5_Eta","GenJet5_Phi","GenLQ1_Pt [GeV]","GenLQ1_Eta","GenLQ1_Phi","GenLQ1_Mass","GenLQ2_Pt [GeV]","GenLQ2_Eta","GenLQ2_Phi","GenLQ2_Mass","Jet1_Pt [GeV]","Jet1_Phi","Jet1_Eta","GenMET_Pt [GeV]","GenMET_Phi"};
    
 
    if(massPoint==500) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=200; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=200; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else if(massPoint==1000) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=700; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=700; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else if(massPoint==1500) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=1200; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=1200; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else if(massPoint==2000) {
        xmin[0]=0; xmin[1]=-5; xmin[2]=-4; xmin[3]=0; xmin[4]=-5; xmin[5]=-4; xmin[6]=0; xmin[7]=-5; xmin[8]=-4; xmin[9]=0; xmin[10]=-5; xmin[11]=-4; xmin[12]=0; xmin[13]=-5; xmin[14]=-4; xmin[15]=0; xmin[16]=-5; xmin[17]=-4; xmin[18]=0; xmin[19]=-5; xmin[20]=-4; xmin[21]=0; xmin[22]=-6; xmin[23]=-4; xmin[24]=1900; xmin[25]=0; xmin[26]=-6; xmin[27]=-4; xmin[28]=1900; xmin[29]=0; xmin[30]=-4; xmin[31]=-4; xmin[32]=0; xmin[33]=-4;
    }
    else {
        cout << "wrong mass given" << endl;
    }
    
    if(massPoint==500) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2000; xmax[7]=5; xmax[8]=4; xmax[9]=2000; xmax[10]=5; xmax[11]=4; xmax[12]=1000; xmax[13]=5; xmax[14]=4; xmax[15]=1000; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=800; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=800; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else if(massPoint==1000) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2000; xmax[7]=5; xmax[8]=4; xmax[9]=2000; xmax[10]=5; xmax[11]=4; xmax[12]=1000; xmax[13]=5; xmax[14]=4; xmax[15]=1000; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=1300; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=1300; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else if(massPoint==1500) {
        xmax[0]=2000; xmax[1]=5; xmax[2]=4; xmax[3]=2000; xmax[4]=5; xmax[5]=4; xmax[6]=2500; xmax[7]=5; xmax[8]=4; xmax[9]=2500; xmax[10]=5; xmax[11]=4; xmax[12]=1500; xmax[13]=5; xmax[14]=4; xmax[15]=1200; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=2500; xmax[22]=6; xmax[23]=4; xmax[24]=1800; xmax[25]=2500; xmax[26]=6; xmax[27]=4; xmax[28]=1800; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else if(massPoint==2000) {
        xmax[0]=3000; xmax[1]=5; xmax[2]=4; xmax[3]=3000; xmax[4]=5; xmax[5]=4; xmax[6]=3000; xmax[7]=5; xmax[8]=4; xmax[9]=3000; xmax[10]=5; xmax[11]=4; xmax[12]=2000; xmax[13]=5; xmax[14]=4; xmax[15]=1500; xmax[16]=5; xmax[17]=4; xmax[18]=1000; xmax[19]=5; xmax[20]=4; xmax[21]=3000; xmax[22]=6; xmax[23]=4; xmax[24]=2100; xmax[25]=3000; xmax[26]=6; xmax[27]=4; xmax[28]=2100; xmax[29]=3000; xmax[30]=4; xmax[31]=4; xmax[32]=1000; xmax[33]=4;
    }
    else {
        cout << "wrong mass given" << endl;
    }

    
      for(int i = 0; i<34; i++)
      {
          // Define the Canvas
          TCanvas* can = new TCanvas(("can"+hist[i]).c_str(),("can"+hist[i]).c_str());
          can->Divide(2,1);   //divide canvas to two part(left and right)
          can->cd(1);   //go to canvas1
          
          // Draw histogram without reweight
          // Upper plot will be in canvas1-pad1
          TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 1, 1.0);
          pad1->SetBottomMargin(0.1); // Upper and lower plot are not joined
          pad1->SetGridx();         // Vertical grid
          pad1->Draw();             // Draw the upper pad: pad1
          pad1->cd();               // pad1 becomes the current pad
          h0 = (TH1F*) _file0->Get(hist[i].c_str());        //h0(lqtoue) without reweight
          
          // h0 settings
          h0->SetLineColor(kBlue+1);
          h0->SetLineWidth(2);
          h0->SetName((hist[i]+"_LQToUE").c_str());         //set name
          h0->GetXaxis()->SetTitle(xtitiles[i].c_str());    //set xaxis
          h0->GetYaxis()->SetTitle("N(event)");             //set yaxis(n event)
          
          // Y axis h0 plot settings
          h0->GetYaxis()->SetTitleSize(18);
          h0->GetYaxis()->SetTitleFont(43);
          h0->GetYaxis()->SetLabelSize(7.5);
          h0->GetYaxis()->SetLabelFont(43);
          h0->GetYaxis()->SetTitleOffset(1.3);
          h0->GetXaxis()->SetRangeUser(xmin[i],xmax[i]);   //set x range
          h0->Draw("e");   //  if wanna draw normalized, use h0->DrawNormalized("e");
          
          
          h1 = (TH1F*) _file1->Get(hist[i].c_str());   //h1(lqtobele) without reweight
          std::cout << "getentries=" << h1->GetEntries() << std::endl;    //check entries
          // h1 settings
          h1->SetLineColor(kRed);
          h1->SetLineWidth(2);
          h1->SetName((hist[i]+"_LQToBEle").c_str());
          h1->Draw("samese"); //histsames + e, draw in same histogram
          
          
          h2 = (TH1F*) _file2->Get(hist[i].c_str());    //h2(lqtodele) without reweight
          // h2 settings
          h2->SetLineColor(8);
          h2->SetLineWidth(2);
          h2->SetName((hist[i]+"_LQToDEle").c_str());
          h2->Draw("samese");
          
          //statbox setting
          gStyle->SetOptStat(1111);
          gPad->Update();
          TPaveStats *st0 = (TPaveStats*)h0->FindObject("stats");
          st0->SetY1NDC(0.9); //new y end position
          st0->SetY2NDC(0.8); //new y start position
          st0->SetX1NDC(0.83); //new x start position
          st0->SetX2NDC(1); //new x end position
          
          gPad->Update();
          TPaveStats *st1 = (TPaveStats*)h1->FindObject("stats");
          st1->SetY1NDC(0.79); //new y end position
          st1->SetY2NDC(0.69); //new y start position
          st1->SetX1NDC(0.83); //new x start position
          st1->SetX2NDC(1); //new x end position
          
          gPad->Update();
          TPaveStats *st2 = (TPaveStats*)h2->FindObject("stats");
          st2->SetY1NDC(0.68); //new y end position
          st2->SetY2NDC(0.58); //new y start position
          st2->SetX1NDC(0.83); //new x start position
          st2->SetX2NDC(1); //new x end position
          
          //legend settings: new TLegend(x1,y1,x2,y2);
          TLegend* leg1 = new TLegend(0.86,0.45,1,0.55);
          leg1->AddEntry(h0,"LQToUE","l");
          leg1->AddEntry(h1,"LQToBEle","l");
          leg1->AddEntry(h2,"LQToDEle","l");
          leg1->SetBorderSize(0);
          leg1->Draw();


          // lower plot(ratio plot) will be in canvas1-pad2
          can->cd(1);          // Go back to canvas1 before defining pad2
          TPad *pad2 = new TPad("pad2", "pad2", 0, 0.05, 1, 0.3);
          pad2->SetTopMargin(0.1);
          pad2->SetBottomMargin(0.1);
          pad2->SetGridx(); // vertical grid
          pad2->Draw();
          pad2->cd();       // pad2 becomes the current pad
          
          TGraphAsymmErrors *ratioGraph = new TGraphAsymmErrors();
          ratioGraph->Divide(h2,h0,"pois"); //print value, if wanna print value and error use pois+v: ratioGraph->Divide(h2,h0,"poisv")
          
          // Ratio plot (ratioGraph) settings
          ratioGraph->SetTitle(""); // Remove the ratio title

          // Y axis ratio plot settings
          ratioGraph->Draw("ap");  //axis point
          ratioGraph->GetYaxis()->SetTitle("DEle/UE");
          ratioGraph->GetYaxis()->SetNdivisions(505);
          ratioGraph->GetYaxis()->SetTitleSize(20);
          ratioGraph->GetYaxis()->SetTitleFont(43);
          ratioGraph->GetYaxis()->SetTitleOffset(1);
          ratioGraph->GetYaxis()->SetLabelFont(43); // Absolute font size in pixel (precision 3)
          ratioGraph->GetYaxis()->SetLabelSize(11);
          ratioGraph->GetYaxis()->SetRangeUser(0.5,1.5);
          ratioGraph->GetXaxis()->SetLimits(xmin[i],xmax[i]);
      

          // X axis ratio plot settings
          ratioGraph->GetXaxis()->SetTitleSize(20);
          ratioGraph->GetXaxis()->SetTitleFont(43);
          ratioGraph->GetXaxis()->SetTitleOffset(4.);
          ratioGraph->GetXaxis()->SetLabelFont(43); // Absolute font size in pixel (precision 3)
          ratioGraph->GetXaxis()->SetLabelSize(10);
          ratioGraph->Draw("ap");  //axis point
          
          TLine *l=new TLine(xmin[i],1,xmax[i],1);
          l->SetLineColor(kBlue);
          l->Draw();
          
          
          
          

          
          
          
          can->cd(2);   //go to canvas2
          
          // Draw histogram with reweight
          // Upper plot will be in canvas2-pad3
          TPad *pad3 = new TPad("pad3", "pad3", 0, 0.3, 1, 1.0);
          pad3->SetBottomMargin(0.1); // Upper and lower plot are not joined
          pad3->SetGridx();         // Vertical grid
          pad3->Draw();             // Draw the upper pad: pad1
          pad3->cd();               // pad3 becomes the current pad
          h0 = (TH1F*) _file0->Get(hist[i].c_str());     //h0(lqtoue) with reweight(for lqtoue, with or withour reweight is same)
          
          // h0_reweight settings
          h0->SetLineColor(kBlue+1);
          h0->SetLineWidth(2);
          h0->SetName((hist[i]+"_LQToUE"+"_reweight").c_str());         //set name
          h0->GetXaxis()->SetTitle(xtitiles[i].c_str());    //set xaxis
          h0->GetYaxis()->SetTitle("N(event)");             //set yaxis( n event)
          
          // Y axis h0_reweight plot settings
          h0->GetYaxis()->SetTitleSize(18);
          h0->GetYaxis()->SetTitleFont(43);
          h0->GetYaxis()->SetLabelSize(7.5);
          h0->GetYaxis()->SetLabelFont(43);
          h0->GetYaxis()->SetTitleOffset(1.3);
          h0->GetXaxis()->SetRangeUser(xmin[i],xmax[i]);   //set x range
          h0->Draw("e");
          
          
          h1 = (TH1F*) _file1->Get((hist[i]+"_reweight").c_str());    //h1(lqtobele) with reweight
          // h1_reweight settings
          h1->SetLineColor(kRed);
          h1->SetLineWidth(2);
          h1->SetName((hist[i]+"_LQToBEle"+"_reweight").c_str());
          h1->Draw("samese"); //histsames + e
          
          
          h2 = (TH1F*) _file2->Get((hist[i]+"_reweight").c_str());    //h2(lqtodele) with reweight
          // h2_reweight settings
          h2->SetLineColor(8);
          h2->SetLineWidth(2);
          h2->SetName((hist[i]+"_LQToDEle"+"_reweight").c_str());
          h2->Draw("samese");
          
          
          //statbox setting
          gStyle->SetOptStat(1111);
          gPad->Update();
          TPaveStats *st3 = (TPaveStats*)h0->FindObject("stats");
          st3->SetY1NDC(0.9); //new y end position
          st3->SetY2NDC(0.8); //new y start position
          st3->SetX1NDC(0.83); //new x start position
          st3->SetX2NDC(1); //new x end position
          
          gPad->Update();
          TPaveStats *st4 = (TPaveStats*)h1->FindObject("stats");
          st4->SetY1NDC(0.79); //new y end position
          st4->SetY2NDC(0.69); //new y start position
          st4->SetX1NDC(0.83); //new x start position
          st4->SetX2NDC(1); //new x end position
          
          gPad->Update();
          TPaveStats *st5 = (TPaveStats*)h2->FindObject("stats");
          st5->SetY1NDC(0.68); //new y end position
          st5->SetY2NDC(0.58); //new y start position
          st5->SetX1NDC(0.83); //new x start position
          st5->SetX2NDC(1); //new x end position
          
          //legend settings: new TLegend(x1,y1,x2,y2);
          TLegend* leg2 = new TLegend(0.86,0.45,1,0.55);
          leg2->AddEntry(h0,"LQToUE","l");
          leg2->AddEntry(h1,"LQToBEle","l");
          leg2->AddEntry(h2,"LQToDEle","l");
          leg2->SetBorderSize(0);
          leg2->Draw();

          
          // lower plot will be in canvas2-pad4
          can->cd(2);          // Go back to the main canvas before defining pad4
          TPad *pad4 = new TPad("pad4", "pad4", 0, 0.05, 1, 0.3);
          pad4->SetTopMargin(0.1);
          pad4->SetBottomMargin(0.1);
          pad4->SetGridx(); // vertical grid
          pad4->Draw();
          pad4->cd();       // pad4 becomes the current pad
            
          
          TGraphAsymmErrors *ratioGraph2 = new TGraphAsymmErrors();
          ratioGraph2->Divide(h2,h0,"pois");
          
          // Ratio plot (ratioGraph) settings
          ratioGraph2->SetTitle(""); // Remove the ratio title

          // Y axis ratio plot settings
          ratioGraph2->GetYaxis()->SetTitle("DEle/UE");
          ratioGraph2->GetYaxis()->SetNdivisions(505);
          ratioGraph2->GetYaxis()->SetTitleSize(20);
          ratioGraph2->GetYaxis()->SetTitleFont(43);
          ratioGraph2->GetYaxis()->SetTitleOffset(1);
          ratioGraph2->GetYaxis()->SetLabelFont(43); // Absolute font size in pixel (precision 3)
          ratioGraph2->GetYaxis()->SetLabelSize(11);
          ratioGraph2->GetYaxis()->SetRangeUser(0.5,1.5);
          ratioGraph2->GetXaxis()->SetLimits(xmin[i],xmax[i]);
          
          // X axis ratio plot settings
          ratioGraph2->GetXaxis()->SetTitleSize(20);
          ratioGraph2->GetXaxis()->SetTitleFont(43);
          ratioGraph2->GetXaxis()->SetTitleOffset(4.);
          ratioGraph2->GetXaxis()->SetLabelFont(43); // Absolute font size in pixel (precision 3)
          ratioGraph2->GetXaxis()->SetLabelSize(10);
          ratioGraph2->Draw("ap");  //axis point
          
          TLine *l2=new TLine(xmin[i],1,xmax[i],1);
          l2->SetLineColor(kBlue);
          l2->Draw();
  

   can->Write();
   can->Print((hist[i]+".pdf").c_str());   //save pdf
      }
  }




#include "/home/ilc/mizunot/bin/root_macros/style.C"
#include "photonERec.cxx"
#include "photonERec3.cxx"
#include "photonERec4.cxx"
#include "photonERec5.cxx"
#include "photonERec6.cxx"
#include "photonERec7.cxx"

void GammaCalib07_11photonP() {

        stringstream filest;
        filest << "../root_merge.mILD_l5_o1_v02/"
               << "2f_z_l.eL.pR.mILD_l5_o1_v02.root" << ends;

        TFile *f = new TFile(filest.str().data());
	
	setILDStyle();
	//gStyle->SetPadRightMargin(1.0);
	//gStyle->SetPadRightMargin(1.0);
	gStyle->SetOptStat(1000001110);
        gStyle->SetStatH(0.15);
        gStyle->SetStatX(0.9);
        gStyle->SetStatY(0.9);
	gStyle->SetOptFit();

        TNtuple *hGen = static_cast<TNtuple *>(f->Get("hGen"));
        TNtuple *hAnl = static_cast<TNtuple *>(f->Get("hAnl"));
	
	double Ecm = 500.;

	Int_t nbinx   = 200;	
	Double_t xmin = -.15; 
	Double_t xmax = .15; 	

	//Int_t nbiny   = 520;	
	//Double_t ymin = -10.; 
	//Double_t ymax = 510.; 	

        TH1D *h20 = new TH1D("h20","",200.,xmin,xmax);
        TH1D *h40 = new TH1D("h40","",200.,xmin,xmax);
        TH1D *h60 = new TH1D("h60","",200.,xmin,xmax);
        TH1D *h80 = new TH1D("h80","",200.,xmin,xmax);
        TH1D *h81 = new TH1D("h81","",200.,xmin,xmax);
        TH1D *h82 = new TH1D("h82","",200.,xmin,xmax);
        TH1D *h83 = new TH1D("h83","",200.,-.2,.2);
        TH1D *h84 = new TH1D("h84","",200.,-.2,.2);
        TH1D *h90 = new TH1D("h90","",200.,-.2,.2);
        TH1D *h95 = new TH1D("h95","",200.,-.2,.2);
        TH1D *h99 = new TH1D("h99","",200.,-.2,.2);


	TCut cut1 = "pdg0==13 && abs(mzgen-91.2)<10";
	TCut cut3 = "coneen > -0.5";

	double sa[20];
	int fo[20],fop[20];
	for (int i0=0;i0<20;i0++){
		sa[i0]=0.0;
		fo[i0]=0;
		fop[i0]=0;
	}


//	for (int i1=0;i1<20;i1++){
	double i1=5.;	
	TCut cut4 = "abs(cos(photonthetaMC))>i1*0.05 && abs(cos(photonthetaMC))<(i1+1.)*0.05";
//	        for (int i2=0;i2<20;i2++){
	double i2=.6;
			TCut cut7 = "abs(sin(photonthetaMC))>i2*0.05 && abs(cos(photonthetaMC))<(i2+1.)*0.05";
		        hAnl->Draw("(-photonEMC+photonERec5(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl))/photonEMC>>h90",cut1+cut3+cut4+cut7);
		        hAnl->Draw("(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl))/photonEMC>>h95",cut1+cut3+cut4+cut7);
			int   zfo  = (h90->GetBinContent(100))+(h90->GetBinContent(101)); 
			int   zfop  = (h95->GetBinContent(100))+(h95->GetBinContent(101)); 
			if (zfop<zfo){
				sa[0]=sa[0]+0.05;			
			}
//		}
		
//	}
cout<<"sa[0]= "<<sa[0]<<endl;

/*
        TCanvas *c10 = new TCanvas("c10");
	hAnl->Draw("(-photonEMC+photonERec(500.,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl,0))/photonEMC>>h20",cut1+cut2);
        h20->SetLineColor(kBlue);
        //h20->Draw("");
        gPad->Update();
        TPaveStats *st1 = (TPaveStats*)h20->GetListOfFunctions()->FindObject("stats");


        //h20->SetTitle("Energy Resolution of Photon");
        //h20->SetXTitle("Energy Resolution of Photon");
        //h20->SetYTitle("");

        hAnl->Draw("(-photonEMC+photonERec3(500.,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl,0))/photonEMC>>h40",cut1+cut2);
        //h40->Draw("same");
        h40->SetLineColor(kGreen+2);
        gPad->Update();
        TPaveStats *st2 = (TPaveStats*)h40->GetListOfFunctions()->FindObject("stats");


	hAnl->Draw("(-photonEMC+photonERec4(500.,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl,0))/photonEMC>>h60",cut1+cut2);
        h60->SetTitle("Energy Resolution of Photon");
        h60->SetXTitle("Energy Resolution of Photon");
        h60->SetYTitle("");
	h60->SetLineColor(kRed);
        gPad->Update();
        TPaveStats *st3 = (TPaveStats*)h60->GetListOfFunctions()->FindObject("stats");


        hAnl->Draw("(photonEAnl-photonEMC)/photonEMC>>h80",cut1+cut2);
        h80->SetLineColor(kViolet);
        gPad->Update();
        TPaveStats *st4 = (TPaveStats*)h80->GetListOfFunctions()->FindObject("stats");


        hAnl->Draw("(photonOrigEAnl-photonEMC)/photonEMC>>h81",cut1+cut2);
        h81->SetLineColor(kYellow+3);
        gPad->Update();
        TPaveStats *st81 = (TPaveStats*)h81->GetListOfFunctions()->FindObject("stats");

        hAnl->Draw("(photonOrigEAnl-photonEMC)/photonEMC>>h82",cut1+cut2+cut82);
        h82->SetLineColor(kBlue);
        gPad->Update();
        TPaveStats *st82 = (TPaveStats*)h82->GetListOfFunctions()->FindObject("stats");

        hAnl->Draw("(photonOrigEAnl-photonEMC)/photonEMC>>h83",cut1+cut2+cut83);
        h83->SetLineColor(kRed);
        gPad->Update();
        TPaveStats *st83 = (TPaveStats*)h83->GetListOfFunctions()->FindObject("stats");

        hAnl->Draw("(photonOrigEAnl-photonEMC)/photonEMC>>h84",cut1+cut2+cut84);
        h84->SetLineColor(kGreen);
        gPad->Update();
        TPaveStats *st84 = (TPaveStats*)h84->GetListOfFunctions()->FindObject("stats");

        hAnl->Draw("(-photonEMC+photonERec5(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl))/photonEMC>>h90",cut1+cut2);
        h90->SetTitle("Energy Resolution of Photon");
        h90->SetXTitle("Energy Resolution of Photon");
        h90->SetYTitle("");
        h90->SetLineColor(kOrange-3);
        gPad->Update();
        TPaveStats *st5 = (TPaveStats*)h90->GetListOfFunctions()->FindObject("stats");


        hAnl->Draw("(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl))/photonEMC>>h95",cut1+cut2);
        h95->SetTitle("Energy Resolution of Photon");
        h95->SetXTitle("Energy Resolution of Photon");
        h95->SetYTitle("");
        h95->SetLineColor(kAzure+10);
        gPad->Update();
        TPaveStats *st6 = (TPaveStats*)h95->GetListOfFunctions()->FindObject("stats");


        hAnl->Draw("(-photonEMC+photonERec7(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl))/photonEMC>>h99",cut1+cut2);
        h99->SetTitle("Energy Resolution of Photon");
        h99->SetXTitle("Energy Resolution of Photon");
        h99->SetYTitle("");
        h99->SetLineColor(kTeal-3);
        gPad->Update();
        TPaveStats *st7 = (TPaveStats*)h99->GetListOfFunctions()->FindObject("stats");


	h82->Scale(1./h82->Integral());
	h83->Scale(1./h83->Integral());
	h84->Scale(1./h84->Integral());

	h95->Draw("");
        //h99->Draw("");
        h90->Draw("same");
        h60->Draw("same");
        //h80->Draw("same");
        //h81->Draw("same");
        //h82->Draw("");
        //h83->Draw("same");
        //h84->Draw("same");
        //h40->Draw("same");
        //h20->Draw("same");
*/	}
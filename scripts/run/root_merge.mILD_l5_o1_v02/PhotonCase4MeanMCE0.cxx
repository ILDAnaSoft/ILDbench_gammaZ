
//#include "/home/ilc/mizunot/bin/root_macros/style.C"
#include "photonERec6.cxx"
#include "photonERec63.cxx"

TGraphErrors *PhotonCase4MeanMCE0(int a){ 
//void PhotonCase4SigmaTheta(){ 

        stringstream filestl;
        stringstream filestr;

        filestl << "../root_merge.mILD_l5_o1_v02/"
               << "2f_z_l.eL.pR.mILD_l5_o1_v02.root" << ends;

        filestr << "../root_merge.mILD_l5_o1_v02/"
               << "2f_z_l.eR.pL.mILD_l5_o1_v02.root" << ends;

        TFile *fl = new TFile(filestl.str().data());
        TFile *fr = new TFile(filestr.str().data());
	

	//setILDStyle();
	//gStyle->SetPadRightMargin(1.0);
/*	/gStyle->SetPadRightMargin(1.0);
	gStyle->SetOptStat(1000001110);
        gStyle->SetStatH(0.15);
        gStyle->SetStatW(0.15);
        gStyle->SetStatX(0.9);
        gStyle->SetStatY(0.9);
	gStyle->SetOptFit();
*/
        TNtuple *hGenl = static_cast<TNtuple *>(fl->Get("hGen"));
        TNtuple *hAnll = static_cast<TNtuple *>(fl->Get("hAnl"));
        TNtuple *hGenr = static_cast<TNtuple *>(fr->Get("hGen"));
        TNtuple *hAnlr = static_cast<TNtuple *>(fr->Get("hAnl"));
	
        double expl=5547.58 * 0.62 * 1600.;
        double expr=4344.86 * 0.62 * 1600.;
	double genl=hGenl->GetEntries();
	double genr=hGenr->GetEntries();
        double wl=expl/genl;  
        double wr=expr/genr;
        double nexp=expl+expr;

	
	double Ecm = 500.;

	Int_t nbinx   = 520;	
	Double_t xmin = -10.; 
	Double_t xmax = 510.; 	

	Int_t nbiny   = 520;	
	Double_t ymin = -10.; 
	Double_t ymax = 510.; 	

	TCut cut1 = "pdg0==13 && abs(mzgen-91.2)<10";
	TCut cut3 = "coneen > -0.5";
	TCut cut4 = "abs(coslep1)<0.75 && abs(coslep2)<0.75";
        TCut cut2 = cut3;
        TCut cut6 = "abs(sin(photonphiMC))<=1.";

        const int kNhist = 7;
        TCut cutv[kNhist];

        cutv[0] = "photonEMC<120.";
        cutv[1] = "photonEMC>=120. && photonEMC<160.";
        cutv[2] = "photonEMC>=160. && photonEMC<180.";
        cutv[3] = "photonEMC>=180. && photonEMC<200.";
        cutv[4] = "photonEMC>=200. && photonEMC<220.";
        cutv[5] = "photonEMC>=220. && photonEMC<240.";
        cutv[6] = "photonEMC>=240. && photonEMC<260.";

/*        cutv[6] = "abs(sin(photonphiMC))<0.1";
        cutv[7] = "abs(sin(photonphiMC))>=0.1 && abs(sin(photonphiMC))<0.2";
        cutv[8] = "abs(sin(photonphiMC))>=0.2 && abs(sin(photonphiMC))<0.4";
        cutv[9] = "abs(sin(photonphiMC))>=0.4 && abs(sin(photonphiMC))<0.6";
        cutv[10] = "abs(sin(photonphiMC))>=0.6 && abs(sin(photonphiMC))<0.8";
        cutv[11] = "abs(sin(photonphiMC))>=0.8";*/


        const double kXmin = -.01;
        const double kXmax = .01;

        const int histNo1st = 51;

/*        double ange[12],sig[12],sige[12],ste[12],stee[12],numt[12];
        double ang[] = {.1,.3,.5,.7,.85,.95,.05,.15,.3,.5,.7,.9};
*/
        double ange[kNhist],sig[kNhist],sige[kNhist],ste[kNhist],stee[kNhist],numt[kNhist];
        double ang[] = {85.,140.,170.,190.,210.,230.,250.};


	for (int i=0;i<kNhist;i++){
	        stringstream hname;	
	        stringstream hnamel;	
	        stringstream hnamer;	
		hname<<"h"<<i+histNo1st<<ends;
		hnamel<<"hl"<<i+histNo1st<<ends;
		hnamer<<"hr"<<i+histNo1st<<ends;
        	TH1D *hp = new TH1D(hname.str().data(),"",100.,-.2,.2);
        	TH1D *hpl = new TH1D(hnamel.str().data(),"",100.,-.2,.2);
        	TH1D *hpr = new TH1D(hnamer.str().data(),"",100.,-.2,.2);

		stringstream cname;
		cname<<"c"<<i+histNo1st<<ends;
	        TCanvas *cp = new TCanvas(cname.str().data(),cname.str().data());
		
		stringstream item,iteml,itemr;
        	//iteml << "(-photonEMC+photonERec6(500.,lep1EMC,lep2EMC,lep1thetaMC, lep1phiMC,lep2thetaMC,lep2phiMC,photonthetaMC,photonphiMC))/photonEMC>>"<< hnamel.str().data() << ends;
        	//itemr << "(-photonEMC+photonERec6(500.,lep1EMC,lep2EMC,lep1thetaMC, lep1phiMC,lep2thetaMC,lep2phiMC,photonthetaMC,photonphiMC))/photonEMC>>"<< hnamer.str().data() << ends;
//////////////////////////////////////////////////////////
        	//iteml << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaMC, lep1phiMC,lep2thetaMC,lep2phiMC,photonthetaMC,photonphiMC))/photonEMC>>"<< hnamel.str().data() << ends;
        	//itemr << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaMC, lep1phiMC,lep2thetaMC,lep2phiMC,photonthetaMC,photonphiMC))/photonEMC>>"<< hnamer.str().data() << ends;
///////////////////////////////////////////////////////////
        	iteml << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaMC,photonphiMC))/photonEMC>>"<< hnamel.str().data() << ends;
        	itemr << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaMC,photonphiMC))/photonEMC>>"<< hnamer.str().data() << ends;
//////////////////////////////////////////////////////////
        	//iteml << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaMC,photonphiAnl))/photonEMC>>"<< hnamel.str().data() << ends;
        	//itemr << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaMC,photonphiAnl))/photonEMC>>"<< hnamer.str().data() << ends;
//////////////////////////////////////////////////////////
                //iteml << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl))/photonEMC>>"<< hnamel.str().data() << ends;
                //itemr << "(-photonEMC+photonERec6(500.,lep1EAnl,lep2EAnl,lep1thetaAnl, lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl))/photonEMC>>"<< hnamer.str().data() << ends;


	        hAnll->Draw(iteml.str().data(),cut1+cut2+cutv[i]);
	        hAnlr->Draw(itemr.str().data(),cut1+cut2+cutv[i]);
		*hp= (*hpl) * wl + (*hpr) * wr;
		hp->SetTitle("Energy Resolution of Photon");
	        hp->SetXTitle("Energy Resolution of Photon");
	        hp->SetYTitle("");
	       	hp->Draw("");


                stringstream fname;
                fname<<"f"<<i+histNo1st<<ends;
	        TF1 *fp = new TF1(fname.str().data(),"gaus");
	        fp->SetLineColor(kRed);
	        hp->Fit(fname.str().data(),"","",kXmin,kXmax);
		double mean  = hp->GetFunction(fname.str().data())->GetParameter(1);
		double sigma = hp->GetFunction(fname.str().data())->GetParameter(2);
		double xmin  = mean-2*sigma;
		double xmax  = mean+2*sigma;
		hp->Fit(fname.str().data(),"","",xmin,xmax);

	        int numi = hp->Integral(hp->FindFixBin(xmin),hp->FindFixBin(xmax));
	        numt[i] = numi;
	        cout << "num" << i+ histNo1st << "= " << numt[i] << endl;
		ange[i] = 0.;
 	        sig [i] = fp->GetParameter(1);
 	        sige[i] = fp->GetParError(1);
 	        ste [i] = sig[i]/sqrt(numt[i]);
 	        stee[i] = sige[i]/sqrt(numt[i]);

	}




        //TCanvas *c68 = new TCanvas("c68");
	TGraphErrors *f68 = new TGraphErrors(7,ang,sig,ange,sige);
	//cerr<<"f68= "<<(void*) f68<<endl;
        //f68->SetTitle("Energy Resolution of Photon");
        //f68->SetXTitle("Energy Resolution of Photon");
        //f68->SetYTitle("");
        f68->SetMinimum(.0);
	//f68->Draw("AP");
        f68->SetLineColor(kGreen-3);

        //TCanvas *c69 = new TCanvas("c69");
	TGraphErrors *f69 = new TGraphErrors(7,ang,ste,ange,stee);
        //f68->SetTitle("Energy Resolution of Photon");
        //f68->SetXTitle("Energy Resolution of Photon");
        //f68->SetYTitle("");
        f69->SetMinimum(.0);
	//f69->Draw("AP");
        f69->SetLineColor(kGreen-3);
	if (a == 0){
		return f68;
	} else if(a == 1){
		return f69;
	}

	return 0;	

}

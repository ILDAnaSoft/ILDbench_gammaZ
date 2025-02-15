#include "photonERec5.cxx"

double betaBar(double x1, double x2)
{
	double bb = sqrt(1.-2.*(x1+x2)+pow(x1-x2,2));
	return bb;
}
 

void test5()
{

	double Eb  = 250.;
	double Ecm = 2.*Eb;
	double Mz  = 91.2;
	double Mmu = 0.106;

	double x1 = pow(Mz/Ecm,2);
	double x2 = 0.;

	double P = Eb * betaBar(x1,x2);
	double Pmum = (Mz/2.) * betaBar(pow((Mmu/Mz),2),
					pow((Mmu/Mz),2));
	
	double Ez = Ecm - P;
	double Emum = sqrt(Pmum * Pmum + Mmu * Mmu);

	int nevt = 10;
	for (int ievt=0; ievt<nevt; ievt++) {
		double costh = -1. + 2. * gRandom->Uniform();
		double phi   = 2. * TMath::Pi() * gRandom->Uniform();
		double pz    = P* costh;
		double sinth = sqrt((1.-costh)*(1.+costh));
		double px    = P* sinth * cos(phi);
		double py    = P* sinth * sin(phi);

		double cosmum = -1. + 2. * gRandom->Uniform();
		double phimum = 2. * TMath::Pi() * gRandom->Uniform();
		double pzmum  = Pmum* cosmum;
		double sinmum = sqrt((1.-cosmum)*(1.+cosmum));
		double pxmum  = Pmum* sinmum * cos(phimum);
		double pymum  = Pmum* sinmum * sin(phimum);

		TLorentzVector qphoton(-px,-py,-pz,P);
		TLorentzVector qZ(px,py,pz,Ez); 
		TLorentzVector qmum(pxmum,pymum,pzmum,Emum);
		TLorentzVector qmup(-pxmum,-pymum,-pzmum,Emum);
		TVector3 b = qZ.BoostVector();
		qmum.Boost(b);
		qmup.Boost(b);
		
		TLorentzVector qmummup = qmum + qmup;
		TLorentzVector qdiff = qZ - qmummup;
		//cerr << qdiff.X() <<" "<< qdiff.Y() <<" "<< qdiff.Z() <<" "
		//     << qdiff.T() << endl;

		double lep1EAnl = qmum.E();
		double lep2EAnl = qmup.E();

		double lep1thetaAnl   = qmum.Theta();
		double lep1phiAnl     = qmum.Phi();
		double lep2thetaAnl   = qmup.Theta();
		double lep2phiAnl     = qmup.Phi();
		double photonthetaAnl = qphoton.Theta();
		double photonphiAnl   = qphoton.Phi();

		double EphotonRec = photonERec5(Ecm,lep1EAnl,lep2EAnl,lep1thetaAnl,lep1phiAnl,lep2thetaAnl,lep2phiAnl,photonthetaAnl,photonphiAnl,0);
	double diff = EphotonRec-P;	
	cerr<<"diff = "<< diff <<endl;
	cerr<<"EphotonRec - P = "<< EphotonRec-P <<endl;

	}
}

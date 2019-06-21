double photonERec(double Ecm, double lep1thetaAnl,   double lep1phiAnl, 
		  	      double lep2thetaAnl,   double lep2phiAnl, 
			      double photonthetaAnl, double photonphiAnl, int i)
{
	double sinthetagamma  = sin(photonthetaAnl);
	double sinthetamum    = sin(lep1thetaAnl);
	double sinthetamup    = sin(lep2thetaAnl);
	double sinphimp       = sin(lep1phiAnl-lep2phiAnl);
	double sinphimumgamma = sin(lep1phiAnl-photonphiAnl);
	double sinphimupgamma = sin(lep2phiAnl-photonphiAnl);

	double fAmup = -sinthetagamma*sinphimumgamma/(sinthetamup*sinphimp);
	double fAmum = +sinthetagamma*sinphimupgamma/(sinthetamum*sinphimp);

	double A = 1. + fAmup + fAmum;


	if (i == 0){
	return Ecm/A;
	}
        if (i == 1){
	return Ecm*fAmum/A;
	}	
        if (i == 2){
	return Ecm*fAmup/A;
	}
		
}

void IDR22EResolutionThetaCheated()
{
//=========Macro generated from canvas: c138/c138
//=========  (Fri Jun 21 19:58:53 2019) by ROOT version6.08/06
   TCanvas *c138 = new TCanvas("c138", "c138",0,22,600,600);
   gStyle->SetOptFit(1);
   c138->Range(-0.3592143,-0.007054054,1.077643,0.03213514);
   c138->SetFillColor(10);
   c138->SetBorderMode(0);
   c138->SetBorderSize(2);
   c138->SetTickx(1);
   c138->SetTicky(1);
   c138->SetLeftMargin(0.25);
   c138->SetRightMargin(0.05);
   c138->SetTopMargin(0.08);
   c138->SetBottomMargin(0.18);
   c138->SetFrameLineWidth(3);
   c138->SetFrameBorderMode(0);
   c138->SetFrameLineWidth(3);
   c138->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph0_fy1001[20] = {
   0.01436877,
   0.01434315,
   0.01642551,
   0.01216559,
   0.01636629,
   0.01259626,
   0.01259713,
   0.01610485,
   0.01265653,
   0.01409793,
   0.01581615,
   0.01718309,
   0.01415207,
   0.0145691,
   0.01506894,
   0.01733973,
   0.01343478,
   0.01330418,
   0.01254635,
   0.01517327};
   Double_t Graph0_fex1001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[20] = {
   0.000971617,
   0.00105771,
   0.00126976,
   0.0006534431,
   0.001378383,
   0.0006985201,
   0.0006079473,
   0.0009737086,
   0.0006481998,
   0.0006325877,
   0.0008505323,
   0.001130003,
   0.0005801011,
   0.0005914206,
   0.0004884464,
   0.0007575202,
   0.0004323424,
   0.0003231713,
   0.0002158403,
   0.0001932166};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ccff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#00ccff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,1.07);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.029);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);
   Graph_Graph1001->SetLineWidth(3);
   Graph_Graph1001->SetMarkerStyle(21);
   Graph_Graph1001->SetMarkerSize(0.5);
   Graph_Graph1001->GetXaxis()->SetTitle("|cos#theta_{#gamma}|");
   Graph_Graph1001->GetXaxis()->SetRange(1,94);
   Graph_Graph1001->GetXaxis()->SetNdivisions(506);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Sigma of (E_{#gamma}-E_{#gamma}^{MC})/E_{#gamma}^{MC}");
   Graph_Graph1001->GetYaxis()->SetNdivisions(506);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.6);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1002[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph1_fy1002[20] = {
   0.003855743,
   0.003118154,
   0.003747653,
   0.003910964,
   0.003656302,
   0.003495468,
   0.003450903,
   0.003410321,
   0.003384626,
   0.003968177,
   0.003187305,
   0.00339671,
   0.003378146,
   0.003249774,
   0.003704608,
   0.003740125,
   0.003943416,
   0.004844548,
   0.00642728,
   0.01100979};
   Double_t Graph1_fex1002[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[20] = {
   0.0001939842,
   0.0001862003,
   0.0002741572,
   0.0002521843,
   0.000320866,
   0.0002295685,
   0.0002012545,
   0.0001820449,
   0.0001814405,
   0.0002260525,
   0.0001790818,
   0.0002046025,
   0.0001703442,
   0.0001475198,
   0.0001459886,
   0.0001497147,
   0.0001376429,
   0.0001407317,
   0.0001863456,
   0.0002244962};
   gre = new TGraphErrors(20,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,1.07);
   Graph_Graph1002->SetMinimum(0);
   Graph_Graph1002->SetMaximum(0.01206452);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);
   Graph_Graph1002->SetLineWidth(3);
   Graph_Graph1002->SetMarkerStyle(21);
   Graph_Graph1002->SetMarkerSize(0.5);
   Graph_Graph1002->GetXaxis()->SetNdivisions(506);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetNdivisions(506);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1003[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph2_fy1003[20] = {
   0.004108667,
   0.004253545,
   0.00486847,
   0.004049633,
   0.004902859,
   0.00393315,
   0.004664733,
   0.003934728,
   0.00458146,
   0.004241478,
   0.00414003,
   0.004284054,
   0.00415284,
   0.004084109,
   0.003720545,
   0.004001196,
   0.004743432,
   0.004979978,
   0.005887735,
   0.009922989};
   Double_t Graph2_fex1003[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[20] = {
   0.0002621316,
   0.0002844648,
   0.0003044384,
   0.0002415852,
   0.0002899099,
   0.0002603132,
   0.0002459193,
   0.0002032435,
   0.0002863458,
   0.0002309819,
   0.0003079198,
   0.0001873099,
   0.0002155822,
   0.0001817101,
   0.0001428114,
   0.0001434379,
   0.0001787935,
   0.0001466095,
   0.0001532449,
   0.0002088892};
   gre = new TGraphErrors(20,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0,1.07);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.01078729);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);
   Graph_Graph1003->SetLineWidth(3);
   Graph_Graph1003->SetMarkerStyle(21);
   Graph_Graph1003->SetMarkerSize(0.5);
   Graph_Graph1003->GetXaxis()->SetNdivisions(506);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetNdivisions(506);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1004[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph3_fy1004[20] = {
   0.01465879,
   0.01174474,
   0.01525813,
   0.01537851,
   0.0140628,
   0.01619439,
   0.01205933,
   0.0139535,
   0.01541984,
   0.01466583,
   0.01327033,
   0.01553385,
   0.01468866,
   0.01772447,
   0.01424565,
   0.01432316,
   0.01746091,
   0.01319615,
   0.01238177,
   0.01520541};
   Double_t Graph3_fex1004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1004[20] = {
   0.001131159,
   0.0009351769,
   0.001036975,
   0.0009955672,
   0.000875238,
   0.001278337,
   0.0007504886,
   0.0007491076,
   0.0009180511,
   0.0007001309,
   0.0006553598,
   0.0007785212,
   0.0006297444,
   0.0009734819,
   0.0005462553,
   0.0004644085,
   0.0006557981,
   0.0003354242,
   0.000235772,
   0.0001982283};
   gre = new TGraphErrors(20,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff3399");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff3399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0,1.07);
   Graph_Graph1004->SetMinimum(0.01002073);
   Graph_Graph1004->SetMaximum(0.01948679);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);
   Graph_Graph1004->SetLineWidth(3);
   Graph_Graph1004->SetMarkerStyle(21);
   Graph_Graph1004->SetMarkerSize(0.5);
   Graph_Graph1004->GetXaxis()->SetNdivisions(506);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetNdivisions(506);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p ");
   
   Double_t Graph4_fx1005[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph4_fy1005[20] = {
   0.003735879,
   0.00305242,
   0.003285607,
   0.00382765,
   0.003203721,
   0.003475244,
   0.003329124,
   0.003325715,
   0.003336435,
   0.003874111,
   0.003074863,
   0.003068089,
   0.003159555,
   0.003138176,
   0.003771603,
   0.003835879,
   0.003961656,
   0.004678587,
   0.006378523,
   0.01013649};
   Double_t Graph4_fex1005[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1005[20] = {
   0.0001823423,
   0.0001920158,
   0.0002196238,
   0.0002434335,
   0.0002742104,
   0.0002425277,
   0.0002068023,
   0.0001731208,
   0.0001814855,
   0.0002181128,
   0.0001733104,
   0.0001685154,
   0.0001518461,
   0.0001352903,
   0.0001487764,
   0.0001525708,
   0.0001419646,
   0.0001408678,
   0.000187559,
   0.0001928957};
   gre = new TGraphErrors(20,Graph4_fx1005,Graph4_fy1005,Graph4_fex1005,Graph4_fey1005);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#009933");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#009933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,0,1.07);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.01107628);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);
   Graph_Graph1005->SetLineWidth(3);
   Graph_Graph1005->SetMarkerStyle(21);
   Graph_Graph1005->SetMarkerSize(0.5);
   Graph_Graph1005->GetXaxis()->SetNdivisions(506);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetNdivisions(506);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("p ");
   
   Double_t Graph5_fx1006[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph5_fy1006[20] = {
   0.003979362,
   0.004136648,
   0.00477711,
   0.003977012,
   0.004501774,
   0.00391835,
   0.004497568,
   0.00392562,
   0.004810703,
   0.004490255,
   0.004149512,
   0.004165525,
   0.004063217,
   0.004138904,
   0.00382999,
   0.003958803,
   0.004591653,
   0.004868476,
   0.006109266,
   0.009503354};
   Double_t Graph5_fex1006[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph5_fey1006[20] = {
   0.0002353561,
   0.0002622933,
   0.0002980441,
   0.0002304722,
   0.0002403285,
   0.0002667991,
   0.0002259424,
   0.0002168985,
   0.0002836415,
   0.0002402376,
   0.0002774602,
   0.0001973944,
   0.0001987509,
   0.0002025189,
   0.0001645871,
   0.0001388389,
   0.0001674115,
   0.0001389281,
   0.000158935,
   0.0001903759};
   gre = new TGraphErrors(20,Graph5_fx1006,Graph5_fy1006,Graph5_fex1006,Graph5_fey1006);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#990066");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#990066");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,0,1.07);
   Graph_Graph1006->SetMinimum(0);
   Graph_Graph1006->SetMaximum(0.01029795);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);
   Graph_Graph1006->SetLineWidth(3);
   Graph_Graph1006->SetMarkerStyle(21);
   Graph_Graph1006->SetMarkerSize(0.5);
   Graph_Graph1006->GetXaxis()->SetNdivisions(506);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetNdivisions(506);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.72,0.94,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03787879);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(3);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","PFO IDR-L","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ccff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","PFO IDR-S","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff3399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","Ang. Method IDR-L","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","Ang. Method IDR-S","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","A.M. IDR-L Cheated","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph5","A.M. IDR-S Cheated","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990066");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.02,0.027,"ILD preliminary");
   tex->SetLineWidth(2);
   tex->Draw();
   c138->Modified();
   c138->cd();
   c138->SetSelected(c138);
}

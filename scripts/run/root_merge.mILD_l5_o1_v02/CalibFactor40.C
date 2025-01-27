void CalibFactor40()
{
//=========Macro generated from canvas: c148/c148
//=========  (Fri Apr 26 23:17:31 2019) by ROOT version6.08/06
   
   Double_t Graph0_fx1001[40] = {
   -3.063053,
   -2.905973,
   -2.748894,
   -2.591814,
   -2.434734,
   -2.277655,
   -2.120575,
   -1.963495,
   -1.806416,
   -1.649336,
   -1.492257,
   -1.335177,
   -1.178097,
   -1.021018,
   -0.863938,
   -0.7068583,
   -0.5497787,
   -0.3926991,
   -0.2356194,
   -0.07853982,
   0.07853982,
   0.2356194,
   0.3926991,
   0.5497787,
   0.7068583,
   0.863938,
   1.021018,
   1.178097,
   1.335177,
   1.492257,
   1.649336,
   1.806416,
   1.963495,
   2.120575,
   2.277655,
   2.434734,
   2.591814,
   2.748894,
   2.905973,
   3.063053};
   Double_t Graph0_fy1001[40] = {
   0.0189803,
   0.02018779,
   0.02032664,
   0.01122654,
   0.01447644,
   0.01807874,
   0.01856334,
   0.01549623,
   0.01503553,
   0.01767644,
   0.01839607,
   0.01946925,
   0.0190209,
   0.01199399,
   0.01771185,
   0.01768982,
   0.0191512,
   0.01651867,
   0.0144256,
   0.01766982,
   0.01864554,
   0.01913578,
   0.01799893,
   0.01253536,
   0.01591114,
   0.01860805,
   0.01913121,
   0.01581767,
   0.01438683,
   0.01780765,
   0.02013324,
   0.0177772,
   0.01788901,
   0.01043015,
   0.01841766,
   0.02051482,
   0.01918296,
   0.01772418,
   0.01065723,
   0.01812856};
   Double_t Graph0_fex1001[40] = {
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
   0,
   0};
   Double_t Graph0_fey1001[40] = {
   0.0009439997,
   0.001014791,
   0.0009122048,
   0.001245395,
   0.0008384812,
   0.0008531564,
   0.0007240608,
   0.001195977,
   0.0009810478,
   0.0009148163,
   0.0009054758,
   0.0008031156,
   0.00100864,
   0.001050739,
   0.0008299397,
   0.000811308,
   0.0009984067,
   0.001048244,
   0.001211177,
   0.0008499288,
   0.0007873335,
   0.0008281407,
   0.0009528562,
   0.0009957539,
   0.0009911271,
   0.0009738772,
   0.0008521828,
   0.001014762,
   0.001000637,
   0.0008320305,
   0.0009249952,
   0.0009459014,
   0.00105966,
   0.001156803,
   0.0009284675,
   0.0009121328,
   0.0008455336,
   0.001206944,
   0.001078313,
   0.0009625853};
   TGraphErrors *gre = new TGraphErrors(40,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ccff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#00ccff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(3);
   gre->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,-3.675663,3.675663);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.02264231);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);
   Graph_Graph1001->SetLineWidth(3);
   Graph_Graph1001->SetMarkerStyle(21);
   Graph_Graph1001->SetMarkerSize(0.5);
   Graph_Graph1001->GetXaxis()->SetRange(8,93);
   Graph_Graph1001->GetXaxis()->SetNdivisions(506);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetNdivisions(506);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1002[40] = {
   -3.063053,
   -2.905973,
   -2.748894,
   -2.591814,
   -2.434734,
   -2.277655,
   -2.120575,
   -1.963495,
   -1.806416,
   -1.649336,
   -1.492257,
   -1.335177,
   -1.178097,
   -1.021018,
   -0.863938,
   -0.7068583,
   -0.5497787,
   -0.3926991,
   -0.2356194,
   -0.07853982,
   0.07853982,
   0.2356194,
   0.3926991,
   0.5497787,
   0.7068583,
   0.863938,
   1.021018,
   1.178097,
   1.335177,
   1.492257,
   1.649336,
   1.806416,
   1.963495,
   2.120575,
   2.277655,
   2.434734,
   2.591814,
   2.748894,
   2.905973,
   3.063053};
   Double_t Graph1_fy1002[40] = {
   -0.0005349618,
   0.0001106968,
   0.0005344726,
   0.0001116949,
   0.0004103375,
   0.0008864731,
   -0.000262783,
   0.0007134892,
   0.000238359,
   -2.477969e-05,
   -3.865525e-05,
   9.424234e-05,
   0.0003049693,
   0.0005010166,
   0.0003837845,
   8.956739e-05,
   3.565595e-05,
   -0.0001210066,
   0.0001693114,
   -0.0006569827,
   -6.275399e-05,
   0.0005365754,
   0.0004332718,
   7.325427e-05,
   -0.0003681324,
   -5.857392e-06,
   -0.0001916039,
   9.406959e-05,
   0.0005085753,
   0.0004085377,
   2.740484e-05,
   0.0001738544,
   0.000517759,
   0.0002754226,
   0.0004381708,
   0.000766744,
   -6.588326e-05,
   0.0005383569,
   0.0002062585,
   0.001119343};
   Double_t Graph1_fex1002[40] = {
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
   0,
   0};
   Double_t Graph1_fey1002[40] = {
   0.0006559709,
   0.0004719084,
   0.0003089305,
   0.0003191987,
   0.000287277,
   0.0002450294,
   0.0002457087,
   0.0002761131,
   0.0002344785,
   0.0002244038,
   0.0002856149,
   0.0002635923,
   0.0002654192,
   0.0002611184,
   0.000231491,
   0.0002354266,
   0.0004095469,
   0.0002859015,
   0.0003301004,
   0.0006942692,
   0.0005043289,
   0.0002689286,
   0.0002883525,
   0.0002489496,
   0.0002213055,
   0.0002560824,
   0.0002783528,
   0.0002456076,
   0.000266028,
   0.0002508445,
   0.0002841255,
   0.0002322218,
   0.0002124087,
   0.0002437642,
   0.0002918094,
   0.0002000565,
   0.0002848621,
   0.0002983182,
   0.000362125,
   0.0005693991};
   gre = new TGraphErrors(40,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(3);
   gre->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,-3.675663,3.675663);
   Graph_Graph1002->SetMinimum(0);
   Graph_Graph1002->SetMaximum(0.001992741);
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
   
   Double_t Graph2_fx1003[40] = {
   -3.063053,
   -2.905973,
   -2.748894,
   -2.591814,
   -2.434734,
   -2.277655,
   -2.120575,
   -1.963495,
   -1.806416,
   -1.649336,
   -1.492257,
   -1.335177,
   -1.178097,
   -1.021018,
   -0.863938,
   -0.7068583,
   -0.5497787,
   -0.3926991,
   -0.2356194,
   -0.07853982,
   0.07853982,
   0.2356194,
   0.3926991,
   0.5497787,
   0.7068583,
   0.863938,
   1.021018,
   1.178097,
   1.335177,
   1.492257,
   1.649336,
   1.806416,
   1.963495,
   2.120575,
   2.277655,
   2.434734,
   2.591814,
   2.748894,
   2.905973,
   3.063053};
   Double_t Graph2_fy1003[40] = {
   -0.002043336,
   -0.0006075797,
   0.0002176539,
   0.0004237717,
   0.0006574737,
   0.0005050543,
   0.0003568114,
   0.0002402318,
   0.0005677526,
   0.0001694712,
   -0.0006397939,
   0.000826088,
   -4.163473e-05,
   0.0003906791,
   0.0003115834,
   0.000136473,
   0.0003847284,
   0.0001639077,
   -0.0002036426,
   -0.000376607,
   -0.0004559648,
   -0.0004794011,
   0.0002958555,
   0.0001575095,
   -0.00022472,
   0.0002956254,
   0.0006309978,
   0.0003015053,
   0.000348838,
   0.0006703587,
   -0.0001764809,
   0.0007410097,
   -4.221756e-05,
   0.0005327479,
   0.0005187095,
   0.000186649,
   0.0005637905,
   0.000243734,
   -0.0001207712,
   0.0005370792};
   Double_t Graph2_fex1003[40] = {
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
   0,
   0};
   Double_t Graph2_fey1003[40] = {
   0.0005141575,
   0.0004418421,
   0.0003918709,
   0.0003532218,
   0.0002989188,
   0.0002585461,
   0.000302905,
   0.0002677136,
   0.0002935281,
   0.0002925728,
   0.0003167051,
   0.0003317785,
   0.0002540359,
   0.0002842293,
   0.0003194387,
   0.0002913549,
   0.0003084545,
   0.0002986617,
   0.0004105107,
   0.0006704546,
   0.0006506273,
   0.0003777076,
   0.0003077393,
   0.0003269416,
   0.000276724,
   0.0003247541,
   0.0002993728,
   0.0002708221,
   0.0002949876,
   0.0002761225,
   0.0002812143,
   0.0002764904,
   0.000240895,
   0.0002499079,
   0.0003051379,
   0.0003124337,
   0.0003356595,
   0.0003641643,
   0.0003646034,
   0.0007254521};
   gre = new TGraphErrors(40,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);
   gre->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,-3.675663,3.675663);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.001644534);
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
   
   TPaveText *pt = new TPaveText(0.01,0.9393038,0.1159599,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(3);
   TText *AText = pt->AddText("Graph");
   pt->Draw();
   c148->Modified();
   c148->cd();
   c148->SetSelected(c148);
}

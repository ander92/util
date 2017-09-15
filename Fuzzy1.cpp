#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_WARNINGS
#endif

#include "Fuzzy1.h"

#include <windows.h>
double Fuzzy1::stanga(double a, double b, double u){

  if (u < a)
  {
    return 1;
  }
  else if ((u >= a) && (u < b))
  {
    return (b - u) / (b - a);
  }
  else
  {
    return 0;
  }

}
double Fuzzy1::triunghi(double a, double c, double b, double u)
{
  if ((u<a) || (u>b))
  {
    return 0;
  }
  else if ((u >= a) && (u <= c))
  {
    return (u - a) / (c - a);
  }
  else
  {
    return (b - u) / (b - c);
  }
}

double Fuzzy1::trapez(double a, double c, double d, double b, double u)
{
  if ((u<a) || (u>b))
  {
    return 0;
  }
  else if ((u >= a) && (u <= c))
  {
    return (u - a) / (c - a);
  }
  else if ((u > c) && (u <= d))
  {
    return 1;
  }
  else
  {
    return (b - u) / (b - d);
  }
}
double Fuzzy1::dreapta(double a, double b, double u)
{
  if (u < a)
  {
    return 0;

  }
  else if ((u >= a) && (u < b))
  {
    return (u - a) / (b - a);
  }
  else
  {
    return 1;
  }
}

vector<double> Fuzzy1::fuzificare(double u)
{
  vector<double> v1(10);
  v1[0] = stanga(-40, -17, u);
  v1[1] = triunghi(-23, -13, -3, u);
  v1[2] = trapez(-5, -2, 2, 5, u);
  v1[3] = triunghi(3, 13, 23, u);
  v1[4] = dreapta(17, 40, u);

  return v1;
}

vector<double> Fuzzy1::fuzificare2(double du)
{
  vector<double> v2(10);
  v2[0] = stanga(-10, 3, du);
  v2[1] = triunghi(-3, 5, 13, du);
  v2[2] = triunghi(11, 16, 21, du);
  v2[3] = triunghi(20, 22, 24, du);
  v2[4] = triunghi(23, 26, 29, du);
  v2[5] = triunghi(28, 31, 34, du);
  v2[6] = dreapta(32, 36, du);
  return v2;
}


void Fuzzy1::inferente(vector<double> v3, vector<double> v4, double asd[5][7])
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      asd[i][j] = min(v3[j], v4[i]);
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 7; j++)
    {
     // cout << asd[i][j] << "    ";
    }
   // cout << endl;
  }
}

vector<double> Fuzzy1::compunere(double asd[5][7], string bazaReguli[5][7])
{
  vector<double> f(5);
  double maxsm = 0, maxsp = 0, maxm = 0, maxcp = 0, maxcm = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      if (bazaReguli[i][j].compare("xsm") == 0)
      {
        maxsm = max(asd[i][j], maxsm);
      }
      if (bazaReguli[i][j].compare("xsp") == 0)
      {
        maxsp = max(asd[i][j], maxsp);
      }
      if (bazaReguli[i][j].compare("xm") == 0)
      {
        maxm = max(asd[i][j], maxm);
      }
      if (bazaReguli[i][j].compare("xcp") == 0)
      {
        maxcp = max(asd[i][j], maxcp);
      }
      if (bazaReguli[i][j].compare("xcm") == 0)
      {
        maxcm = max(asd[i][j], maxcm);
      }
    }
  }
  f[0] = maxsm;
  f[1] = maxsp;
  f[2] = maxm;
  f[3] = maxcp;
  f[4] = maxcm;
  return f;

}

double Fuzzy1::calculeazaCentru(double a, double d, double e, double b, double f)
{
  double y1, y2;

  y1 = a + f*(d - a);
  y2 = b - f*(b - e);
  double c = y1 + (y2 - y1) / 2;
  return c;
}

double defuzificare(vector<double> f, vector<double> c)
{
  double numa = 0;
  double numi = 0;
  for (int i = 0; i < f.size(); i++)
  {
    numa += c[i] * f[i];
    numi += f[i];
  }


  return numa / numi;
}

/*
vector<double> pondere(double w[5][7],vector<double> u,vector<double> du)
{
return 0;
}*/

double Fuzzy1::calc_lmar(vector<double> f, vector<double> l)
{
  double error = 3;
  double m = 0;
  for (int i = 0; i < 5; i++)
  {

    if (f[i] != 0){
      return l[i];
    }

  }
  return error;
}

double Fuzzy1::calc_rmar(vector<double> f, vector<double> r)
{
  double error = 11;
  for (int i = 4; i >= 0; i--)
  {
    if (f[i] != 0){
      return r[i];
    }

  }
  return error;
}


double Fuzzy1::Defuzificare_ca(double w[5][7], string b[5][7]){
  vector<double> f(5);
  vector<double> l = { -15, -9, -4, 1, 6 };
  vector<double> r = { -6, -1, 4, 9, 15 };
  double m;
  double n;
  double yi;

  vector<double> my(5);
  f = compunere(w, b);
  m = calc_lmar(f, l);
  n = calc_rmar(f, r);
 // cout << "marginile sunt " << m << "si " << n << endl;
  double sum1, sum2;
  double s = 0;
  sum1 = 0; sum2 = 0;
  for (int i = 0; i < 100; i++)
  {


    yi = m + i*(n - m) / 100;
    my[0] = min(f[0], stanga(-10, -6, yi));
    my[1] = min(f[1], triunghi(-9, -5, -1, yi));
    my[2] = min(f[2], triunghi(-4, 0, 4, yi));
    my[3] = min(f[3], triunghi(1, 5, 9, yi));
    my[4] = min(f[4], dreapta(6, 10, yi));

    for (int j = 0; j < 5; j++)
    {
      if (my[j]>s){
        s = my[j];
      }
    }

    sum1 += yi * s;
    sum2 += s;
    //cout << "sum1= " << sum1 << "   sum2= " << sum2 << endl;

  }

  double iesire = sum1 / sum2;
  return iesire;
}


double Fuzzy1::processVoiceCommand(set<string> correctWords){
  bool r = false, v = false, t = false, h = false, c = false;
  double result = 0;

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(1, 20);

  for (string s : correctWords) {

    if (s.compare("really") == 0){
      r = true;
    }
    if (s.compare("very") == 0){
      v = true;
    }
    if (s.compare("too") == 0){
      t = true;
    }
    if (s.compare("hot") == 0){
      h = true;
    }
    if (s.compare("cold") == 0){
      c = true;
    }
  }
  if (r && c){
    result = 30;
    result += dis(gen);
    return result;
  }

  if (v && c){
    result = 17;
    result += dis(gen) / 10 * 13;
    return result;
  }

  if (t && c){
    result = 10;
    result += dis(gen) / 10 * 7;
    return result;
  }
  if (c){
    result = 1;
    result += dis(gen) / 10 * 9;
    return result;
  }
  if (r && h){
    result = -30;
    result -= dis(gen);
    return result;
  }
  if (v && h){
    result = -17;
    result -= dis(gen) / 10 * 13;
    return result;
  }
  if (t && h){
    result = -10;
    result -= dis(gen) / 10 * 7;
    return result;
  }
  if (h){
    result = -1;
    result -= dis(gen) / 10 * 9;
    return result;
  }
  return 0;
}

//void Fuzzy1::playSound(char s[]){

//  PlaySound((LPCWSTR)s.c_str(), NULL, SND_SYNC);
//}

void Fuzzy1::textToSpeech(double y){
  int temp = (int)y;
  //PlaySound(TEXT("speech//default.wav"), NULL, SND_FILENAME);
  switch (temp){

  case 1: PlaySound(TEXT("speech\\plusone.wav"), NULL, SND_FILENAME); break;
  case 2: PlaySound(TEXT("speech\\plustwo.wav"), NULL, SND_FILENAME); break;
  case 3: PlaySound(TEXT("speech\\plusthree.wav"), NULL, SND_FILENAME); break;
  case 4: PlaySound(TEXT("speech\\plusfour.wav"), NULL, SND_FILENAME); break;
  case 5: PlaySound(TEXT("speech\\plusfive.wav"), NULL, SND_FILENAME); break;
  case 6: PlaySound(TEXT("speech\\plussix.wav"), NULL, SND_FILENAME); break;
  case 7: PlaySound(TEXT("speech\\plusseven.wav"), NULL, SND_FILENAME); break;
  case 8: PlaySound(TEXT("speech\\pluseight.wav"), NULL, SND_FILENAME); break;
  case 9: PlaySound(TEXT("speech\\plusnine.wav"), NULL, SND_FILENAME);  break;
  case 10: PlaySound(TEXT("speech\\plusten.wav"), NULL, SND_FILENAME);  break;
  case 11: PlaySound(TEXT("speech\\pluseleven.wav"), NULL, SND_FILENAME);  break;
  case 12: PlaySound(TEXT("speech\\plustwelve.wav"), NULL, SND_FILENAME);  break;
  case 13: PlaySound(TEXT("speech\\plusthirteen.wav"), NULL, SND_FILENAME);  break;
  case 14: PlaySound(TEXT("speech\\plusfourteen.wav"), NULL, SND_FILENAME);  break;
  case 15: PlaySound(TEXT("speech\\plusfifteen.wav"), NULL, SND_FILENAME);  break;
  case 16: PlaySound(TEXT("speech\\plussixteen.wav"), NULL, SND_FILENAME);  break;
  case 17: PlaySound(TEXT("speech\\plusseventeen.wav"), NULL, SND_FILENAME);  break;
  case -1: PlaySound(TEXT("speech\\minusone.wav"), NULL, SND_FILENAME);  break;
  case -2: PlaySound(TEXT("speech\\minusttwo.wav"), NULL, SND_FILENAME);  break;
  case -3: PlaySound(TEXT("speech\\minusthree.wav"), NULL, SND_FILENAME);  break;
  case -4: PlaySound(TEXT("speech\\minusfour.wav"), NULL, SND_FILENAME);  break;
  case -5: PlaySound(TEXT("speech\\minusfive.wav"), NULL, SND_FILENAME);  break;
  case -6: PlaySound(TEXT("speech\\minussix.wav"), NULL, SND_FILENAME);  break;
  case -7: PlaySound(TEXT("speech\\minusseven.wav"), NULL, SND_FILENAME);  break;
  case -8: PlaySound(TEXT("speech\\minuseight.wav"), NULL, SND_FILENAME);  break;
  case -9: PlaySound(TEXT("speech\\minusnine.wav"), NULL, SND_FILENAME);  break;
  case -10: PlaySound(TEXT("speech\\minusten.wav"), NULL, SND_FILENAME);  break;
  case -11: PlaySound(TEXT("speech\\minuseleven.wav"), NULL, SND_FILENAME);  break;
  case -12: PlaySound(TEXT("speech\\minusttwelve.wav"), NULL, SND_FILENAME);  break;
  case -13: PlaySound(TEXT("speech\\minusthirteen.wav"), NULL, SND_FILENAME);  break;
  case -14: PlaySound(TEXT("speech\\minusfifteen.wav"), NULL, SND_FILENAME);  break;
  case -15: PlaySound(TEXT("speech\\minusfifteen.wav"), NULL, SND_FILENAME);  break;
  case -16: PlaySound(TEXT("speech\\minussixteen.wav"), NULL, SND_FILENAME);  break;
  case -17: PlaySound(TEXT("speech\\minusseventeen.wav"), NULL, SND_FILENAME);  break;
  default: PlaySound(TEXT("speech\\default.wav"), NULL, SND_FILENAME); break;
  }
  
  try{
    switch (temp){

    case 1: system("aplay speech\\plusone.wav"); break;
    case 2: system("aplay speech\\plustwo.wav"); break;
    case 3: system("aplay speech\\plusthree.wav"); break;
    case 4: system("aplay speech\\plusfour.wav"); break;
    case 5: system("aplay speech\\plusfive.wav"); break;
    case 6: system("aplay speech\\plussix.wav"); break;
    case 7: system("aplay speech\\plusseven.wav"); break;
    case 8: system("aplay speech\\pluseight.wav"); break;
    case 9: system("aplay speech\\plusnine.wav"); break;
    case 10: system("aplay speech\\plusten.wav"); break;
    case 11: system("aplay speech\\pluseleven.wav");  break;
    case 12: system("aplay speech\\plustwelve.wav"); break;
    case 13: system("aplay speech\\plusthirteen.wav");  break;
    case 14: system("aplay speech\\plusfourteen.wav");  break;
    case 15: system("aplay speech\\plusfifteen.wav");  break;
    case 16: system("aplay speech\\plussixteen.wav");  break;
    case 17: system("aplay speech\\plusseventeen.wav");  break;
    case -1: system("aplay speech\\minusone.wav");  break;
    case -2: system("aplay speech\\minusttwo.wav");  break;
    case -3: system("aplay speech\\minusthree.wav");  break;
    case -4: system("aplay speech\\minusfour.wav");  break;
    case -5: system("aplay speech\\minusfive.wav");  break;
    case -6: system("aplay speech\\minussix.wav");  break;
    case -7: system("aplay speech\\minusseven.wav");  break;
    case -8: system("aplay speech\\minuseight.wav");  break;
    case -9: system("aplay speech\\minusnine.wav");  break;
    case -10: system("aplay speech\\minusten.wav");  break;
    case -11: system("aplay speech\\minuseleven.wav");  break;
    case -12: system("aplay speech\\minusttwelve.wav");  break;
    case -13: system("aplay speech\\minusthirteen.wav");  break;
    case -14: system("aplay speech\\minusfourteen.wav");  break;
    case -15: system("aplay speech\\minusfifteen.wav");  break;
    case -16: system("aplay speech\\minussixteen.wav");  break;
    case -17: system("aplay speech\\minusseventeen.wav");  break;
    default: system("aplay speech\\default.wav"); break;
  
  }
}
catch (const std::exception &e){
  std::cout << e.what() << std::endl;
  
}
}


string Fuzzy1::goFirstFuzzy(string words[], int nr){
  ifstream infile;
  double u, du, iesirea;
  double asd[5][7];
  set<string> getWords;
  vector<double> f(5);
  vector<double> c(5);
  vector<double> v3(10), v4(10);
  string bazaReguli[5][7] = { { "xsp", "xsm", "xsm", "xsm", "xsm", "xsm", "xsm" },
  { "xsp", "xsp", "xsp", "xsp", "xsp", "xsp", "xsm" },
  { "xm", "xm", "xm", "xm", "xm", "xm", "xm" },
  { "xcp", "xcp", "xcp", "xcp", "xcp", "xcp", "xcp" },
  { "xcp", "xcp", "xcm", "xcm", "xcm", "xcm", "xcm" }
  };

  for (int i = 0; i < nr; i++)
  {
    getWords.insert(words[i]);
    //cout << words[i];
  }


  u = processVoiceCommand(getWords);
  infile.open("temp.txt");
  if (infile.good())
  {
    infile >> du;
  }
  infile.close();
  v4 = fuzificare(u);
  v3 = fuzificare2(du);

  inferente(v3, v4, asd);
  f = compunere(asd, bazaReguli);

  //cout<<"maxsm= "<<f[0]<<endl;
  //cout<<"maxsp= "<<f[1]<<endl;
  //cout<<"maxm= "<<f[2]<<endl;
  //cout <<"maxcp= "<< f[3] << endl;
  //cout <<"maxcm= "<< f[4] << endl;


  ////aici;
  c[0] = calculeazaCentru(-15, -15, -10, -6, f[0]);
  c[1] = calculeazaCentru(-9, -5, -5, -1, f[1]);
  c[2] = calculeazaCentru(-4, 0, 0, 4, f[2]);
  c[3] = calculeazaCentru(1, 5, 5, 9, f[3]);
  c[4] = calculeazaCentru(6, 10, 15, 15, f[4]);


  iesirea = defuzificare(f, c);

  //cout << "\n";
  //cout<<"Iesirea uuuuuuuuuuuu: "<<iesirea<<endl;



  double iesirea2 = Defuzificare_ca(asd, bazaReguli);
  //cout << "\n";
  cout << "Iesirea mai buna: " << iesirea2 << endl;

  textToSpeech(iesirea2);

  ofstream myfile;
  myfile.open("temp.txt");
  string guiTxt = "";
  guiTxt = to_string(du + iesirea2);
  myfile << du + iesirea2;
  myfile.close();

  return guiTxt;
}

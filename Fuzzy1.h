#pragma once
//#include <windows.h>
#include <iostream>
#include <random>
#include <algorithm>
#include <stdio.h>

#include <vector>
#include <string>
#include <fstream>
#include <set>

using namespace std;

class Fuzzy1{

  double stanga(double a, double b, double u);

  double triunghi(double a, double c, double b, double u);

  double trapez(double a, double c, double d, double b, double u);
  double dreapta(double a, double b, double u);

  vector<double> fuzificare(double u);

  vector<double> fuzificare2(double du);


  void inferente(vector<double> v3, vector<double> v4, double asd[5][7]);

  vector<double> compunere(double asd[5][7], string bazaReguli[5][7]);

  double calculeazaCentru(double a, double d, double e, double b, double f);

  /*
  vector<double> pondere(double w[5][7],vector<double> u,vector<double> du)
  {
  return 0;
  }*/

  double calc_lmar(vector<double> f, vector<double> l);
  double calc_rmar(vector<double> f, vector<double> r);


  double Defuzificare_ca(double w[5][7], string b[5][7]);


  double processVoiceCommand(set<string> correctWords);
  void textToSpeech(double y);

public:
  string goFirstFuzzy(string words[], int nr);
};
#pragma once
#include "singleton.h"
#include "Results.h"
#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <thread>
#include <ctime>
#include <set>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <string>
#include <exception>
#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;


class Fuzzy2{
  double insideSensor;
  double outsideSensor;
  double normalTemperature;

  double stanga(double a, double b, double u);
  double triunghi(double a, double c, double b, double u);

  double trapez(double a, double c, double d, double b, double u);
  double dreapta(double a, double b, double u);

  double night(double temp, double a, double b, double c, double d);
  double calc_lmar(double f[], double l[]);

  double calc_rmar(double f[], double r[]);

  FuzificationResult fuzificare(double outsideSensor, double insideSensor, double normaltemperature, double humanPresence, double timeOfDay);


  void ponderile(double Weights[2][4][7][7][7], double m_outsideSensor[], double m_insideSensor[], double m_normalTemperature[], double m_humanPresence[], double m_timeofday[]);

  double computeF(double Weights[2][4][7][7][7], string BRF[2][4][7][7][7], string eticheta);
  double defuzificareCA(double Weights[2][4][7][7][7], string BRF[2][4][7][7][7]);

public:

  double goFuzzy2(string brf[2][4][7][7][7]);
};
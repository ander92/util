#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_WARNINGS
#endif
#include "Fuzzy2.h"
#include "releu.h"
#include <mutex>


double Fuzzy2::stanga(double a, double b, double u){

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
double Fuzzy2::triunghi(double a, double c, double b, double u)
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

double Fuzzy2::trapez(double a, double c, double d, double b, double u)
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
double Fuzzy2::dreapta(double a, double b, double u)
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

double Fuzzy2::night(double a, double b, double c, double d, double temp){
  double num1 = stanga(a, b, temp);
  double num2 = dreapta(c, d, temp);

  double max1 = max(num1, num2);
  return max1;
}

double Fuzzy2::calc_lmar(double f[], double l[])
{
  double error = 3;

  for (int i = 0; i < 11; i++)
  {

    if (f[i] != 0){
      return l[i];
    }

  }
  return error;
}

double Fuzzy2::calc_rmar(double f[], double r[])
{
  double error = 11;
  for (int i = 10; i >= 0; i--)
  {
    if (f[i] != 0){
      return r[i];
    }

  }
  return error;
}

FuzificationResult Fuzzy2::fuzificare(double outsideSensor, double insideSensor, double normaltemperature, double humanPresence, double timeOfDay){
  FuzificationResult fr(2, 4, 7, 7, 7);

  fr.m_outsideSensor[0] = stanga(-10, 3, outsideSensor);
  fr.m_outsideSensor[1] = triunghi(-3, 5, 13, outsideSensor);
  fr.m_outsideSensor[2] = triunghi(11, 16, 21, outsideSensor);
  fr.m_outsideSensor[3] = trapez(20, 22, 23, 25, outsideSensor);
  fr.m_outsideSensor[4] = triunghi(24, 27, 30, outsideSensor);
  fr.m_outsideSensor[5] = triunghi(29, 32, 35, outsideSensor);
  fr.m_outsideSensor[6] = dreapta(33, 37, outsideSensor);

  cout << "Outside senzors value" << endl;
  for (int i = 0; i < 7; i++){
    cout << fr.m_outsideSensor[i] << " ";
  }
  cout << "\n";

  fr.m_insideSensor[0] = stanga(-10, 3, insideSensor);
  fr.m_insideSensor[1] = triunghi(-3, 5, 13, insideSensor);
  fr.m_insideSensor[2] = triunghi(11, 16, 21, insideSensor);
  fr.m_insideSensor[3] = trapez(20, 22, 23, 25, insideSensor);
  fr.m_insideSensor[4] = triunghi(24, 27, 39, insideSensor);
  fr.m_insideSensor[5] = triunghi(29, 32, 35, insideSensor);
  fr.m_insideSensor[6] = dreapta(33, 37, insideSensor);
  cout << "m_insideSensor senzors value" << endl;
  for (int i = 0; i < 7; i++){
    cout << fr.m_insideSensor[i] << " ";
  }
  cout << "\n";

  fr.m_normaltemperature[0] = stanga(-10, 3, normaltemperature);
  fr.m_normaltemperature[1] = triunghi(-3, 5, 13, normaltemperature);
  fr.m_normaltemperature[2] = triunghi(11, 16, 21, normaltemperature);
  fr.m_normaltemperature[3] = trapez(20, 22, 23, 25, normaltemperature);
  fr.m_normaltemperature[4] = triunghi(24, 27, 30, normaltemperature);
  fr.m_normaltemperature[5] = triunghi(29, 32, 35, normaltemperature);
  fr.m_normaltemperature[6] = dreapta(33, 37, normaltemperature);
  cout << "m_normaltemperature senzors value" << endl;
  for (int i = 0; i < 7; i++){
    cout << fr.m_normaltemperature[i] << " ";
  }
  cout << "\n";

  fr.m_humanPresence[0] = stanga(0, 0.5, humanPresence);
  fr.m_humanPresence[1] = triunghi(0.25, 1, 1.75, humanPresence);
  cout << "m_humanPresence senzors value" << endl;
  for (int i = 0; i < 2; i++){
    cout << fr.m_humanPresence[i] << " ";
  }
  cout << "\n";

  fr.m_timeofday[0] = night(0, 7, 21, 24, timeOfDay);
  fr.m_timeofday[1] = trapez(5, 8, 9, 11, timeOfDay);
  fr.m_timeofday[2] = trapez(10, 13, 15, 18, timeOfDay);
  fr.m_timeofday[3] = triunghi(17, 20, 22, timeOfDay);

  cout << "m_timeofday senzors value" << endl;
  for (int i = 0; i < 4; i++){
    cout << fr.m_timeofday[i] << " ";
  }
  cout << "\n";

  return fr;

}


void Fuzzy2::ponderile(double Weights[2][4][7][7][7], double m_outsideSensor[], double m_insideSensor[], double m_normalTemperature[], double m_humanPresence[], double m_timeofday[]){
  FuzificationResult fr(2, 4, 7, 7, 7);
 // cout << "ponderile" << endl;
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 4; j++){
      for (int k = 0; k < 7; k++){
        for (int n = 0; n < 7; n++){
          for (int l = 0; l < 7; l++) {
            double min1 = min(m_insideSensor[n], m_outsideSensor[l]);
            double min2 = min(m_normalTemperature[k], m_timeofday[j]);

            Weights[i][j][k][n][l] = min(min(min1, min2), m_humanPresence[i]);
            //cout << min(min(min1, min2), m_humanPresence[i]);

          }
          //cout << "\n";
        }
        //cout << "\n";
      }
      //cout << "\n";
    }
    //cout << "\n";
  }
  //cout << "\n";

}


double Fuzzy2::computeF(double Weights[2][4][7][7][7], string BRF[2][4][7][7][7], string eticheta){
  double f = 0;
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 4; j++){
      for (int k = 0; k < 7; k++){
        for (int n = 0; n < 7; n++){
          for (int l = 0; l < 7; l++) {

            if (BRF[i][j][k][n][l].compare(eticheta) == 0){

              if (f < Weights[i][j][k][n][l]){
                f = Weights[i][j][k][n][l];
               // cout << "computeF " << f << "  eticheta " << eticheta << endl;
              }
            }
          }

        }
      }
    }
  }
  return f;
}

double Fuzzy2::defuzificareCA(double Weights[2][4][7][7][7], string BRF[2][4][7][7][7]){
  double f[11];
  f[0] = computeF(Weights, BRF, "T0");
  f[1] = computeF(Weights, BRF, "T1");
  f[2] = computeF(Weights, BRF, "T2");
  f[3] = computeF(Weights, BRF, "T3");
  f[4] = computeF(Weights, BRF, "T4");
  f[5] = computeF(Weights, BRF, "T5");
  f[6] = computeF(Weights, BRF, "T6");
  f[7] = computeF(Weights, BRF, "T7");
  f[8] = computeF(Weights, BRF, "T8");
  f[9] = computeF(Weights, BRF, "T9");
  f[10] = computeF(Weights, BRF, "T10");

  double sum1 = 0;
  double sum2 = 0;
  double l[] = { 0, 2, 18, 22, 32, 42, 52, 62, 72, 82, 92 };
  double r[] = { 8, 18, 28, 38, 48, 58, 68, 78, 88, 98, 100 };
  double lmar = calc_lmar(f, l);
  double rmar = calc_rmar(f, r);

  double  my[11];
  for (int i = 0; i < 100; i++) {
    double yi = lmar + i*(rmar - lmar) / 100;

    my[0] = min(f[0], stanga(0, 8, yi));
    my[1] = min(f[1], triunghi(2, 10, 18, yi));
    my[2] = min(f[2], triunghi(12, 20, 28, yi));
    my[3] = min(f[3], triunghi(22, 30, 38, yi));
    my[4] = min(f[4], triunghi(32, 40, 48, yi));
    my[5] = min(f[5], triunghi(42, 50, 58, yi));
    my[6] = min(f[6], triunghi(52, 60, 68, yi));
    my[7] = min(f[7], triunghi(62, 70, 78, yi));
    my[8] = min(f[8], triunghi(72, 80, 88, yi));
    my[9] = min(f[9], triunghi(82, 90, 98, yi));
    my[10] = min(f[10], dreapta(92, 100, yi));


    double m = 0;
    for (int j = 0; j < 11; j++) {
      if (my[j]>m)
        m = my[j];
    }
    sum1 += yi*m;
    sum2 += m;
  }
  double result = sum1 / sum2;
  return result;

}



vector<double> compunere(double asd[2][4][7][7][7], string bazaReguli[2][4][7][7][7])
{
  vector<double> f(5);
  double maxsm = 0, maxsp = 0, maxm = 0, maxcp = 0, maxcm = 0;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      for (int k = 0; k < 7; k++)
      {
        for (int l = 0; l < 7; l++)
        {
          for (int m = 0; m < 7; m++)
          {
            if (bazaReguli[i][j][k][l][m].compare("T0") == 0)
            {
              maxsm = max(asd[i][j][k][l][m], maxsm);
            }
            if (bazaReguli[i][j][k][l][m].compare("T0") == 0)
            {
              maxsp = max(asd[i][j][k][l][m], maxsp);
            }
            if (bazaReguli[i][j][k][l][m].compare("T0") == 0)
            {
              maxm = max(asd[i][j][k][l][m], maxm);
            }
            if (bazaReguli[i][j][k][l][m].compare("T0") == 0)
            {
              maxcp = max(asd[i][j][k][l][m], maxcp);
            }
            if (bazaReguli[i][j][k][l][m].compare("T0") == 0)
            {
              maxcm = max(asd[i][j][k][l][m], maxcm);
            }


          }
        }
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



double Fuzzy2::goFuzzy2(string brf[2][4][7][7][7]){
  int timeToSleep = 50000;
  double Weights[2][4][7][7][7];
  FuzificationResult ft(2, 4, 7, 7, 7);

  try{
    ifstream infile;
    infile.open("temp.txt");
    infile >> normalTemperature;

    //normalTemperature = 50;

    insideSensor = 10;
    outsideSensor = -1;
    infile.close();
  }
  catch (int e){

    cout << " cannot open file " << e << endl;

  }


  time_t t;
  string timp;
  time(&t);// get time now
  char* time = ctime(&t);

  //timp = ctime(&t);
  //cout << "time is " << time[11]<<time[12] << endl;
  string ora(&time[11]);
  ora.append(&time[12]);

  double humanPresence = 1;
  double timeofday = atof(ora.c_str());

  ft = fuzificare(outsideSensor, insideSensor, normalTemperature, humanPresence, timeofday);
  ponderile(Weights, ft.m_outsideSensor, ft.m_insideSensor, ft.m_normaltemperature, ft.m_humanPresence, ft.m_timeofday);

  double y = defuzificareCA(Weights, brf);

  /*
  //
  //thread pentru controlul releelor
  //
  //
*/
 // ControlRelays cr;
  std::mutex thr_mutex;
  try
  {
      std::thread threads([&](){
      
        try
        {
          Singleton::getInstance()->openRelay();
          //thr_mutex.lock();
          //cr.openRelay();
          //thr_mutex.unlock();
          int num = (int)y / 100 * timeToSleep;
          try {
            if (num > 1000)
              std::this_thread::sleep_for(std::chrono::milliseconds(num));
            else
              std::this_thread::sleep_for(std::chrono::milliseconds(10000));
          }
          catch (std::exception& e)
          {
            std::cout << e.what() << '\n';
          }


          try {
            Singleton::getInstance() ->closeRelay();
            std::this_thread::sleep_for(std::chrono::milliseconds(timeToSleep - num)); // sleep for rest of the time
          }
          catch (std::exception& e)
          {
            std::cout << e.what() << '\n';
          }
          
          
        }
        catch (std::exception& e)
        {
          std::cout << e.what() << '\n';
        }
        
      });
      threads.detach();

  }
  catch (std::exception& e)
  {
    std::cout << e.what() << '\n';
  }

  
 
  return y;
}

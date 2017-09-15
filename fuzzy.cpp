#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_WARNINGS
#endif
#include "Fuzzy1.h"
#include "Fuzzy2.h"
#include "fuzzy.h"
#include <vector>
#include <string>
#include <istream>
#include <windows.h>
//#include <boost/algorithm/string.hpp>


void numberToSpeech(int y) {
  switch (y){
  case 10: PlaySound(TEXT("NumberSpeech\\10.wav"), NULL, SND_FILENAME); break;
  case 11: PlaySound(TEXT("NumberSpeech\\11.wav"), NULL, SND_FILENAME); break;
  case 12: PlaySound(TEXT("NumberSpeech\\12.wav"), NULL, SND_FILENAME); break;
  case 13: PlaySound(TEXT("NumberSpeech\\13.wav"), NULL, SND_FILENAME); break;
  case 14: PlaySound(TEXT("NumberSpeech\\14.wav"), NULL, SND_FILENAME); break;
  case 15: PlaySound(TEXT("NumberSpeech\\15.wav"), NULL, SND_FILENAME); break;
  case 16: PlaySound(TEXT("NumberSpeech\\16.wav"), NULL, SND_FILENAME); break;
  case 17: PlaySound(TEXT("NumberSpeech\\17.wav"), NULL, SND_FILENAME); break;
  case 18: PlaySound(TEXT("NumberSpeech\\18.wav"), NULL, SND_FILENAME); break;
  case 19: PlaySound(TEXT("NumberSpeech\\19.wav"), NULL, SND_FILENAME); break;
  case 20: PlaySound(TEXT("NumberSpeech\\20.wav"), NULL, SND_FILENAME); break;
  case 21: PlaySound(TEXT("NumberSpeech\\21.wav"), NULL, SND_FILENAME); break;
  case 22: PlaySound(TEXT("NumberSpeech\\22.wav"), NULL, SND_FILENAME); break;
  case 23: PlaySound(TEXT("NumberSpeech\\23.wav"), NULL, SND_FILENAME); break;
  case 24: PlaySound(TEXT("NumberSpeech\\24.wav"), NULL, SND_FILENAME); break;
  case 25: PlaySound(TEXT("NumberSpeech\\25.wav"), NULL, SND_FILENAME); break;
  case 26: PlaySound(TEXT("NumberSpeech\\26.wav"), NULL, SND_FILENAME); break;
  case 27: PlaySound(TEXT("NumberSpeech\\27.wav"), NULL, SND_FILENAME); break;
  case 28: PlaySound(TEXT("NumberSpeech\\28.wav"), NULL, SND_FILENAME); break;
  case 29: PlaySound(TEXT("NumberSpeech\\29.wav"), NULL, SND_FILENAME); break;
  case 30: PlaySound(TEXT("NumberSpeech\\30.wav"), NULL, SND_FILENAME); break;
  default: PlaySound(TEXT("NumberSpeech\\default.wav"), NULL, SND_FILENAME);  break;
  }
  try{
    switch (y){
    case 10: system("aplay NumberSpeech\\10.wav"); break;
    case 11: system("aplay NumberSpeech\\11.wav"); break;
    case 12: system("aplay NumberSpeech\\12.wav"); break;
    case 13: system("aplay NumberSpeech\\13.wav"); break;
    case 14: system("aplay NumberSpeech\\14.wav"); break;
    case 15: system("aplay NumberSpeech\\15.wav"); break;
    case 16: system("aplay NumberSpeech\\16.wav"); break;
    case 17: system("aplay NumberSpeech\\17.wav"); break;
    case 18: system("aplay NumberSpeech\\18.wav"); break;
    case 19: system("aplay NumberSpeech\\19.wav"); break;
    case 20: system("aplay NumberSpeech\\20.wav"); break;
    case 21: system("aplay NumberSpeech\\21.wav"); break;
    case 22: system("aplay NumberSpeech\\22.wav"); break;
    case 23: system("aplay NumberSpeech\\23.wav"); break;
    case 24: system("aplay NumberSpeech\\24.wav"); break;
    case 25: system("aplay NumberSpeech\\25.wav"); break;
    case 26: system("aplay NumberSpeech\\26.wav"); break;
    case 27: system("aplay NumberSpeech\\27.wav"); break;
    case 28: system("aplay NumberSpeech\\28.wav"); break;
    case 29: system("aplay NumberSpeech\\29.wav"); break;
    case 30: system("aplay NumberSpeech\\30.wav"); break;
    default: system("aplay NumberSpeech\\default.wav");  break;
    }
  }
  catch (const std::exception &e){
    std::cout << e.what() << std::endl;
    
  }
 }

void speechToNumber(double normalTemperature) {

  int temp = (int)normalTemperature;
  switch (temp){
  case 10: PlaySound(TEXT("one\\ten.wav"), NULL, SND_FILENAME); break;
  case 11: PlaySound(TEXT("one\\eleven.wav"), NULL, SND_FILENAME); break;
  case 12: PlaySound(TEXT("one\\twelve.wav"), NULL, SND_FILENAME); break;
  case 13: PlaySound(TEXT("one\\thirtheen.wav"), NULL, SND_FILENAME); break;
  case 14: PlaySound(TEXT("one\\fourteen.wav"), NULL, SND_FILENAME); break;
  case 15: PlaySound(TEXT("one\\fivetenn.wav"), NULL, SND_FILENAME); break;
  case 16: PlaySound(TEXT("one\\sixteen.wav"), NULL, SND_FILENAME); break;
  case 17: PlaySound(TEXT("one\\seventeen.wav"), NULL, SND_FILENAME); break;
  case 18: PlaySound(TEXT("one\\eighteen.wav"), NULL, SND_FILENAME); break;
  case 19: PlaySound(TEXT("one\\nineteen.wav"), NULL, SND_FILENAME); break;
  case 20: PlaySound(TEXT("one\\twenty.wav"), NULL, SND_FILENAME); break;
  case 21: PlaySound(TEXT("one\\twentyone.wav"), NULL, SND_FILENAME); break;
  case 22: PlaySound(TEXT("one\\twentytwo.wav"), NULL, SND_FILENAME); break;
  case 23: PlaySound(TEXT("one\\twentythree.wav"), NULL, SND_FILENAME); break;
  case 24: PlaySound(TEXT("one\\twentyfour.wav"), NULL, SND_FILENAME); break;
  case 25: PlaySound(TEXT("one\\twentyfive.wav"), NULL, SND_FILENAME); break;
  case 26: PlaySound(TEXT("one\\twentysix.wav"), NULL, SND_FILENAME); break;
  case 27: PlaySound(TEXT("one\\twentyseven.wav"), NULL, SND_FILENAME); break;
  default: PlaySound(TEXT("one\\default.wav"), NULL, SND_FILENAME);  break;
  }
  try{
    switch (temp){
      case 10: system("aplay one\\ten.wav"); break;
      case 11: system("aplay one\\eleven.wav"); break;
      case 12: system("aplay one\\twelve.wav"); break;
      case 13: system("aplay one\\thirtheen.wav"); break;
      case 14: system("aplay one\\fourteen.wav"); break;
      case 15: system("aplay one\\fivetenn.wav"); break;
      case 16: system("aplay one\\sixteen.wav"); break;
      case 17: system("aplay one\\seventeen.wav"); break;
      case 18: system("aplay one\\eighteen.wav"); break;
      case 19: system("aplay one\\nineteen.wav"); break;
      case 20: system("aplay one\\twenty.wav"); break;
      case 21: system("aplay one\\twentyone.wav"); break;
      case 22: system("aplay one\\twentytwo.wav"); break;
      case 23: system("aplay one\\twentythree.wav"); break;
      case 24: system("aplay one\\twentyfour.wav"); break;
      case 25: system("aplay one\\twentyfive.wav"); break;
      case 26: system("aplay one\\twentysix.wav"); break;
      case 27: system("aplay one\\twentyseven.wav"); break;
      default: system("aplay one\\default.wav"); break;
    }
}
catch (const std::exception &e){
  std::cout << e.what() << std::endl;
  
}
}


string FuzzyPart::goFuzzyGo(vector<string> str)
{

  string BRF[2][4][7][7][7] = {
    {//Nobody
      {//Night
        {//Really Cold
          { "T1", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//Very Cold
          { "T2", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//COLD
          { "T3", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T2", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//NORMAL
          { "T4", "T3", "T2", "T1", "T0", "T0", "T0" },
          { "T3", "T3", "T2", "T1", "T0", "T0", "T0" },
          { "T2", "T2", "T2", "T1", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//HOT
          { "T5", "T4", "T3", "T2", "T1", "T0", "T0" },
          { "T4", "T4", "T3", "T2", "T1", "T0", "T0" },
          { "T3", "T3", "T3", "T2", "T1", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T1", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VERY HOT
          { "T10", "T10", "T4", "T3", "T2", "T1", "T0" },
          { "T10", "T10", "T4", "T3", "T2", "T1", "T0" },
          { "T4", "T4", "T4", "T3", "T2", "T1", "T0" },
          { "T3", "T3", "T3", "T3", "T2", "T1", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T1", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//REALLY HOT
          { "T10", "T10", "T5", "T4", "T3", "T2", "T1" },
          { "T10", "T10", "T5", "T4", "T3", "T2", "T1" },
          { "T5", "T5", "T5", "T4", "T3", "T2", "T1" },
          { "T4", "T4", "T4", "T4", "T3", "T2", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T1" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }
      },
      {//Morning
        {//really cold
          { "T1", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//very cold
          { "T2", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//cold
          { "T3", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T2", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//normal
          { "T5", "T4", "T2", "T1", "T0", "T0", "T0" },
          { "T4", "T4", "T2", "T1", "T0", "T0", "T0" },
          { "T2", "T2", "T2", "T1", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//hot
          { "T6", "T5", "T3", "T2", "T1", "T0", "T0" },
          { "T5", "T5", "T3", "T2", "T1", "T0", "T0" },
          { "T3", "T3", "T3", "T2", "T1", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T1", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//very hot
          { "T5", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T5", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T4", "T4", "T4", "T3", "T2", "T1", "T0" },
          { "T3", "T3", "T3", "T3", "T2", "T1", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T1", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//really hot
          { "T5", "T5", "T5", "T4", "T3", "T2", "T1" },
          { "T5", "T5", "T5", "T4", "T3", "T2", "T1" },
          { "T5", "T5", "T5", "T4", "T3", "T2", "T1" },
          { "T4", "T4", "T4", "T4", "T3", "T2", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T1" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }
      },
      {//noon
        {//really cold
          { "T2", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//very cold
          { "T3", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T2", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//cold
          { "T4", "T3", "T2", "T1", "T0", "T0", "T0" },
          { "T3", "T3", "T2", "T1", "T0", "T0", "T0" },
          { "T2", "T2", "T2", "T1", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//normal
          { "T10", "T10", "T3", "T2", "T1", "T0", "T0" },
          { "T10", "T10", "T3", "T2", "T1", "T0", "T0" },
          { "T10", "T3", "T3", "T2", "T1", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T1", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//hot
          { "T6", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T5", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T4", "T4", "T4", "T3", "T2", "T1", "T0" },
          { "T3", "T3", "T3", "T3", "T2", "T1", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T1", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//very hot
          { "T10", "T10", "T4", "T3", "T2", "T1", "T0" },
          { "T10", "T10", "T4", "T3", "T2", "T1", "T0" },
          { "T4", "T4", "T4", "T3", "T2", "T1", "T0" },
          { "T3", "T3", "T3", "T3", "T2", "T1", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T1", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//really hot
          { "T10", "T10", "T5", "T4", "T3", "T2", "T1" },
          { "T10", "T10", "T5", "T4", "T3", "T2", "T1" },
          { "T5", "T5", "T5", "T4", "T3", "T2", "T1" },
          { "T4", "T4", "T4", "T4", "T3", "T2", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T1" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }
      },
      {//afternoon
        {//rc
          { "T2", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VC
          { "T3", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T2", "T2", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//COLD
          { "T5", "T3", "T2", "T1", "T0", "T0", "T0" },
          { "T3", "T3", "T2", "T1", "T0", "T0", "T0" },
          { "T2", "T2", "T2", "T1", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//NORMAL
          { "T5", "T4", "T3", "T2", "T1", "T0", "T0" },
          { "T4", "T4", "T3", "T2", "T1", "T0", "T0" },
          { "T3", "T3", "T3", "T2", "T1", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T1", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//HOT
          { "T6", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T5", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T4", "T4", "T4", "T3", "T2", "T1", "T0" },
          { "T3", "T3", "T3", "T3", "T2", "T1", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T1", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VH
          { "T10", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T5", "T5", "T4", "T3", "T2", "T1", "T0" },
          { "T4", "T4", "T4", "T3", "T2", "T1", "T0" },
          { "T3", "T3", "T3", "T3", "T2", "T1", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T1", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//RH
          { "T10", "T10", "T5", "T4", "T3", "T2", "T1" },
          { "T10", "T10", "T5", "T4", "T3", "T2", "T1" },
          { "T10", "T5", "T5", "T4", "T3", "T2", "T1" },
          { "T4", "T4", "T4", "T4", "T3", "T2", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T1" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }


      }
    },
    {//SOMEBODY
      {//NIGHT
        {//RC
          { "T3", "T2", "T0", "T0", "T0", "T0", "T0" },
          { "T2", "T2", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VC
          { "T6", "T2", "T0", "T0", "T0", "T0", "T0" },
          { "T2", "T2", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//C
          { "T7", "T4", "T2", "T0", "T0", "T0", "T0" },
          { "T4", "T4", "T2", "T0", "T0", "T0", "T0" },
          { "T2", "T2", "T2", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//N
          { "T8", "T6", "T5", "T0", "T0", "T0", "T0" },
          { "T6", "T6", "T5", "T0", "T0", "T0", "T0" },
          { "T5", "T5", "T5", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//H
          { "T10", "T7", "T6", "T4", "T2", "T0", "T0" },
          { "T7", "T7", "T6", "T4", "T2", "T0", "T0" },
          { "T6", "T6", "T6", "T4", "T2", "T0", "T0" },
          { "T4", "T4", "T4", "T4", "T2", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VH
          { "T10", "T9", "T6", "T5", "T3", "T2", "T0" },
          { "T9", "T9", "T6", "T5", "T3", "T2", "T0" },
          { "T6", "T6", "T6", "T5", "T3", "T2", "T0" },
          { "T5", "T5", "T54", "T5", "T3", "T2", "T0" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        }, {//RH
          { "T10", "T10", "T6", "T5", "T3", "T2", "T1" },
          { "T10", "T10", "T6", "T5", "T3", "T2", "T1" },
          { "T6", "T6", "T6", "T5", "T3", "T2", "T1" },
          { "T5", "T5", "T54", "T5", "T3", "T2", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T1" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }
      },
      {//MORNING
        {//RC
          { "T3", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VC
          { "T5", "T3", "T1", "T0", "T0", "T0", "T0" },
          { "T3", "T3", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//COLD
          { "T6", "T5", "T3", "T1", "T0", "T0", "T0" },
          { "T5", "T5", "T3", "T1", "T0", "T0", "T0" },
          { "T3", "T3", "T3", "T1", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T1", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//NORMAL
          { "T9", "T8", "T7", "T3", "T0", "T0", "T0" },
          { "T8", "T8", "T7", "T3", "T0", "T0", "T0" },
          { "T7", "T7", "T7", "T3", "T0", "T0", "T0" },
          { "T3", "T3", "T3", "T3", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//HOT
          { "T10", "T9", "T7", "T5", "T3", "T0", "T0" },
          { "T9", "T9", "T7", "T5", "T3", "T0", "T0" },
          { "T7", "T7", "T7", "T5", "T3", "T0", "T0" },
          { "T5", "T5", "T5", "T5", "T3", "T0", "T0" },
          { "T3", "T3", "T3", "T3", "T3", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VH
          { "T10", "T10", "T8", "T5", "T3", "T2", "T0" },
          { "T10", "T10", "T8", "T5", "T3", "T2", "T0" },
          { "T8", "T8", "T8", "T5", "T3", "T2", "T0" },
          { "T5", "T5", "T5", "T5", "T3", "T2", "T0" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//RH
          { "T10", "T10", "T8", "T5", "T3", "T2", "T1" },
          { "T10", "T10", "T8", "T5", "T3", "T2", "T1" },
          { "T8", "T8", "T8", "T5", "T3", "T2", "T1" },
          { "T5", "T5", "T5", "T5", "T3", "T2", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T1" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }
      },
      {//NOON
        {//RC
          { "T2", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VC
          { "T4", "T3", "T1", "T0", "T0", "T0", "T0" },
          { "T3", "T3", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//COLD
          { "T5", "T4", "T3", "T0", "T0", "T0", "T0" },
          { "T4", "T4", "T3", "T0", "T0", "T0", "T0" },
          { "T3", "T3", "T3", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//NORMAL
          { "T8", "T7", "T4", "T2", "T0", "T0", "T0" },
          { "T7", "T7", "T4", "T2", "T0", "T0", "T0" },
          { "T4", "T4", "T4", "T2", "T0", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//HOT
          { "T9", "T8", "T6", "T5", "T2", "T0", "T0" },
          { "T8", "T8", "T6", "T5", "T2", "T0", "T0" },
          { "T6", "T6", "T6", "T5", "T2", "T0", "T0" },
          { "T5", "T5", "T5", "T5", "T2", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VH
          { "T9", "T9", "T8", "T5", "T3", "T2", "T0" },
          { "T9", "T9", "T8", "T5", "T3", "T2", "T0" },
          { "T8", "T8", "T8", "T5", "T3", "T2", "T0" },
          { "T5", "T5", "T5", "T5", "T3", "T2", "T0" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//RH
          { "T10", "T9", "T8", "T5", "T3", "T2", "T1" },
          { "T9", "T9", "T8", "T5", "T3", "T2", "T1" },
          { "T8", "T8", "T8", "T5", "T3", "T2", "T1" },
          { "T5", "T5", "T5", "T5", "T3", "T2", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T2", "T1" },
          { "T2", "T2", "T2", "T2", "T2", "T2", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }
      },
      {//AFTERNOON
        {//RC
          { "T3", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VC
          { "T5", "T3", "T1", "T0", "T0", "T0", "T0" },
          { "T3", "T3", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//C
          { "T5", "T4", "T1", "T0", "T0", "T0", "T0" },
          { "T4", "T4", "T1", "T0", "T0", "T0", "T0" },
          { "T1", "T1", "T1", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//NORMAL
          { "T8", "T8", "T6", "T3", "T0", "T0", "T0" },
          { "T8", "T8", "T6", "T3", "T0", "T0", "T0" },
          { "T6", "T6", "T6", "T3", "T0", "T0", "T0" },
          { "T3", "T3", "T3", "T3", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//H
          { "T9", "T8", "T6", "T4", "T2", "T0", "T0" },
          { "T8", "T8", "T6", "T4", "T2", "T0", "T0" },
          { "T6", "T6", "T6", "T4", "T2", "T0", "T0" },
          { "T4", "T4", "T4", "T4", "T2", "T0", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//VH
          { "T10", "T8", "T6", "T4", "T2", "T1", "T0" },
          { "T8", "T8", "T6", "T4", "T2", "T1", "T0" },
          { "T6", "T6", "T6", "T4", "T2", "T1", "T0" },
          { "T4", "T4", "T4", "T4", "T2", "T1", "T0" },
          { "T2", "T2", "T2", "T2", "T2", "T1", "T0" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T0" },
          { "T0", "T0", "T0", "T0", "T0", "T0", "T0" }
        },
        {//RH
          { "T10", "T10", "T8", "T6", "T5", "T3", "T1" },
          { "T10", "T10", "T8", "T6", "T5", "T3", "T1" },
          { "T8", "T8", "T8", "T6", "T5", "T3", "T1" },
          { "T6", "T6", "T6", "T6", "T5", "T3", "T1" },
          { "T5", "T5", "T5", "T5", "T5", "T3", "T1" },
          { "T3", "T3", "T3", "T3", "T3", "T3", "T1" },
          { "T1", "T1", "T1", "T1", "T1", "T1", "T1" }
        }
      }
    }


  };
  string guiText = "";
  string rezultat[100];

  try{
    system("sudo modprobe w1-gpio");
    system("sudo modprobe w1-therm");
  }
  catch (const std::exception &e){
    std::cout << e.what() << std::endl;
  }

  std::vector<std::string> strs;
  //for (int i = 0; i < str.size(); i++){
 //   rezultat[i] = str[i];
 // }
  std::stringstream ss(str[0]);
  std::string item;
  // read split arguments into temp vector
  while (std::getline(ss, item, ' ')) {
    strs.push_back(item);
  }

  for (int i = 0; i < strs.size(); i++){
     rezultat[i] = strs[i];
   }

  int nr = str.size();
  double iesirea;
  bool isNumber = false;
  std::string pleaseWork;

 /* if (rezultat[0] != "POST"){
    std::vector<std::string> strss;
    boost::split(strss, rezultat, boost::is_any_of(" "));
    for (int i = 0; i<strss.size(); i++)
    {
      rezultat[i] = strss[i];
      guiText = guiText + " " + strss[i];
    }
  }
  */
  std::vector<std::string> strs2;
  if (rezultat[0] == "POST"){
    pleaseWork = rezultat[24];
    for (int i = 0; i < 100; i++) {
      rezultat[i].clear();
    }
    int idx = pleaseWork.find_last_of("=");
    pleaseWork = pleaseWork.substr(idx + 1, pleaseWork.length());
    
  //  boost::split(strs, pleaseWork, boost::is_any_of("+"));
    std::stringstream ss(pleaseWork);
    std::string item;
    // read split arguments into temp vector
    while (std::getline(ss, item, '+')) {
      strs2.push_back(item);
    }



    for (int i = 0; i<strs2.size(); i++)
    {
      rezultat[i]= strs2[i] ;
      guiText = guiText + " " + strs2[i];
    }
  }
  else{
    ///todo modify not ok 
    
      guiText = guiText + " " + rezultat[0];
 
  }
  if (rezultat[0] == "GET")
  {
    ////////
    guiText = "22;22;22;22;22;";
  }

  ///////////////
  try{
    double d = std::stod(rezultat[0]);

    try {

      if ((d>-10) && (d<51))
      {

        numberToSpeech(std::stoi(rezultat[0]));
        ofstream myfile;
        guiText = guiText+";" + rezultat[0];

        myfile.open("temp.txt");
        myfile << d;
        myfile.close();
      }


      Fuzzy2 fuz2;
      iesirea = fuz2.goFuzzy2(BRF);

      /*
      //
      // Thread senzor temperatura
      //
      //
      */
      try{
        ReadTemperature rt;
        // rt.readTemp();
        guiText = guiText + ";" + std::to_string(rt.readTemp()) + ";";
      }
      catch (std::exception e) {
        std::cout << "sistem error file not found to read temp";
      }

      isNumber = true;
    }
    catch (std::exception e) {
      std::cout << "sistem error file not found temp.txt";
    }
  }
  catch (std::exception e){
    std::cout << "not number";
  }


  if (rezultat[0].compare(" ") == 0)
  {
    isNumber = true;
  }

  if (!isNumber)
  {
    Fuzzy1 fuz;

    guiText = guiText+ ";" + fuz.goFirstFuzzy(rezultat, nr);
    Fuzzy2 fuz2;
    iesirea = fuz2.goFuzzy2(BRF);
    
 
    /*
    //
    // Thread senzor temperatura
    //
    //
    */
    try{
        ReadTemperature rt ;
       // rt.readTemp();
        guiText = guiText + ";" + std::to_string(rt.readTemp()) + ";";
    }
    catch (std::exception e) {
      std::cout << "sistem error file not found to read temp";
    }

  }

  if (rezultat[0].compare("temp") == 0)
  {
    double temperature;

    try{
      ifstream infile;
      infile.open("temp.txt");
      infile >> temperature;

      speechToNumber(temperature);
      guiText = guiText + ";" + to_string(temperature) + ";";
      isNumber = true;
      infile.close();

      /*
      //
      // Thread senzor temperatura
      //
      //
      */
      try{
        ReadTemperature rt;
        // rt.readTemp();
        guiText = guiText + ";" + std::to_string(rt.readTemp()) + ";";
      }
      catch (std::exception e) {
        std::cout << "sistem error file not found to read temp";
      }

    }
    catch (std::exception e) {
      std::cout << "can't open file";
    }
  }



  std::cout << "uuuuuuuuuuuuuuuuuuuuuuu "<<guiText<<endl;
  
  return guiText;

}



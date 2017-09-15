#include "releu.h"
#include <iostream>

class Singleton
{
private:
  static bool instanceFlag;

  Singleton()
  {
    instanceFlag= true;
  }
public:

  void method();
  ~Singleton()
  {
    instanceFlag = false;
  }
  static ControlRelays* Singleton::getInstance()
  {
    static ControlRelays single;
    return &single;

  }
};

#pragma once

#include <memory>
#include <string>
#include <fstream>
#include <iostream>
#include <mutex>

class StatusReport
{
private:

  StatusReport(const StatusReport&) = delete;
  StatusReport& operator=(const StatusReport&) = delete;

public:
  StatusReport() = default;

  static void Nofity()
  {
    std::cout << "Initializing Singleton" << '\n';
  }
  static StatusReport& StatusReport::Instance()
  {
    std::call_once(StatusReport::onceFlag, []()
    {
      Nofity();
      instance.reset(new StatusReport);
    });

    std::cout << "Getting  Singleton instance" << '\n';
    return *(instance.get());
  }

  int Initialize()
  {

    try
    {
		//do stuff
    }
    catch (...)
    {
      //MAGIC NUMBERS?!
      return 0;
    }

    return 0;
  };

};

std::unique_ptr<StatusReport> StatusReport::instance;
std::once_flag StatusReport::onceFlag;


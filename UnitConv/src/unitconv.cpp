#include <iostream>
#include "unitconv.h"

double dBmTodBmMHz(double& inpValue /*dBm*/, double& bandwidth /*Hz*/)
{
  double retValue = 0;
  retValue = inpValue - (10 * log10(bandwidth / 1e6));
  std::cout << "converted Value : "<<retValue;
  return retValue;
}

#include "unitconv.h"

int main() {
  double retValue = 0;
	double inputDBM = -10;
	double bandwidth = 10e6;
	retValue = dBmTodBmMHz(inputDBM, bandwidth);
	return 0;
}

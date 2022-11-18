#pragma once

#ifdef _WIN32
  #define unitconv_EXPORT __declspec(dllexport)
#else
  #define unitconv_EXPORT
#endif

unitconv_EXPORT double dBmTodBmMHz(double& inpValue /*dBm*/, double& bandwidth /*Hz*/);

#include <cstdio> 
#include <cmath>

#include "sumup.h"
#include "sumdown.h"

int main(void){
  float su = 0, sd = 0;
  for(float x = 1.0; x<=10000; ++x){
    su = sumup(x);
    sd = sumdown(x);
    std:: printf("%f %.5f\n", x, (su-sd)/(sd+su));
  }

  return 0;
}

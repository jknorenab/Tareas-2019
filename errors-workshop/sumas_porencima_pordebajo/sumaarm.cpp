#include <cstdio>
#include <cmath>
#include <iostream>

double sumup(double N);
double sumdown(double N);

int main(void){
  double x = 5.0;
  double su = 0.0, sd = 0.0, suma = 0.0;
  
  su = sumup(x);
  sd = sumdown(x);
  std:: printf("%f %5.5e %5.5e\n", x, su, sd);

  return 0;
}

double sumup(double N){
  double suma = 0;
  for(double ii = 1.0; ii<=N; ++ii){
    suma += 1.0/ii;
  }
  return suma;
}

double sumdown(double N){
  double suma = 0;
  for(double ii = N; ii >= 1.0; --ii){
    suma += 1.0/ii;
  }
  return suma;
}

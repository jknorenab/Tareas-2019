#include <iostream>
#include <cstdio>
#include <cmath>

double armonico(double N);


int main(void){

  double N;
  double coso;

  N = 5;
  coso = armonico(N);

  std :: cout << coso << std:: endl;  

  return 0;
  
}

double armonico(double N){
  double sum;
  sum = 0;
  for (double i = 1; i<=N; ++i){
    sum += 1/i;
  }
  return sum;
}


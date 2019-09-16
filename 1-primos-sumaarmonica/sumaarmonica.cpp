#include <iostream>
#include <cstdio>
#include <cmath>

double armonico(double N);

int main(void){

  double total;
  total = 0;

  for (double j =1; j<=1000; ++j){
    total = armonico(j);
    std :: cout << j << "\t" << total << std:: endl;
  }
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


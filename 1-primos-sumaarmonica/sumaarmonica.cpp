#include <iostream>
#include <cstdio>
#include <cmath>


int main(void){

  float N;
  float sum;

  N = 5;
  sum = 0;  

  for (float i = 1; i<=N; ++i){
    sum += 1/i;
  }
  std :: cout << sum << std:: endl;


  return 0;
  
}

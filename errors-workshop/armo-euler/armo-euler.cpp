#include <cstdio>
#include <cmath>
#include <iostream>

//en este programa implementamos un pseudocódigo para encontrar la constante de Euler, vemos que el despues de 1000 pasos encontramos un tope, en 0.577, que no hay diferencia entre hacer la suma de 1 a N, o de N a 1 (PORQUE?), resulta que el algoritmo converge a la constante de Euler, después de más o menos 90 mil pasos

double sumup(double N);
double sumdown(double N);

int main(void){
  
  double gammadown = 0.0, gammaup = 0.0;
  double su = 0.0, sd = 0.0;
  double N = 100000.0;
  
  for(int k=1.0; k<=N; ++k){    
    su = sumup(k);
    sd = sumdown(k);
    gammadown = sd - std::log(k);
    gammaup = su - std::log(k);
    
    if(k%100 == 0){
      std:: printf("%d %5.5e %5.5e %5.5e %5.5e\n", k,su,sd, gammadown, gammaup);
    }
  }  
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


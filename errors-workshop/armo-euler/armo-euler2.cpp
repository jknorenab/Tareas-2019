#include <cstdio>
#include <cmath>
#include <iostream>

//en este programa implementamos un pseudocódigo diferente al programa anterior para encontrar la constante de Euler, la pregunta que me surge aquí radica en el tipo de variables que usamos, está mal que en la declaración de la función yo   la defina con double, y luego la evalúe con enteros? cómo cambian los resultados cuando uso doubles y floats? Por otro lado, porqué no es necesario inicializar una variable cuando ésta depende de funciones o cosas así.

//En este programa llegamos a la convergencia de la constante de euler, casi en el paso 5000; mucho más rápido en el anterior.

double sumup(double N);
double sumdown(double N);

int main(void){
  
  double gammadown = 0.0, gammaup = 0.0;
  double su = 0.0, sd = 0.0;
  double N = 10000.0;
  
  for(int k=1.0; k<=N; ++k){    
    su = sumup(k);
    sd = sumdown(k);
    gammadown = sd - std::log(k+0.5);
    gammaup = su - std::log(k+0.5);
    
    if(k%100 == 0){
      std:: printf("%d %10.16e %10.16e %10.16e %10.16e\n", k,su,sd, gammadown, gammaup);
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


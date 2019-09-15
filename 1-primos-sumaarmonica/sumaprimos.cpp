#include <iostream>
#include <cstdlib>
#include <cmath>

double primo(int x);

int main(void){

  int sum;
  int z;
  int contador;

  z = 0;
  sum = 0;
  contador = 0;
  

  for (int i = 1000; i<= 1500; ++i){
    z = primo(i);
    if (z==0){
      contador = contador;
      sum = sum;
    }
    if (z==1){
      sum +=i;
      contador +=1; 
    }
  }
  std :: cout << "La suma de los números primos entre 500 y 12400 es" << sum << std:: endl;
  std :: cout << "La cantidad de números primos entre 500 y 12400 es" <<  contador << std:: endl;
  

  return 0;
}

double primo(int x){
 int resto;
 int d;
 int contador;

 resto = 1;
 d = 2;
 contador = 0;

 while(resto !=0){
   resto = x%d;
   if(resto==0){
     if (d==x){
     contador = 1;
     }
     if(d!=x){
     contador = 0;
     }
   }
   d+=1;
}

return contador;
}


#include <iostream>
#include <cstdlib>
#include <cmath>

double primo(int x);

int main(void){

  int sum;
  int z;

  z = 0;
  sum = 0;

  z = primo(9973);
  std :: cout << z << std:: endl;

  return 0;
}
  
  /*
z = 0;
suma = 0;

for(int i= 50; i<=100; ++i){
  z = primo(i);
  if(z == 0){
  suma = suma;
  }
  if(z==1){
  suma +=i; 
  }
}
cout<<suma<<endl;
  */

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


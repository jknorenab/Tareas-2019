#include "sumdown.h"

float sumdown(float N){
  float suma = 0;
  for(float ii = N; ii >= 1.0; --ii){
    suma += 1.0/ii;
  }
  return suma;
}

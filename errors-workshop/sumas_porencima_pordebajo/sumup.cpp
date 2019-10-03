#include "sumup.h"

float sumup(float N){
  float suma = 0;
  for(float ii = 1.0; ii<=N; ++ii){
    suma += 1.0/ii;
  }
  return suma;
}

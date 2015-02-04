#include "random_mock.h"

float valor_random = 0.0;

void set_random(float v){
	valor_random = v;
}

float rand(){
	return valor_random;
}
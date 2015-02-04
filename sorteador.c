#include <math.h>

#ifndef _RANDOM_MOCK_
#warning _RANDOM_MOCK_ NAO DEFINIDO
#include <stdlib.h>
#else
#include "random_mock.h"
#endif

#include "sorteador.h"

int sortear(int limite){
	return round(rand()*limite);
}
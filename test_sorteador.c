// Para compilar no Linux: gcc -o test_sorteador test_sorteador.c sorteador.c random_mock.c -lm -D_RANDOM_MOCK_

#include <stdio.h>
#include "runner.h"
#include "random_mock.h"
#include "sorteador.h"


int teste_sorteador(){
	set_random(0.5);
	printf("rand() = %f\n", rand());
	printf("sortear(%d) = %d\n", 10, sortear(10));
	_assert(sortear(10) == 5);

	set_random(0.54);
	printf("sortear(%d) = %d\n", 10, sortear(10));
	_assert(sortear(10) == 5);

	set_random(0.56);
	printf("sortear(%d) = %d\n", 10, sortear(10));
	_assert(sortear(10) == 6);

	return 0;
}

int todos_testes() {
	_verify(teste_sorteador);
	
	return 0;
}

int main(){
	int resultado = todos_testes();
	
	if(resultado == 0){
		printf("TODOS OS TESTES PASSARAM\n");
	} else {
		printf("%d\n", resultado);
	}
	
	printf("Testes rodados: %d\n", tests_run);
	
	return 0;
}

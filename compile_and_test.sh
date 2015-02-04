echo "gcc -o test_sorteador test_sorteador.c sorteador.c random_mock.c -lm -D_RANDOM_MOCK_"
gcc -o test_sorteador test_sorteador.c sorteador.c random_mock.c -lm -D_RANDOM_MOCK_

echo "./test_sorteador"
./test_sorteador
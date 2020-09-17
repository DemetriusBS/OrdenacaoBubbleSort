#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void BubbleSort(int vet[]); //Chamada do método de ordenação

#define TAMNHOVETOR 10

int main() {
	
	setlocale (LC_ALL, "Portuguese"); 

	int vet[TAMNHOVETOR] = { 0 };
	srand(time(NULL)); //Função para gerar valores aleatórios

	for (int i = 0; i < TAMNHOVETOR; i++) {
		vet[i] = rand() % 100; 
	}

	printf("Vetor não ordenado: \n");
	for (int i = 0; i < TAMNHOVETOR; i++) {
		printf("%d\n", vet[i]);
	}

	BubbleSort(vet); //Ordenando o vetor

	printf("Vetor ordenado: \n");
	for (int i = 0; i < TAMNHOVETOR; i++) {
		printf("%d\n", vet[i]);
	}

	system("pause");
	return 0;
}

void BubbleSort(int vet[]){
	int aux;
	for (int n = 1; n <= TAMNHOVETOR; n++) {
		for (int i = 0; i < (TAMNHOVETOR - 1); i++) {
			if (vet[i] > vet[i + 1]) {
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
		}
	}
}
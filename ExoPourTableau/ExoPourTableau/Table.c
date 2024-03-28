#include <stdlib.h>
#include <stdio.h>
// exo 3 et 4

//void SetValue(int* cell, int x) {
//
//	*cell = x;
//}

int GetPositifInt() {
	int x;
	while (1) {
		printf("Entrez un nombre entier positif : ");
		int success = scanf_s("%d", &x);
		
		if (success == 1)
		{
			break;
		}	
	}
	return x;
}


int main() {

	// exo 3
	/*int* tf = (int*)malloc(sizeof(int) * 10);
	if (tf == NULL)
		exit(1);


	for (int i = 0; i < 10; i++)
	{
		tf[i] = 0;
		int* x = &tf[i];
		SetValue(x, 5);


		printf("%d\n", tf[i]);
		printf("%d\n", x);
	}

	free(tf);*/


	//exo 4
	/*int tf[10];

	for (int i = 0; i < 10; i++)
	{
		tf[i] = 0;
		int* x = &tf[i];
		SetValue(x,5);
		printf("%d\n", tf[i]);
	}*/


	//exo5
	int taille;

	printf("Donne une taille : ");
	scanf_s("%d", &taille);
	int* tf = (int*)malloc(sizeof(int) * taille);
	if (tf == NULL)
		exit(1);

	for (int i = 0; i < taille; i++) {
		int x;
		printf("[%d] => ", i);
		scanf_s("%d", &x);
		tf[i] = x;
	}

	printf("\n");

	for (int i = 0; i < taille; i++) {
		printf("[%d] => %d\n", i, tf[i]);
	}

	free(tf);


	//exo 6

	/*int taille = 0;

	

	while (1)
	{
		int* tf = (int*)malloc(sizeof(int) * taille);
		
		if (tf == NULL)
			exit(1);

		int number = GetPositifInt();
		if (number == -1)
		{
			for (int j = 0; j < taille; j++) 
			{
				printf("[%d] => %d\n", j, tf[taille]);
			}			
			break;
		}
		taille++;

		int* tf2 = (int*)malloc(sizeof(int) * taille);
		if (tf2 == NULL)
			exit(1);

		tf[taille] = number;
		tf2[taille] = tf[taille];
		free(tf);
		
			
	}*/
	

	return 0;
}

//void f()
//{
//	int i = 0;
//
//	{
//		int* p = (int*) malloc(sizeof(int));
//		int j = 7;
//	}
//
//
//
//}
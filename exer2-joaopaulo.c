//Exercicio 2
//Nome: João Paulo do Nascimento	RA: 0056161

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void order(int vect[], int size)
{

	int i, j, x;

	for (i = size - 1; i >= 1; i--)
		for (j = 0; j < i; j++)
			if (vect[j] > vect[j + 1])
			{
				x = vect[j];
				vect[j] = vect[j + 1];
				vect[j + 1] = x;
			}
}

void order2(int vect2[], int size2)
{

	int a, b, z;

	for (a = size2 - 1; a >= 1; a--)
		for (b = 0; b < a; b++)
			if (vect2[b] > vect2[b + 1])
			{
				z = vect2[b];
				vect2[b] = vect2[b + 1];
				vect2[b + 1] = z;
			}
}

int main()
{

	int i = 0, j, e = 0, vect[10], x = 0, y, e2, vect2[5], cont = 0, g, h;

	srand(time(NULL));

	do {
		vect[i] = rand() % 51;
		e = 0;
		for (j = 0; j < i; j++)
		{
			if (vect[j] == vect[i])
				e = e + 1;
		}
		if (e == 0) i++;
	} while (i < 10);
	order(vect, 10);
	printf("\n\nA = ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", vect[i]);
	}
	printf("\n\n");

	do {
		vect2[x] = rand() % 51;
		e2 = 0;
		for (y = 0; y < x; y++)
		{
			if (vect2[y] == vect2[x])
				e2 = e2 + 1;
		}

		if (e2 == 0)
			x++;
	} while (x < 5);

	order2(vect2, 5);
	printf("\n\nB = ");
	for (x = 0; x < 5; x++)
	{
		printf("%d ", vect2[x]);
	}
	printf("\n\n");

	for (int g = 0; g < 5; g++)
	{
		for (int h = 0; h < 10; h++)
		{
			if (vect[g] == vect2[h])
			{
				cont++;
			}
		}
	}

	if (cont == 5)
	{
		printf("\nB is a subset of A? YES[x] | NO[ ]\n\n");
	}
	else
	{
		printf("\nB is a subset of A? [ ] | NO[x]\n\n");
	}
	return 0;
}

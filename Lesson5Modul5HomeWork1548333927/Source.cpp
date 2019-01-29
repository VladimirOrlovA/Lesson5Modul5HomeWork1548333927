#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson5Modul5HomeWork1548333927 //

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 10;
	int a[ind][ind], l, c, sum = 0;

	for (l = 0; l < ind; l++)
	{
		for (c = 0; c < ind; c++)
		{
			a[l][c] = 1 + rand() % 9;
			printf("%d ", a[l][c]);
		}
		printf("\n");
	}

	printf("\nСумма элементов строк массива:\n\n");

	for (l = 0; l < ind; l++)
	{
		for (c = 0; c < ind; c++)
		{
			sum += a[l][c];

		}
		printf("%3d  sum = %4d \n", l + 1, sum);
		sum = 0;
	}
}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const line = 4, column = 5;
	int a[line][column], l, c, sum = 0, buffer;

	for (l = 0; l < line; l++)
	{
		for (c = 1; c < column; c++)
		{
			a[l][c] = 1 + rand() % 5;
			printf("%d  ", a[l][c]);
		}
		printf("\n");
	}

	for (l = 0; l < line; l++)
	{
		for (c = 1; c < column; c++)
		{
			sum += a[l][c];
		}
		a[l][0] = sum;
		sum = 0;
	}

	sum = 100;

	printf("\n-----------------------------\n\n");

	for (l = 0; l < line; l++)
	{
		for (c = 0; c < column; c++)

			printf("%2d  ", a[l][c]);

		if (a[l][0] < sum)
		{
			sum = a[l][0];
			buffer = l;
		}

		printf("\n");
	}
	printf("\n\nСтрока с наименьшей суммой элементов -> № %d \n\n", buffer+1);
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const line = 6, column = 8;
	int a[line][column], l, c, x = 1;

	for (l = 0; l < line; l++)
	{
		for (c = 0; c < column; c++)
		{
			a[l][c] = -3 + rand() % 9;
			printf("%2d ", a[l][c]);
		}
		printf("\n");
	}


		for (l = 0; l < line; l++)
		{
			if (a[l][0] > 0)
				x *= a[l][0];
		}
		printf("\n\nПроизведение положительных элементов первого столбца = %d \n\n", x);
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const line = 5, column = 5;
	int a[line][column], l, c, n = 1;

	for (l = 0; l < line; l++)
	{
		for (c = 0; c < column; c++)
		{
			a[l][c] = n;
			n++;
			printf("%d ", a[l][c]);
		}
		for (l = 1; l < line; l++)
		{
			a[l][column] = n;
			n++;
			printf("%d ", a[l][c]);
		}
	}
		


}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const line = 3, column = 3;
	int a[line][column], l, c, b[line];

	for()
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (10) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>


void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}



int input() {
	int number = 0;
	printf("정수(-1.종료 1.삼각형 2.나비):");
	scanf("%d", &number);
	return number;
}

void tri() {
	int x = 0;
	system("cls");
	printf("삼각형크기");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++)
		{
			printf("%3d",j);
		}
		printf("\n");
	}

	char a = 0;
	gotoxy(75, 0);
	printf("문자");
	getchar();
	scanf("%c",&a);

	for (int i = 'A'; i <= a; i++) {	//A(65) B(66) C(67)
		for (int j = 'A'; j < i; j++)
		{
			printf("%3c", j);
		}
		printf("\n");
	}
}

void but() {
	int x = 0;
	system("cls");
	printf("나비크기");
	scanf("%d", &x);
	int cnt = 0;
	for (int i = 1; i < x; i++) {
		
		for (int j=x-i;j>1;j--) {
			printf("   ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%3d", i);
		}
		printf("\n");
	}
	char a = 0;
	gotoxy(75, 0);
	printf("문자");
	getchar();
	scanf("%c", &a);

	for (int i = 'A'; i <= a; i++) {

		for (int j = a - i; j >= 1; j--) { //65
			printf("   ");
		}
		for (int j = i-1; 'A' <= j; j--)
		{
			printf("%3c", j );
		}
		gotoxy(75, i-64);
	}
}

int main() {
	system("mode con: cols=120 lines=50");
	int num = 0;
	while (1) {
		num = input();

		if (num == -1) {
			printf("종료");
			break;
		}
		else if (num == 1) {
			tri();
		}
		else if (num == 2) {
			but();
		}
		system("pause");
		system("cls");
	}
	return 0;
}
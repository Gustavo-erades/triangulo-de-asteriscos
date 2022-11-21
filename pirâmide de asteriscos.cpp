#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <cstring>
int main(void){
	int unsigned CPAGE_UTF8=65001;
	int unsigned CPAGE_DEFAULT=GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	system("color 0F");
	int num;
	char nome[256];
	printf("Qual o seu nome? ");
	setbuf(stdin,0);
	fgets(nome,256,stdin);
	nome[strlen(nome)-1]='\0';
	system("color F0");
	printf("\tOlá %s,\n",nome);
	printf("\tDigite um número inteiro, até 10: ");
	scanf("%d",&num);
	if(num<=10){
	system("cls");
	for (int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
		system("color E0");
		}
		}
	else{
		system("color F4");
		printf("\nO número inteiro digitado deve ser menor ou igual a 10!");
	while(num>10){
	printf("\nDigite um número inteiro, até 10: ");
	scanf("%d",&num);
	if(num<=10){
	system("cls");
	for (int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
		system("color E0");
		}
		}
	else if(num>10){
		system("color F4");
		printf("O número inteiro digitado deve ser menor ou igual a 10!");
	}
	}
	}
	system("pause");
	SetConsoleOutputCP(CPAGE_DEFAULT);
}
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1 [100], nome2 [100];
	int idade1, idade2;
	
	printf("Digite o nome da primeira pessoa:\n");
	fgets(nome1, 100, stdin);
	
	printf("Digite a idade da primeia pessoa:\n");
	scanf("%d", &idade1);
	
	getchar();
	
	printf("Digite o nome da segunda pessoa:\n");
	fgets(nome2, 100, stdin);
	
	printf("Digite a idade da segunda pessoa:\n");
	scanf("%d", &idade2);
	
	printf("\n-----Informações das pessoas-----\n");
	printf("\nNome da primeira pessoa: %s", nome1);
	printf("Idade da primeira pessoa: %d", idade1);
	printf("\n");
	printf("\nNome da segunda pessoa: %s", nome2);
	printf("Idade da segunda pessoa: %d \n", idade2);
	
	return 0;
}
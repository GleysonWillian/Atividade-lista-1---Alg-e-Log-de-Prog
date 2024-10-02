#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura;
	int idade;
	char nome [100], prof [100], rua [100], bairro [100], cidade [100], est [3], sexo [10], cep [10], telefone [30];
	
	printf("Digite o seu nome: ");
	fgets(nome, 100, stdin);
	
	printf("Quantos anos voce tem? ");
	scanf("%d", &idade);
	
	printf("Digite o seu sexo: ");
	scanf("%s", &sexo);
	
	printf("Digite o seu peso (em kg): ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura (em metros): ");
	scanf("%f", &altura);
	
	getchar ();
	
	printf("Qual é a sua profissão? ");
	fgets(prof, 100, stdin);
	
	printf("Digite o nome da sua rua: ");
	fgets(rua, 100, stdin);
	
	printf("Digite nome do seu bairro: ");
	fgets(bairro, 100, stdin);
	
	printf("Digite o nome da sua cidade: ");
	fgets (cidade, 100, stdin);
	
	printf("Digite o nome do seu estado (em sigla): ");
	scanf("%s", &est);

	printf("Digite o CEP da sua casa: ");
	scanf("%s", &cep);
	
	getchar();
	
	printf("Digite o n° do seu telefone: ");
	fgets (telefone, 30, stdin);
	
	printf("\n--- Informações da Pessoa ---\n");
    printf("Nome: %s", nome);
    printf("Idade: %d anos\n", idade);
    printf("Sexo: %s\n", sexo);
    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m\n", altura);
    printf("Profissão: %s", prof);
    printf("Rua: %s", rua);
    printf("Bairro: %s", bairro);
    printf("Cidade: %s", cidade);
    printf("Estado: %s\n", est);
    printf("CEP: %s\n", cep);
    printf("Telefone: %s\n", telefone);
		
	return 0;
}
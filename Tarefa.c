#include <stdio.h>
#include <stdlib.h>
struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;

};
int main(){
struct cadastro c;
    printf("digite seu nome: ");
    gets(c.nome);
    printf ("digite sua rua: ");
    gets(c.rua);
    printf("Digite sua idade: ");
    scanf("%d", &c.idade);
    printf("Digite o numero da casa ");
    scanf("%d", &c.numero);
    system("pause");
    return 0;
}

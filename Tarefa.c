#include <stdio.h>
#include <stdlib.h>
struct cadrasto{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
    
};
int main()
{
    struct cadastro c;
    gets("Digite o seu nome: \n", c.nome);
    scanf("Digite sua idade: %d", &c.idade);
    gets("Digite o sua rua: \n", c.rua);
    scanf("Digite o numero da residencia: %d", &c.numero);
    system("pause");
    return 0;
}

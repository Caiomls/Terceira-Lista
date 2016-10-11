#include <stdio.h>
#inculde <stdlib.h>

struct registro{
    int idade;
    char nome;
};

int main(){
    registro pessoa[6];
        int a, b;
        char A, B;
        for (a=0;a<6;a++){
            printf("Insira o nome:");
            scanf("%s", &pessoa.nome);
            printf("Insira a Idade:");
            scanf("%d", &pessoa[a].idade);
        }
        
        for (a=0;a<6;a++){
            for(b=0; b<5-a;b++){
                if(pessoa[b].idade>pessoa[b+1].idade){
                    A = pessoa[b].nome;
                    B = pessoa[b+1].nome;
                    pessoa[b].nome = B;
                    pessoa[b+1] = A;
                }
            }
        }
        printf("A pessoa mais jovem eh: %s", pessoa[0].nome);
        printf("A pessoa mais velha eh: %s", pessoa[6].nome);
return 0;
}

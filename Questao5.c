#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    int matric;
    float nota1;
    float nota2;
    float nota3;
    int i;

};
int main(){
    i==0;
    do{
    printf("Nome do aluno..:: ");
    fflush(stdin);

    fgets(aluno.nome, 40, stdin);

    printf("Informe a matricula ..: ");
    scanf("%d", &aluno.matric);

    printf("Informe a 1a. nota ..: ");
    scanf("%f", &aluno.nota1);

    printf("Informe a 2a. nota ..: ");
    scanf("%f", &aluno.nota2);

    printf("Informe a 3a. nota ..: ");
    scanf("%f", &aluno.nota3);

    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome ...........: %s", aluno.nome);
    printf("Disciplina .....: %d", aluno.matric);
    printf("Nota da Prova 1 ...: %.2f\n" , aluno.nota1);
    printf("Nota da Prova 2 ...: %.2f\n" , aluno.nota2);
    printf("Nota da Prova 3 ...: %.2f\n" , aluno.nota3); 
    getch();
    i+=1
    return(0);
    }while (i<5);
}



}

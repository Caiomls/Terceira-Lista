#include <stdlib.h>
#include <stdio.h>

struct retangulo{
    int x1;
    int y1;
    int x2;
    int y2;
struct ponto{
    int x;
    int y;
};
};

int main(){

    struct retangulo r;
        printf ("Insira as coordenadas do canto superior esquerdo do retangulo");
        scanf ("%d", &r.x1);
        scanf ("%d", &r.y1);
        printf ("insira as coordenadas do canto inferior direito do retangulo");
        scanf ("%d", &r.x2);
        scanf ("%d", &r.y2);
     struct ponto p;
        printf ("Insira as coordenadas do ponto")
        scanf ("%d", &p.x);
        scanf ("%d", &p.y);
if (p.x>=r.x1 && p.x<=r.x2){
    if (p.y>=r.y1 && p.y<=r.x2){
        printf("O ponto esta dentro do retangulo");
    }
    else{
        printf("O ponto esta fora do retangulo");
    }
    
}
else {
    printf("O ponto esta fora do retangulo");
}        
return 0;        
}

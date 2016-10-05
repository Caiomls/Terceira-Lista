#include <stdio.h>
#include <stdlib.h>
//Completamente cagado

int distanciax, distanciay;
struct coordenada {
  int x;
  int y;
};

int main(){
  struct coordenada c;
    scanf("%d", &c.x);
    scanf("%d", &c.y);
  
  struct coordenada d;
    scanf("%d", &d.x);
    scanf("%d", &d.y);
  if c.x>d.x {
    distanciax = (c.x-d.x)
  }
  else{
    distanciax = (d.x-c.x)
  }
  if c.y>d.y {
    distanciay = (c.y-d.y)
  }
  else  {
    disntaciay = (d.y-c.y)
  }
  printf ("Distancia eh de (%d,%d)",disanciax,disntanciay)

return (0);
}


#include <stdio.h>
#include <stdlib.h>
//Não mais cagado

int X, Y;
struct coordenada {
  int x;
  int y;
};

int main(){
  struct coordenada c;
    scanf ("%d", &c.x);
    scanf ("%d", &c.y);

  struct coordenada d;
    scanf ("%d", &d.x);
    scanf ("%d", &d.y);
  if (c.x>d.x) {
    X = (c.x-d.x);
  }
  else{
    X = (d.x-c.x);
  }
  if (c.y>d.y) {
    Y = (c.y-d.y);
  }
  else  {
    Y = (d.y-c.y);
  }
  printf ("Distancia eh de (%d,%d)",X,Y);
  system("pause");

return (0);
}

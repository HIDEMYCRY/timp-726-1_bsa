#include <stdio.h>
int main ()
{
 int x,el,k=0;
 scanf("%d", &x);
 for (int i=0; i<x; i++){
  scanf("%d", &el);
  k=k+el*el;
}
 printf("%d", k);
} 

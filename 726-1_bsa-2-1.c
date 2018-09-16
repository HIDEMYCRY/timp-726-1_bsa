#include <stdio.h>
int main()
{
 int x,el,pred,k;
 scanf ("%d", &x);
 for ( int i=1; i<x; i++){
  scanf ("%d", &el);
  if (i==1) pred=el;
  else if(pred<=el) k=1;
   else {k=0;break;};
 }
 printf("%d", k);
return 0;
}


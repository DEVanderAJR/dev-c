#include <stdio.h>
#include <conio.h>
int main(){
    int x,y,n; 
    printf ("Digite um numero entre 0 e 20:\n");
    scanf ("%d",&x);
    for (n=0;n<=20;n++){
    y = n*x;
    printf ("\n%d * %d=%d",n, x, y);
}
getch();
}

#include <stdio.h>
#include <conio.h>
int main(){
    float y,x,a,b;
     int n;
    x=0;
    printf ("Informe a Quantidade de cooderndas desejadas:\n\a");
    scanf ("%d",&n);
    printf ("Digite o valor de A:"
           "\nSequidamente Pressione Enter.\n\a");
    scanf ("%f,",&a);
    getch();
    printf ("Digite o valor de B:\n\a");
    scanf ("%f",&b);
    while (n>0){
          y=a*x+b;
          n=n-1;
          printf ("(%0.0f,%0.0f)""\n",x,y);
          x=x+1;
          getch();
          }
          }

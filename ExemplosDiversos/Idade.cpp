#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
int ano,idade;
    printf ("Informe o ano do seu nascimento:\n");
    printf ("E pressione enter\n\n");
    scanf  ("%d",&ano);   
    printf ("O ano informado foi: %d\n",ano);
    int niver;
    printf ("\n\aTecle (1), Caso tenha feito aniversário;\n\nOU Tecle do (2),caso ainda não tenha feito.\n");
    scanf ("%d",&niver);
    switch  (niver){
    case 1: (idade=2009-ano);break;
    case 2: (idade=2008-ano);break;
}
    printf ("\nagora pressione enter");
    getch();
    printf ("\nA sua idade é:%d",idade);
   getch();
   getch();
}
    
    

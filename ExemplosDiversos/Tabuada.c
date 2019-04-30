#include <stdio.h>
#include <conio.h>
int main(){
     int n,c,s,escolha;
    printf("Primeiramente informe o tipo de conta que você necessita fazer:\n\nTecle (1) para multiplicação\nTecle(2) para Divisão;\nTecle (3) para Adição;\nTecle (4) para Subtração.\n");
    scanf ("%d",&escolha);
    printf ("\nOK!\n");
    printf ("Press Enter\n");
    getch();
    printf ("digite um número entre 1 e 100:\n");
    scanf("%d",&n);
    
     switch (escolha){       
     for(c=0;c<=100;c++);   
      case 1:   s=n*c;
    printf ("\n%d * %d=%d",n,c,s);break; 
      case 2:   s=n/c;
    printf ("\%d / %d=%d",n,c,s);break;
      case 3:   s=n+c;
    printf ("\%d + %d=%d",n,c,s);break;
      case 4:   s=n-c;
    printf ("\n%d - %d=%d",n,c,s);break;

   default : printf ("Ocorreu um erro no Banco de Dados do programa\t,Por favor Digito o número correspondente\tao calculo aritmético desejado!Reinicie o Programa.\n");
   getch();
}
}

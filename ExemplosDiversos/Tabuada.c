#include <stdio.h>
#include <conio.h>
int main(){
     int n,c,s,escolha;
    printf("Primeiramente informe o tipo de conta que voc� necessita fazer:\n\nTecle (1) para multiplica��o\nTecle(2) para Divis�o;\nTecle (3) para Adi��o;\nTecle (4) para Subtra��o.\n");
    scanf ("%d",&escolha);
    printf ("\nOK!\n");
    printf ("Press Enter\n");
    getch();
    printf ("digite um n�mero entre 1 e 100:\n");
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

   default : printf ("Ocorreu um erro no Banco de Dados do programa\t,Por favor Digito o n�mero correspondente\tao calculo aritm�tico desejado!Reinicie o Programa.\n");
   getch();
}
}

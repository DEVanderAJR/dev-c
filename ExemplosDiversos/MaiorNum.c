#include <stdio.h>
int main (){
int esco;
printf ("Digite (1),Se os n�meros forem REAIS.\nDigite (2),Se os n�meros forem INTEIROS.\n");
scanf ("%d",&esco);
      if (esco==1){
      float x,y,z;
      printf ("Informe o primeiro n�mero:\n");
      scanf  ("%f",&x);
      printf ("Informe o segundo n�mero:\n");
      scanf  ("%f",&y);
      printf ("Informe o terceiro n�mero:\n");
      scanf  ("%f",&z);
      if ((x>y)&&(x>z)){
	printf ("O n�mero maior ser�:%f",x);
	}
	else if ((y>x)&&(y>z)){
	printf ("O n�mero maior ser�:%f",y);
	}
    else if ((z>x)&&(z>y)){
	printf ("O n�mero maior ser� :%f",z);
    }
}
	else if (esco==2){
     int x,y,z;    
     printf ("Informe o primeiro n�mero:\n");
      scanf  ("%d",&x);
      printf ("Informe o segundo n�mero:\n");
      scanf  ("%d",&y);
      printf ("Informe o terceiro n�mero:\n");
      scanf  ("%d",&z);
	if ((x>y)&&(x>z)){
	printf ("O n�mero maior ser�:%d",x);
	}
	else if ((y>x)&&(y>z)){
	printf ("O n�mero maior ser�:%d",y);
	}
    else if ((z>x)&&(z>y)){
	printf ("O n�mero maior ser� :%d",z);
}
}
    getch();
	getch();
	}
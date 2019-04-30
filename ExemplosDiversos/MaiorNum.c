#include <stdio.h>
int main (){
int esco;
printf ("Digite (1),Se os números forem REAIS.\nDigite (2),Se os números forem INTEIROS.\n");
scanf ("%d",&esco);
      if (esco==1){
      float x,y,z;
      printf ("Informe o primeiro número:\n");
      scanf  ("%f",&x);
      printf ("Informe o segundo número:\n");
      scanf  ("%f",&y);
      printf ("Informe o terceiro número:\n");
      scanf  ("%f",&z);
      if ((x>y)&&(x>z)){
	printf ("O número maior será:%f",x);
	}
	else if ((y>x)&&(y>z)){
	printf ("O número maior será:%f",y);
	}
    else if ((z>x)&&(z>y)){
	printf ("O número maior será :%f",z);
    }
}
	else if (esco==2){
     int x,y,z;    
     printf ("Informe o primeiro número:\n");
      scanf  ("%d",&x);
      printf ("Informe o segundo número:\n");
      scanf  ("%d",&y);
      printf ("Informe o terceiro número:\n");
      scanf  ("%d",&z);
	if ((x>y)&&(x>z)){
	printf ("O número maior será:%d",x);
	}
	else if ((y>x)&&(y>z)){
	printf ("O número maior será:%d",y);
	}
    else if ((z>x)&&(z>y)){
	printf ("O número maior será :%d",z);
}
}
    getch();
	getch();
	}
#include <stdio.h>
   void main (){
               int no1,no2;
               float no3,no4;
               printf ("Informe a Primeira nota:\a\n");
               scanf  ("%d",&no1);
               printf ("Imforme a Segunda nota:\a\n");
               scanf  ("%d",&no2);
               printf ("Imforme a Terceira nota:\a\n");
               scanf  ("%f",&no3);
               printf ("Informe a Quarta nota:\a\n");
               scanf  ("%f",&no4);
               float mediapond;
               mediapond=(no1*5 + no2*3 + no3*2 + no4*10)/20;
               printf ("A media ponderada sera:%1.3f",mediapond);
               getch();
          }

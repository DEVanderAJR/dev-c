#include <stdio.h>
#include <conio.h>
int main()
{
     int x1,x2,y1,y2,teste=0,cont=0,qm,i,x,y; 
     do{ 
printf (" O programa ira calcular a quantidade de meteoros!!");
printf ("\n Primeiramente informe o tamanho do territorio,\nSendo Parte Superior,digite X1:\n");
       scanf ("%d",&x1);
printf ("\n seguidamente informe o Y1:\n");
       scanf ("%d",&y1);
printf ("\n\nOk!!!\n\n");
printf ("\n Agora informe a parte Inferior, sendo X2:\n");
       scanf ("%d",&x2);
printf ("\n Agora informe Y2:\n");       
       scanf ("%d",&y2);
printf ("\n\nOk!!!\n\n");
printf ("\n Informe agora a Quantidade de Meteoros:\n");
       scanf ("%d",&qm);
printf ("\n\nOK!!!\n\n Press Enter.\n");
}
  while (x1!=0 || x2!=0 || y1!=0 || y2!=0){
printf ("\n Indique as coodernadas do Meteoro.\n Primeiramente digite X:\n");
      scanf ("%d",&x);
printf ("\n Indique agora Y:\n");
       scanf ("%d",&y);
printf ("\n As coodernadas digitas foram (%d,%d)\n",x,y);  
            for (i=0;i<=qm;i++)              
                                if ((x>=x1,x<=x2)&&(y>=y1,y<=y2));
                           cont++;
                           printf ("\nTeste:%d\n \nMeteoros caidos:%d\n\n Quantos acertaram o territorio:%d\n\n",++teste,qm,cont);       
}
cont=0;
}
                         
            

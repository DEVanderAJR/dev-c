//Programa para treino de fun�oes...
//Destinado a criar fun�oes com as opera�oes basicas de aritm�tica...quando as mesmas solicitadas...
//Desenvolvedor do Software...:Vanderlei 
//Data destinada para a realiza��o do mesmo: 14/09/09...
//Professor_do_Requerimento_do_software_: Professor Jeferson.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>

//Declara��o do Prot�tipo da fun��o calc...
double funcao_calc(double);
//Fim da declara��o...
//Fun��o para somar dois n�meros...
double funcao_soma(double numer1){
	double numer2=0,soma=0;
	scanf("%lf",&numer2);
	soma=numer1+numer2;
	numer1=soma;
    return soma;
}
//Fun��o para subtrair dois n�meros...
double funcao_subtracao(double numer1){
	double numer2=0,subtr=0;
	scanf("%lf",&numer2);
	subtr=numer1-numer2;
	return subtr;
}
//Fun��es para multiplicar dois n�meros...
double funcao_multi(double numer1){
	double numer2=0,multi=0;
	scanf("%lf",&numer2);
	multi=numer1*numer2;
	return multi;
}
//Fun��o para dividir dois n�meros...
double funcao_divi(double numer1){
	double numer2=0, divi=0;
	scanf("%lf",&numer2);
	    while(numer2==0){//Neglig�ncia! caso o usu�rio tente dividir algum algorismo por 0;;;
        system("cls");system("color c");
		printf("\n\n\t\a\a...:...Error!...:...\n\n\t\tNao Possivel Dividir por Zero!!\n\t\t...:...Digite Novamente..:..\n\n");
    	scanf("%lf",&numer2);
	}
	system("color 78");
	divi=numer1/numer2;
	return divi;
}
//Fun��o para Potencia de dois numeros...
double funcao_potencia(double numer1){
	int numer2=0;
    double potencia=1;
	scanf("%d",&numer2);
       	for(int x=0;x<numer2;x++){
        potencia=potencia*numer1;
       }
       return potencia;
 }
//Fun��o para Calcular RAdicia��o
double funcao_radiciacao(double numer1){
       int numer2=0;
       double radiciacao=0;
       scanf("%d",&numer2);
       for(int x=0;x<numer2;x++){
       radiciacao=sqrt(numer1);
       printf("\n\t...:..Numero Acumulado=%0.1lf || Radiciacao=%0.1lf",numer1,radiciacao);
       numer1=radiciacao;     
       }      
       //radiciacao=pow(numer1,1/numer2);
       getch();
       return radiciacao;
}       
//Fun�ao para gerar uma reta de caracteres...
int linha(int q){
	int cont=0,i=0;
	for(cont=0;cont<=q;cont++)
    {printf("\xdb");}
}

//Fun��o Menu...(mostra as op��es disponiveis no programa);
void funcao_menu(){
	char escolha;
	
	system("cls");
    system("title VALKOMMEN TILL CALCULATOR-ReGouGaR - Vanderlei");
	system("color 78");
    printf("\t%c%c",201,187);
	linha(37);
	printf("\n\t\xDB||VALKOMMEN TILL CALCULATOR-ReGouGaR||\xDB\n\t",201,187);
	linha(37);
	printf("%c%c",200,188);
	printf("\n\n\t~> Digite O Numero E Escolha o Operador!:\n\n\t\%c Pressione .:. (+) Para Somar->\n\t%c Pressione .:. (-) Para Subtrair-> \n\t%c Pressione .:. (/) Para Dividir-> \n\t%c Pressione .:. (*) Para Multiplicar-> \n\t%c Pressione .:. (P) Para Potencia->\n\t%c Pressione .:. (=) Para Resultado->\n\t\%c Pressione .:. (?) Para Informacoes->\n\t%c Pressione .:. (R) Para Radiciacao ->\n\t%c Pressione .:. (@) Para -> Exit <-\n",245,245,245,245,245,245,245,245,245);
	
 }
//Fun��o Que demonstra as informa��es...e op��es do software...
double funcao_informacao(double numer1){
                    char decisao;                     
                    system("cls");                   
                    printf("\n\n\t...:...Bem Vindo as Informacoes...:...\n\n");
                    printf("\n\n\t...:...Faca uma escolha...:...\n\n\t\%c Pressione .:. (?) Para Help-> \n\t\%c Pressione .:. (A) Para About->\n\t%c Pressione .:. (#) Para Menu->",245,245,245);
                    decisao=getche();
                    if(decisao=='?'){
                                     system("cls");system("color 8a");printf("\n\n\tBEM VINDO AO MODO HELP(?):\n\n\t O Modo De Utilizacao eh simples:\n\n\tBasta que voce usuario digite primeirametne\n o numero que deseja fazer o calculo!\n\t Pos pressionado escolha um operador aritmetico....\n\t\t...:...(+ - * / p r)...:...\n...correspondente!\n\tQuando julgar, saber o resultado pressione '='\n\tO Contador ser� zerado e voce sera indagado a digitar um novo numero!.\n\n\t\t.....:....Grato O Regougar.....:......");
                                     system("pause>>null");system("color 78");
                                     system("cls");printf("\n\n\n\t...:..O Numero Anterior Acumulado eh: %0.1lf ...:...\n\n\t Escolha o Operador agora:",numer1);
                                     funcao_calc(numer1);
                                     }   
                    else if(tolower(decisao)=='a'){
                                      system("cls");system("color 8f");
                                      printf("\n\n\tBEM VINDO AO ABOUT:\n\n\tSOFTWARE NAME: ||CALCULATOR - O REGOUGAR||\n\n\tCREATED: ||BY VANDERLEI JUNIOR - O REGOUGAR||\n\n\tE-MAIL: oregougardeumpensamento@hotmail.com\n\n\tBLOG: oregougardeumpensamento.blogspot.com \n\n\n\t(C) Copyright 2009_2009 Vanderlei A. Junior, O REGOUGAR ODE Ltda\n\n\t\t......:.....All Rights Reserved.....:.....");
                                      system("pause>>null");system("color 78");system("cls");
                                      printf("\n\n\n\t...:..O Numero Anterior Acumulado eh: %0.1lf ...:...\n\n\t Escolha o Operador agora:",numer1);
                                      funcao_calc(numer1);
                                      }
                    else if (decisao=='#'){
                                       system("cls");system("color 7f");
                                       printf("\n\n\t~> Escolha o Operador!:\n\n\t\%c Pressione .:. (+) Para Somar->\n\t%c Pressione .:. (-) Para Subtrair-> \n\t%c Pressione .:. (/) Para Dividir-> \n\t%c Pressione .:. (*) Para Multiplicar-> \n\t%c Pressione .:. (P) Para Potencia->\n\t%c Pressione .:. (=) Para Resultado->\n\t\%c Pressione .:. (?) Para Informacoes->\n\t\%c Pressione .:. (R) Para Radiciacao->\n\t%c Pressione .:. (@) Para -> Exit <-\n",245,245,245,245,245,245,245,245,245);
                                       system("pause>>null");system("color 78");
                                       funcao_calc(numer1);
                                       }
                    else if(decisao!='?'|| tolower(decisao)!='a'||decisao!='#'){
                                      system("cls");system("color c");printf("\n\n\n\n\n\n\n\n\t...:..Caracter Digitado Erroneamente...:...\n\t...:...!!Opcao errada!!...:..");
                                      system("pause>>null");system("cls");system("color 78");
                                      printf("\n\n\n\t...:..O Numero Anterior Acumulado eh: %0.1lf ...:...\n\n\t Escolha o Operador agora:",numer1);
                                      funcao_calc(numer1);
                                      }
}
//Fun��o para SAIR Finalizar o programa..
void funcao_sair(){
                     system("cls");printf("\n\n\n\t...:...Closing...:...\n\n\t\n...:...Press Enter...:...");system("pause>>null");
}

//Fun��o Que acumula os resultados e os calcula quando o usu�rio julgar necess�rio...	
double funcao_calc(double resultado){
                     
	double numer1;
	char escolha;
	printf("\n\nOperador? \n");//Pede ao usu�rio para inserir um operador aritmetico...(*-+/pr)...
	escolha=getche();
                switch(escolha){//Ser� executado a opera��o equivalente...ao operador aritmetico escolhido.... ex: soma=+;subtra��o=-;...por diante...
				case '+'://Somar caso seja pressionado '+'...
                    system("cls");printf("\n\n\t...:...(+)...:...\n\n");
					printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",resultado);
				    resultado=funcao_soma(resultado);
				    printf("\n\n\t...:...O Resultado eh:...:...%0.1lf", resultado);
                    printf ("\n\nOperador? \n");
                    escolha=getche();				
				                         if (escolha=='='){//MOSTRA O RESULTADO..
                                          system("cls");
                                          printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                                          scanf("%lf",&numer1);                     
                                          resultado=funcao_calc(numer1);
                                          resultado=0;
                                          break;
                                          }
                                          else {//CONTINUA CALCULANDO...
                                          resultado=funcao_calc(resultado);   
                                          break;
                                          }     
					break;
				case '-'://Subtrair caso seja pressionado '-'...
					system("cls");printf("\n\n\t...:...(-)...:...\n\n");
			    	printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",resultado);
                    resultado=funcao_subtracao(resultado);
			        printf("\n\n\t...:...O Resultado eh:...:...%0.1lf ", resultado);
                    printf("\n\nOperador? \n");
                    escolha=getche();				
				                       	  if (escolha=='='){
                                           system("cls");
                                           printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                                           scanf("%lf",&numer1);                     
                                           resultado=funcao_calc(numer1);
                                           resultado=0;
                                           break;
                                           }
                                           else {
                                           resultado=funcao_calc(resultado);   
                                           break;
                                           }
					break;
			    case'*'://Multiplicar caso seja pressionado '*'...
                        system("cls");printf("\n\n\t...:...(*)...:...\n\n");
                        printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",resultado);
                        resultado=funcao_multi(resultado);
                        printf("\n\n\t...:...O Resultado eh:...:...%0.1lf ",resultado);
                        printf("\n\nOperador? \n");
                        escolha=getche();
                                          if (escolha=='='){
                                           system("cls");
                                           printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                                           scanf("%lf",&numer1);                     
                                           resultado=funcao_calc(numer1);
                                           resultado=0;
                                           break;
                                          }
                                          else{
                                          resultado=funcao_calc(resultado);
                                          break;
                                          }
                        break;
                case'/'://dividir caso seja pressionado'/'...
                        system("cls");printf("\n\n\t...:...(/)...:...\n\n");
                        printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",resultado);
                        resultado=funcao_divi(resultado);
                        printf("\n\n\t...:...O Resultado eh:...:...%0.1lf ",resultado);
                        printf("\n\nOperador? \n");
                        escolha=getche();
                                          if (escolha=='='){
                                           system("cls");
                                           printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                                           scanf("%lf",&numer1);                     
                                           resultado=funcao_calc(numer1);
                                           resultado=0;
                                           break;
                                          }
                                          else{
                                          funcao_calc(resultado);
                                          break;
                                          }
                        break;                        
                case'p'://A potencia de um n�mero caso seja pressionado o caracter 'p'...
                        system("cls");printf("\n\n\t...:...(P)...:...\n\n");
                        printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",resultado);
                        resultado=funcao_potencia(resultado);
                        printf("\n\n\t...:...O Resultado eh:...:...%0.1lf ",resultado);
                        printf("\n\nOperador? \n");
                        escolha=getche();
                                          if (escolha=='='){
                                           system("cls");
                                           printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                                           scanf("%lf",&numer1);                     
                                           resultado=funcao_calc(numer1);
                                           resultado=0;
                                           break;
                                          }
                                          else{
                                          resultado=funcao_calc(resultado);
                                          break;
                                          }
                        break;                  
                case '='://Para t�rmino do calculo...
                     system("cls");
                     resultado =0;
                     printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                     scanf("%lf",&numer1);                     
                     resultado=funcao_calc(numer1);
                     break;
                case'?':
                       funcao_informacao(resultado);//Chama A fun��o Para informa��es...quando pressionado '?'....
                     break;
                case 'r':
                        system("cls");printf("\n\n\t...:...(R)...:...\n\n");
                        printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",resultado);
                        resultado=funcao_radiciacao(resultado);
                        printf("\n\n\t...:...O Resultado eh:...:...%0.1lf ",resultado);
                        printf("\n\nOperador? \n");
                        escolha=getche();
                                          if (escolha=='='){
                                          system("cls");
                                           printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                                           scanf("%lf",&numer1);                     
                                           resultado=funcao_calc(numer1);
                                           resultado=0;
                                           break;
                                          }
                                          else{
                                          resultado=funcao_calc(resultado);
                                          break;
                                          }
                        break;                  
                     
                case '@'://para sair do programa...
                     funcao_sair();//Chama a Fun��o Para Finalizar o programa...
                     break;
                default :
                     system("cls");system("color c");//Quando n�o se escolhe nenhuma das op��es desejas...Assume um alerta!
                     printf("\n\n\t\a\a>>>Nenhum Operador Selecionado Corretamente<<<<\n\n\t\t>>>Digite Novamente o Operador<<<\n\n");
                     system("pause>>null");system("color 78");
                     funcao_calc(resultado);
                     break;
               }
}
	
	
 int main(){//Fun��o main() chama todas as outras fun��es realizadas anteriormente...
		double resultado=0,numer1=0;
		char escolha;
		
            funcao_menu();//chama a fun��o menu...
		    printf("\n\n\tDigite um Numero:\n\n");
			scanf("%lf",&numer1);     		
			printf("\n\nOperador?");//Realiza a opera��o segundo o desejo do usu�rio...
		    escolha=getche();
          
            	switch(escolha){//escolha...dos operadores...
				case '+':
				    printf("\n\n\t...:...(+)...:...\n\n");
                    printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",numer1);
                   	resultado=funcao_soma(numer1);
					printf("\n\nResultado ..%0.1lf ..\n\n",resultado);
					resultado=funcao_calc(resultado);//chama a fun��o_calc! Ela que faz acumular os valores das igualdade(=)...
					break;                           //para que em um desejo p�s...possa ser calculada novamente!
					
				case '-':
				    printf("\n\n\t...:...(-)...:...\n\n");
                    printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",numer1);
                    resultado=funcao_subtracao(numer1);
					printf("\n\nResultado .. %0.1lf ..\n\n",resultado);
					resultado=funcao_calc(resultado);
					break;
					
	            case'*':
                      printf("\n\n\t...:...(*)...:...\n\n");
                      printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",numer1);
                      resultado=funcao_multi(numer1);
                      printf("\n\nResultado.. %0.1lf .. \n\n",resultado);
                      resultado=funcao_calc(resultado);
                      break;
                      
                case'/':
                     printf("\n\n\t...:...(/)...:...\n\n");
                     printf("\n\n\t...:...O Numero Anterior Acumulado: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",numer1);
                     resultado=funcao_divi(numer1);
                     printf("\n\n Resultado .. %0.1lf .. \n\n",resultado);
                     resultado=funcao_calc(resultado);
                     break;
                     
                case'p':
                     printf("\n\n\t...:...(P)...:...\n\n");
                     printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",numer1);
                     resultado=funcao_potencia(numer1);
                     printf("\n\nResultado .. %0.1lf .. \n\n",resultado);
                     resultado=funcao_calc(resultado);
                     break;
                     
                 case '=':
                     system("cls");
                     resultado=0;
                     printf("\n\n\t...:...O Resultado eh:...:...%0.1lf \n\n\t...:...Digite um Numero...:...", resultado);                    
                     scanf("%lf",&numer1);                     
                     resultado=funcao_calc(numer1);
                     break;
                 case '?':
                     funcao_informacao(numer1);//chama a fun��o Informa��o para O Estudo Pr�vio dos operadores para serem usados..
                     break;
                 case 'r':
                     printf("\n\n\t...:...(R)...:...\n\n");
                     printf("\n\n\t...:...O Numero Anterior Acumulado...:...ehh: .. %0.1lf ..\n\n\t...:...Digite O Proximo Numero...:...\n",numer1);
                     resultado=funcao_radiciacao(numer1);
                     printf("\n\nResultado .. %0.1lf .. \n\n",resultado);
                     resultado=funcao_calc(resultado);
                     break;
                case '@'://para sair do programa...
                     funcao_sair();
                     break;
                default :system("cls");system("color c");
                     printf("\n\n\t\a\a>>>Nenhum Operador Selecionado Corretamente<<<<\n\n\t\t>>>Digite Novamente o Operador<<<\n\n");
                     system("pause>>null");system("color 78");
                     funcao_calc(numer1);
                     break;
        	}
}

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
int cont = 0;
int op = -1;
float valorMedido;
float calAlim;
float taxaReal;
float doseIns;
void digitarMedidas();
void verificarMedidas();
void verificarIMC();
void mensagemNome();
void mensagemMenu();
void mensagemErro();
void mensagemSair();
void mensagemImc();
void mensagemAlerta();
void mensagemAlertaImcAlto();
double calcularIsulina(float valorMedido, float calAlim, float doseIns);
   int main(){
	   	setlocale(LC_ALL,"Portuguese");	 
        do{
      	mensagemNome();
      	mensagemMenu();
      	scanf("%d",&op);
            switch(op){
          	case 1:
            digitarMedidas();
			break;
             	case 2:
              verificarMedidas();
             	break;
             	   	default:
             	 		mensagemNome();	
             	        if(op == 0){
						  	mensagemSair();  
					        	}
					         	if(op != 0){
					            	mensagemErro();
				                }
                             	break;
           }
          
	    }while(op != 0);
         return 0;
    }
    void digitarMedidas(){
    	mensagemNome();             
        printf("\n           DIGITE O VALOR AFERIDO : ");
        scanf("%f",&valorMedido);
        fflush(stdin);
       	printf("\n           DIGITE O VALOR DA CALORIA DOS ALIMENTOS : ");
        scanf("%f",&calAlim);
        mensagemNome();  
         float valorReal = valorMedido - 100;
		 float calReal = (calAlim + valorReal) / 75;
		 
         doseIns = calReal + valorReal;
         
	printf("\n          Aplicar : %.2f ML de insulina!",calReal);
		
            //  return(doseIns);
              
                 printf("\n\n\n          ");
                system("pause");
        
	}	

	void verificarMedidas(){
		mensagemNome();
		
		if(cont == 1){
	
	         	printf("\n          OL� !!! \n");
	        	printf("\n          Aplicar : %.1f ML de insulina!",doseIns);
	        	
	        //	printf("\n          valor dx : %.1f ML de insulina!",dx);
	        	
	        }else{
	        	printf("\n          Primeiro dever� realizar a aferi��o !!! ");	
			}
            
	    printf("\n\n\n          ");
	    system("pause");
	}
    void mensagemNome(){ //Mensagens do Sistema
        system("color 8F");
  	    system("cls");
  	    printf("\n"); 
	    printf("          +================================================+\n");
	    printf("          |                 MARIA FERNANDA                 |\n");
	    printf("          |                DOSES MINISTRADA                |\n");
	    printf("          |                                                |\n");
	    printf("          +================================================+\n");  
	}
	void mensagemMenu(){
        printf("          +================================================+\n");
	    printf("          |                                                |\n");
        printf("          |       1 -      DIGITAR VALORES                 |\n");
       	printf("          |                                                |\n");
      	printf("          |                                                |\n");
       	printf("          |       0 -      SAIR DO SISTEMA!                |\n");
       	printf("          |                                                |\n");
       	printf("          +================================================+\n");
       	printf("\n\n                    Entre com a op��o desejada! ");      
    }
    void mensagemErro(){
   	    system("color 4e");
	    printf("          +================================================+\n");
	    printf("          |                MENSAGEM ERRO!!!                |\n");
	    printf("          |                                                |\n");
	    printf("          |                OP��O INV�LIDA.                 |\n");
	    printf("          +================================================+\n");
	    printf("\n          ");  
		system("pause");	
	}
   void mensagemSair(){
   		system("color fa");
	    printf("          +================================================+\n");
	    printf("          |                   MENSAGEM!!!                  |\n");
	    printf("          |                                                |\n");
	    printf("          |               SAINDO DO SISTEMA.               |\n");
	    printf("          +================================================+\n");
	    printf("\n          ");  
		system("pause");	
	}

//Conversor unidades de comprimento
#include <stdio.h>

void menu(void);
void metro_Centimetro(void);
void metro_Milimetro(void);
void centimetro_Metro(void);
void centimetro_Milimetro(void);
void milimetro_Metro(void);
void milimetro_Centimetro(void);

int main(){
    menu();
return 0;
}

void menu(){
     int numero;
     printf("Escolha o tipo de convers�o que quer realizar:\n1.Metro->Cent�metro\n2.Metro->Mil�metro\n3.Cent�metro->Metro\n4.Cent�metro->Mil�metro\n5.Mil�metro->Metro\n6.Mil�metro->Cent�metro\n7.SAIR\n");
     scanf("%d",&numero);
     switch(numero){
       case 1:
          metro_Centimetro();
          break;
       case 2:
          metro_Milimetro();
          break;
       case 3:
          centimetro_Metro();
          break;
       case 4:
          centimetro_Milimetro();
          break;
       case 5:
          milimetro_Metro();
          break;
       case 6:
          milimetro_Centimetro();
          break;
       case 7:
          printf("Encerrando...");
          break;
       default:
          printf("N�mero inv�lido");
     }
return;
}

void metro_Centimetro(){
     float unidade;
     printf("Digite o valor em m(metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*100;
     printf("O valor em metros:%.2f em cent�metros �:%.2f",unidade,convertido);
return;
}

void metro_Milimetro(){
     float unidade;
     printf("Digite o valor em m(metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000;
     printf("O valor em metros:%.2f em mil�metros �:%.2f",unidade,convertido);
return;
}

void centimetro_Metro(){
     float unidade;
     printf("Digite o valor em cm(cent�metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/100;
     printf("O valor em cent�metros:%.2f em metros �:%.2f",unidade,convertido);
return;
}

void centimetro_Milimetro(){
     float unidade;
     printf("Digite o valor em cm(cent�metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*10;
     printf("O valor em cent�metros:%.2f em mil�metros �:%.2f",unidade,convertido);
return;
}

void milimetro_Metro(){
     float unidade;
     printf("Digite o valor em mm(mil�metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000;
     printf("O valor em mil�metros:%.2f em metros �:%.2f",unidade,convertido);
return;
}

void milimetro_Centimetro(){
     float unidade;
     printf("Digite o valor em mm(mil�metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/10;
     printf("O valor em mil�metros:%.2f em cent�metros �:%.2f",unidade,convertido);
return;
}



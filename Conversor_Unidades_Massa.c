//Conversor unidades de massa
#include <stdio.h>

void menu(void);
void kg_G(void);
void kg_Ton(void);
void g_Kg(void);
void g_Ton(void);
void ton_Kg(void);
void ton_G(void);

int main(){
    menu();
return 0;
}

void menu(){
     int numero;
     printf("Escolha o tipo de convers�o que quer realizar:\n1.quilograma->grama\n2.quilograma->tonelada\n3.grama->quilograma\n4.grama->tonelada\n5.tonelada->quilograma\n6.tonelada->grama\n7.SAIR\n");
     scanf("%d",&numero);
     switch(numero){
       case 1:
          kg_G();
          break;
       case 2:
          kg_Ton();
          break;
       case 3:
          g_Kg();
          break;
       case 4:
          g_Ton();
          break;
       case 5:
          ton_Kg();
          break;
       case 6:
          ton_G();
          break;
       case 7:
          printf("Encerrando...");
          break;
       default:
          printf("N�mero inv�lido");
     }
return;
}

void kg_G(){
     float unidade;
     printf("Digite o valor em kg(quilograma):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000;
     printf("O valor em kg:%.2f em g �:%.2f",unidade,convertido);
return;
}

void kg_Ton(){
     float unidade;
     printf("Digite o valor em kg(quilograma):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000;
     printf("O valor em kg:%.2f em toneladas �:%.2f",unidade,convertido);
return;
}

void g_Kg(){
     float unidade;
     printf("Digite o valor em g(grama):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000;
     printf("O valor em g:%.2f em kg �:%.2f",unidade,convertido);
return;
}

void g_Ton(){
     float unidade;
     printf("Digite o valor em g(grama):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000000;
     printf("O valor em g:%.2f em toneladas �:%.2f",unidade,convertido);
return;
}

void ton_Kg(){
     float unidade;
     printf("Digite o valor em ton(toneladas):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000;
     printf("O valor em toneladas:%.2f em kg �:%.2f",unidade,convertido);
return;
}

void ton_G(){
     float unidade;
     printf("Digite o valor em ton(toneladas):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000000;
     printf("O valor em toneladas:%.2f em g �:%.2f",unidade,convertido);
return;
}




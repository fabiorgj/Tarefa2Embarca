#include <stdio.h> 
void menu(void);
void metro_Centimetro(void);
void metro_Milimetro(void);
void centimetro_Metro(void);
void centimetro_Milimetro(void);
void milimetro_Metro(void);
void milimetro_Centimetro(void);
void menu2(void);
void kg_G(void);
void kg_Ton(void);
void g_Kg(void);
void g_Ton(void);
void ton_Kg(void);
void ton_G(void);
void converterVelocidade();
void converterComprimento();
void converterMassa(void);
void converterVolume();
void converterPotencia() {}
void converterArea() {}
void converterTempo() {}

int main() {
    int opcao;

    printf("Escolha uma opção de conversor de unidade:\n");
    printf("1. Comprimento (metros para quilômetros)\n");
    printf("2. Massa (gramas para quilogramas)\n");
    printf("3. Volume (litros para mililitros)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            converterComprimento();
            break;
        case 2:
            converterMassa();
            break;
        case 3:
            converterVolume();
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}

//converter Comprimento
void converterComprimento() {
    menu();
}

void menu(){
     int numero;
     printf("Escolha o tipo de conversão que quer realizar:\n1.Metro->Centímetro\n2.Metro->Milímetro\n3.Centímetro->Metro\n4.Centímetro->Milímetro\n5.Milímetro->Metro\n6.Milímetro->Centímetro\n7.SAIR\n");
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
          printf("Número inválido");
     }
return;
}

void metro_Centimetro(){
     float unidade;
     printf("Digite o valor em m(metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*100;
     printf("O valor em metros:%.2f em centímetros é:%.2f",unidade,convertido);
return;
}

void metro_Milimetro(){
     float unidade;
     printf("Digite o valor em m(metro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000;
     printf("O valor em metros:%.2f em milímetros é:%.2f",unidade,convertido);
return;
}

void centimetro_Metro(){
     float unidade;
     printf("Digite o valor em cm(centímetro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/100;
     printf("O valor em centímetros:%.2f em metros é:%.2f",unidade,convertido);
return;
}

void centimetro_Milimetro(){
     float unidade;
     printf("Digite o valor em cm(centímetro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*10;
     printf("O valor em centímetros:%.2f em milímetros é:%.2f",unidade,convertido);
return;
}

void milimetro_Metro(){
     float unidade;
     printf("Digite o valor em mm(milímetro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000;
     printf("O valor em milímetros:%.2f em metros é:%.2f",unidade,convertido);
return;
}

void milimetro_Centimetro(){
     float unidade;
     printf("Digite o valor em mm(milímetro):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/10;
     printf("O valor em milímetros:%.2f em centímetros é:%.2f",unidade,convertido);
return;
}


//converter Massa
void converterMassa() {
    menu2();
}

void menu2(){
     int numero;
     printf("Escolha o tipo de conversão que quer realizar:\n1.quilograma->grama\n2.quilograma->tonelada\n3.grama->quilograma\n4.grama->tonelada\n5.tonelada->quilograma\n6.tonelada->grama\n7.SAIR\n");
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
          printf("Número inválido");
     }
return;
}

void kg_G(){
     float unidade;
     printf("Digite o valor em kg(quilograma):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000;
     printf("O valor em kg:%.2f em g é:%.2f",unidade,convertido);
return;
}

void kg_Ton(){
     float unidade;
     printf("Digite o valor em kg(quilograma):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000;
     printf("O valor em kg:%.2f em toneladas é:%.2f",unidade,convertido);
return;
}

void g_Kg(){
     float unidade;
     printf("Digite o valor em g(grama):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000;
     printf("O valor em g:%.2f em kg é:%.2f",unidade,convertido);
return;
}

void g_Ton(){
     float unidade;
     printf("Digite o valor em g(grama):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade/1000000;
     printf("O valor em g:%.2f em toneladas é:%.2f",unidade,convertido);
return;
}

void ton_Kg(){
     float unidade;
     printf("Digite o valor em ton(toneladas):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000;
     printf("O valor em toneladas:%.2f em kg é:%.2f",unidade,convertido);
return;
}

void ton_G(){
     float unidade;
     printf("Digite o valor em ton(toneladas):\n");
     scanf("%f",&unidade);
     float convertido;
     convertido=unidade*1000000;
     printf("O valor em toneladas:%.2f em g é:%.2f",unidade,convertido);
return;
}

//converter Velocidade
void converterVelocidade() {
    int opcao;
    float ms, kmh, mph;
    printf("Escolha qual conversao deseja fazer\n");
    printf("1- m/s para km/h \n");
    printf("2- m/s para mph \n");
    printf("3- km/h para m/s \n");
    printf("4- km/h para mph \n");
    printf("5- mph para m/s  \n");
    printf("6- mph para km/h \n");
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
        printf("Insira o valor\n");
        scanf("%f", &ms);
        kmh = ms*3.6;
        printf("%.4f m/s equivale a %.4f km/h \n", ms, kmh);
        break;
    case 2:
         printf("Insira o valor\n");
        scanf("%f", &ms);
        mph = ms*2.237;
        printf("%.4f m/s equivale a %.4f mph \n", ms, mph);
        break;

    case 3:
        printf("Insira o valor\n");
        scanf("%f", &kmh);
        ms = kmh/3.6;
        printf("%.4f km/h equivale a %.4f m/s \n", kmh, ms);
        break;    
    
    case 4:
        printf("Insira o valor\n");
        scanf("%f", &kmh);
        mph = kmh/1.609;
        printf("%.4f km/h equivale a %.4f mph \n", kmh, mph);
        break;
    case 5:
       printf("Insira o valor\n");
        scanf("%f", &mph);
        ms = mph/2.237;
        printf("%.4f mph equivale a %.4f m/s \n", mph, ms);
        break;
    case 6:
        printf("Insira o valor\n");
        scanf("%f", &mph);
        kmh = mph*1.609;
        printf("%.4f mph equivale a %.4f km/h \n", mph, kmh);
        break;
    default:
    printf("Opção inválida\n");
        break;
    }
}


//converter Volume
void converterVolume() {
    float litros, mililitros;
    printf("Digite o valor em litros: ");
    scanf("%f", &litros);
    mililitros = litros * 1000;
    printf("%.2f litros equivalem a %.2f mililitros.\n", litros, mililitros);
}


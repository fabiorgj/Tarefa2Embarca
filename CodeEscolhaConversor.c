#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha o número referente a uma das opções de conversão a seguir:\n");
    printf("1. Comprimento (cm, m, Km)\n");
    printf("2. Massa (gramas, quilogramas, toneladas)\n");
    printf("3. Volume (ml, dl, L)\n");
    printf("4. Temperatura (C, F, K)\n");
    printf("5. Velocidade (km/h, m/s, mph)\n");
    printf("6. Potência (W, KW, Hp)\n");
    printf("7. Área (milimetro quadrado, centimetro quadrado, metro quadrado)\n");
    printf("8. Tempo (segundos, minutos, horas)\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opcao);
    printf("\n \n");

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
        case 4:
            converterTemperatura();
            break;
        case 5:
            converterVelocidade();
            break;
        case 6:
            converterPotencia();
            break;
        case 7:
            converterArea();
            break;
        case 8:
            converterTempo();
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}

//converter Comprimento
void converterComprimento() {
   int opcao;
   float m,mm,cm;
   printf("Escolha qual conversao deseja fazer:\n");
   printf("1- m para cm \n");
   printf("2- m para mm\n");
   printf("3- cm para m\n");
   printf("4- cm para mm\n");
   printf("5- mm para m\n");
   printf("6- mm para cm\n");
   printf("7-SAIR");
   scanf("%d",&opcao);
   switch(opcao){
      case 1:
         float unidade;
         printf("Digite o valor em m(metro):\n");
         scanf("%f",&unidade);
         float convertido;
         convertido=unidade*100;
         printf("O valor em metros:%.2f em cent�metros �:%.2f",unidade,convertido);
         break;

      
      case 2:
         float unidade;
         printf("Digite o valor em m(metro):\n");
         scanf("%f",&unidade);
         float convertido;
         convertido=unidade*1000;
         printf("O valor em metros:%.2f em mil�metros �:%.2f",unidade,convertido);
         break;

      case 3:
        float unidade;
        printf("Digite o valor em cm(cent�metro):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade/100;
        printf("O valor em cent�metros:%.2f em metros �:%.2f",unidade,convertido);
        break;

      case 4:
        float unidade;
        printf("Digite o valor em cm(cent�metro):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade*10;
        printf("O valor em cent�metros:%.2f em mil�metros �:%.2f",unidade,convertido);
        break;

      case 5:
        float unidade;
        printf("Digite o valor em mm(mil�metro):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade/1000;
        printf("O valor em mil�metros:%.2f em metros �:%.2f",unidade,convertido);
        break;

      case 6:
        float unidade;
        printf("Digite o valor em mm(mil�metro):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade/10;
        printf("O valor em mil�metros:%.2f em cent�metros �:%.2f",unidade,convertido);
        break;
      
      case 7:
        printf("ENCERRANDO...");
        break;
      default:
        printf("Opção inválida\n");
        break;
   }
}

//converter Massa
void converterMassa() {
   int opcao;
   float m,mm,cm;
   printf("Escolha qual conversao deseja fazer:\n");
   printf("1- kg para g \n");
   printf("2- kg para tonelada\n");
   printf("3- g para kg\n");
   printf("4- g para tonelada\n");
   printf("5- tonelada para kg\n");
   printf("6- tonelada para g\n");
   printf("7-SAIR");
   scanf("%d",&opcao);
   switch(opcao){
      case 1:
        float unidade;
        printf("Digite o valor em kg(quilograma):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade*1000;
        printf("O valor em kg:%.2f em g �:%.2f",unidade,convertido);
        break;
      
      case 2:
        float unidade;
        printf("Digite o valor em kg(quilograma):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade/1000;
        printf("O valor em kg:%.2f em toneladas �:%.2f",unidade,convertido);
        break;

      case 3:
        float unidade;
        printf("Digite o valor em g(grama):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade/1000;
        printf("O valor em g:%.2f em kg �:%.2f",unidade,convertido);
        break;

      case 4:
        float unidade;
        printf("Digite o valor em g(grama):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade/1000000;
        printf("O valor em g:%.2f em toneladas �:%.2f",unidade,convertido);
        break;

      case 5:
        float unidade;
        printf("Digite o valor em ton(toneladas):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade*1000;
        printf("O valor em toneladas:%.2f em kg �:%.2f",unidade,convertido);
        break;

      case 6:
        float unidade;
        printf("Digite o valor em ton(toneladas):\n");
        scanf("%f",&unidade);
        float convertido;
        convertido=unidade*1000000;
        printf("O valor em toneladas:%.2f em g �:%.2f",unidade,convertido);
        break;

      case 7:
        printf("ENCERRANDO...");
        break;
      default:
        printf("Opção inválida\n");
        break;
   }
}

//converter Volume
void converterVolume() {}

//converter Temperatura
void converterTemperatura() {}

//converter Velocidade;
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
    printf("7-SAIR");
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
   case 7:
        printf("ENCERRANDO...");
        break;
    default:
    printf("Opção inválida\n");
        break;
    }
}

void converterPotencia() {}

void converterArea() {}

void converterTempo() {}


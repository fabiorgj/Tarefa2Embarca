#include <stdio.h>

//converter Potência
void converterPotencia() {}

//converter Volume
void converterVolume() {}

//converter Temperatura
void converterTemperatura() {
    int opcao;
    float temperatura,resultado;
    printf("Escolha qual conversao deseja fazer:\n");
    printf("1- Celsius para Fahrenheit \n");
    printf("2- Fahrenheit para Celsius\n");
    printf("3- Fahrenheit para Kelvin\n");
    printf("4- Kelvin para Fahrenheit\n");
    printf("5- Celsius para Kelvin\n");
    printf("6- Kelvin para Celsius\n");
    printf("7-SAIR\n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            printf("Digite o valor em Celsius:\n");
            scanf("%f",&temperatura);
            resultado = (temperatura * 1.8) + 32;
            printf("O valor em Celsius:%.2f em Fahrenheit �:%.2f",temperatura,resultado);
            break;
        
        case 2:
            printf("Digite o valor em Fahrenheit:\n");
            scanf("%f",&temperatura);
            resultado=(temperatura - 32)/1.8;
            printf("O valor em Fahrenheit:%.2f em Celsius�:%.2f",temperatura,resultado);
            break;

        case 3:
            printf("Digite o valor em Fahrenheit:\n");
            scanf("%f",&temperatura);
            resultado=(temperatura - 32) / 1.8 + 273.15;
            printf("O valor em Fahrenheit:%.2f em Kelvin �:%.2f",temperatura,resultado);
            break;

        case 4:
            printf("Digite o valor em Kelvin:\n");
            scanf("%f",&temperatura);
            resultado=(temperatura - 273.15) * 1.8 + 32;
            printf("O valor em Kelvin:%.2f em Fahrenheit �:%.2f",temperatura,resultado);
            break;

        case 5:
            printf("Digite o valor em Celsius:\n");
            scanf("%f",&temperatura);
            resultado=temperatura + 273.15;
            printf("O valor em Celsius:%.2f em Kelvin �:%.2f",temperatura,resultado);
            break;

        case 6:
            printf("Digite o valor em Kelvin:\n");
            scanf("%f",&temperatura);
            resultado=temperatura - 273.15;
            printf("O valor em Kelvin:%.2f em Celsius �:%.2f",temperatura,resultado);
            break;

        case 7:
            printf("ENCERRANDO...");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}

//converter Comprimento
void converterComprimento() {
   int opcao;
   float m,mm,cm;
   float unidade,convertido;
   printf("Escolha qual conversao deseja fazer:\n");
   printf("1- m para cm \n");
   printf("2- m para mm\n");
   printf("3- cm para m\n");
   printf("4- cm para mm\n");
   printf("5- mm para m\n");
   printf("6- mm para cm\n");
   printf("7-SAIR\n");
   scanf("%d",&opcao);
   switch(opcao){
      case 1:
         printf("Digite o valor em m(metro):\n");
         scanf("%f",&unidade);
         convertido=unidade*100;
         printf("O valor em metros:%.2f em cent�metros �:%.2f",unidade,convertido);
         break;
      
      case 2:
         printf("Digite o valor em m(metro):\n");
         scanf("%f",&unidade);
         convertido=unidade*1000;
         printf("O valor em metros:%.2f em mil�metros �:%.2f",unidade,convertido);
         break;

      case 3:
        printf("Digite o valor em cm(cent�metro):\n");
        scanf("%f",&unidade);
        convertido=unidade/100;
        printf("O valor em cent�metros:%.2f em metros �:%.2f",unidade,convertido);
        break;

      case 4:
        printf("Digite o valor em cm(cent�metro):\n");
        scanf("%f",&unidade);
        convertido=unidade*10;
        printf("O valor em cent�metros:%.2f em mil�metros �:%.2f",unidade,convertido);
        break;

      case 5:
        printf("Digite o valor em mm(mil�metro):\n");
        scanf("%f",&unidade);
        convertido=unidade/1000;
        printf("O valor em mil�metros:%.2f em metros �:%.2f",unidade,convertido);
        break;

      case 6:
        printf("Digite o valor em mm(mil�metro):\n");
        scanf("%f",&unidade);
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
   float unidade,convertido;
   printf("Escolha qual conversao deseja fazer:\n");
   printf("1- kg para g \n");
   printf("2- kg para tonelada\n");
   printf("3- g para kg\n");
   printf("4- g para tonelada\n");
   printf("5- tonelada para kg\n");
   printf("6- tonelada para g\n");
   printf("7-SAIR\n");
   scanf("%d",&opcao);
   switch(opcao){
      case 1:
        printf("Digite o valor em kg(quilograma):\n");
        scanf("%f",&unidade);
        convertido=unidade*1000;
        printf("O valor em kg:%.2f em g �:%.2f",unidade,convertido);
        break;
      
      case 2:
        printf("Digite o valor em kg(quilograma):\n");
        scanf("%f",&unidade);
        convertido=unidade/1000;
        printf("O valor em kg:%.2f em toneladas �:%.2f",unidade,convertido);
        break;

      case 3:
        printf("Digite o valor em g(grama):\n");
        scanf("%f",&unidade);
        convertido=unidade/1000;
        printf("O valor em g:%.2f em kg �:%.2f",unidade,convertido);
        break;

      case 4:
        printf("Digite o valor em g(grama):\n");
        scanf("%f",&unidade);
        convertido=unidade/1000000;
        printf("O valor em g:%.2f em toneladas �:%.2f",unidade,convertido);
        break;

      case 5:
        printf("Digite o valor em ton(toneladas):\n");
        scanf("%f",&unidade);
        convertido=unidade*1000;
        printf("O valor em toneladas:%.2f em kg �:%.2f",unidade,convertido);
        break;

      case 6:
        printf("Digite o valor em ton(toneladas):\n");
        scanf("%f",&unidade);
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
    printf("7-SAIR\n");
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

//converter Área
void converterArea() {
    int opcao;
    float unidade, convertido;

    printf("Escolha qual conversao deseja fazer:\n");
    printf("1- milimetro quadrado para centimetro quadrado \n");
    printf("2- milimetro quadrado para metro quadrado\n");
    printf("3- centimetro quadrado para milimetro quadrado\n");
    printf("4- centimetro quadrado para metro quadrado\n");
    printf("5- metro quadrado para milimetro quadrado\n");
    printf("6- metro quadrado para centimetro quadrado\n");
    printf("7-SAIR\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o valor em mm2 (milimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade / 100;
            printf("O valor em mm2: %.4f em cm2: %.4f\n", unidade, convertido);
            break;

        case 2:
            printf("Digite o valor em mm2 (milimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade / 1000000;
            printf("O valor em mm2: %.4f em m2: %.4f\n", unidade, convertido);
            break;

        case 3:
            printf("Digite o valor em cm2 (centimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade * 100;
            printf("O valor em cm2: %.4f em mm2: %.4f\n", unidade, convertido);
            break;

        case 4:
            printf("Digite o valor em cm2 (centimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade / 10000;
            printf("O valor em cm2: %.4f em m2: %.4f\n", unidade, convertido);
            break;

        case 5:
            printf("Digite o valor em m2 (metro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade * 1000000;
            printf("O valor em m2: %.4f em mm2: %.4f\n", unidade, convertido);
            break;

        case 6:
            printf("Digite o valor em m2 (metro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade * 10000;
            printf("O valor em m2: %.4f em cm2: %.4f\n", unidade, convertido);
            break;

        case 7:
            printf("Obrigado, encerrando...\n");
            break;

        default:
            printf("Opção inválida\n");
            break;
    }
}
//converter Tempo
void converterTempo() {
    int opcao;
    float unidade, convertido;

    printf("Escolha qual conversao deseja fazer:\n");
    printf("1- Segundos para Minutos \n");
    printf("2- Segundos para Horas \n");
    printf("3- Minutos para Segundos \n");
    printf("4- Minutos para Horas \n");
    printf("5- Horas para Segundos \n");
    printf("6- Horas para Minutos \n");
    printf("7-SAIR\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o valor em segundos:\n");
            scanf("%f", &unidade);
            convertido = unidade / 60;
            printf("%.2f segundos equivalem a %.2f minutos\n", unidade, convertido);
            break;

        case 2:
            printf("Digite o valor em segundos:\n");
            scanf("%f", &unidade);
            convertido = unidade / 3600;
            printf("%.2f segundos equivalem a %.2f horas\n", unidade, convertido);
            break;

        case 3:
            printf("Digite o valor em minutos:\n");
            scanf("%f", &unidade);
            convertido = unidade * 60;
            printf("%.2f minutos equivalem a %.2f segundos\n", unidade, convertido);
            break;

        case 4:
            printf("Digite o valor em minutos:\n");
            scanf("%f", &unidade);
            convertido = unidade / 60;
            printf("%.2f minutos equivalem a %.2f horas\n", unidade, convertido);
            break;

        case 5:
            printf("Digite o valor em horas:\n");
            scanf("%f", &unidade);
            convertido = unidade * 3600;
            printf("%.2f horas equivalem a %.2f segundos\n", unidade, convertido);
            break;

        case 6:
            printf("Digite o valor em horas:\n");
            scanf("%f", &unidade);
            convertido = unidade * 60;
            printf("%.2f horas equivalem a %.2f minutos\n", unidade, convertido);
            break;

        case 7:
            printf("ENCERRANDO...\n");
            break;

        default:
            printf("Opção inválida\n");
            break;
    }
}

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
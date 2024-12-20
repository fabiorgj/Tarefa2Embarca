#include <stdio.h>

void converterComprimento() {}

void converterMassa() {}

void converterVolume() {}

void converterTemperatura() {}

void converterVelocidade() {
    int opcao;
    float ms, kmh, mph;
    printf("Escolha qual conversão deseja fazer\n");
    printf("1- m/s para km/h \n");
    printf("2- m/s para mph \n");
    printf("3- km/h para m/s \n");
    printf("4- km/h para mph \n");
    printf("5- mph para m/s  \n");
    printf("6- mph para km/h \n");
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
        printf("Insira o valor");
        scanf("%f", &ms);
        kmh = ms*3.6;
        printf("%f m/s equivale a %f km/h \n", ms, kmh);
        break;
    case 2:
         printf("Insira o valor");
        scanf("%f", &ms);
        mph = ms*2.237;
        printf("%f m/s equivale a %f mph \n", ms, mph);
        break;

    case 3:
        printf("Insira o valor");
        scanf("%f", &kmh);
        ms = kmh/3.6;
        printf("%f km/h equivale a %f m/s \n", kmh, ms);
        break;    
    
    case 4:
        printf("Insira o valor");
        scanf("%f", &kmh);
        mph = kmh/1.609;
        printf("%f km/h equivale a %f mph \n", kmh, mph);
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    default:
    printf("Opção inválida");
        break;
    }
}

void converterPotencia() {}

void converterArea() {}

void converterTempo() {}

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
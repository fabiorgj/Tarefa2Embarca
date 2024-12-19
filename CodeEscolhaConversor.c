#include <stdio.h>

void converterComprimento() {}

void converterMassa() {}

void converterVolume() {}

void converterTemperatura() {}

void converterVelocidade() {}

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
#include <stdio.h>

void converterComprimento() {
    float metros, quilometros;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    quilometros = metros / 1000;
    printf("%.2f metros equivalem a %.2f quilômetros.\n", metros, quilometros);
}

void converterMassa() {
    float gramas, quilogramas;
    printf("Digite o valor em gramas: ");
    scanf("%f", &gramas);
    quilogramas = gramas / 1000;
    printf("%.2f gramas equivalem a %.2f quilogramas.\n", gramas, quilogramas);
}

void converterVolume() {
    float litros, mililitros;
    printf("Digite o valor em litros: ");
    scanf("%f", &litros);
    mililitros = litros * 1000;
    printf("%.2f litros equivalem a %.2f mililitros.\n", litros, mililitros);
}

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
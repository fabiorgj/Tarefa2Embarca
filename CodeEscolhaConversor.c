// Programa destinado a converter unidades de medida de acordo com a escolha do usuário.

// Autores:

// Fábio Rocha, Francisco Wenerson, Igor de Eça, Kauan Lopes, Larissa Batista,
// Luis Guilherme, Luiz Eduardo, Paolla Giselle

// Embarcatech -  Grupo 1, subgrupo 8

// Tarefa: Depuração e Versionamento

//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// converter Volume
void converterVolume() {}

// converter Potência
void converterPotencia()
{
    int opcao = 0;
    float potencia, resultado;

    while (opcao != 7)
    {
        printf("Escolha qual conversão deseja fazer:\n");
        printf("1 - Watts para Horsepower (HP)\n");
        printf("2 - Horsepower (HP) para Watts\n");
        printf("3 - Watts para BTU/h\n");
        printf("4 - BTU/h para Watts\n");
        printf("5 - Horsepower (HP) para BTU/h\n");
        printf("6 - BTU/h para Horsepower (HP)\n");
        printf("7 - SAIR\n");

        scanf("%d", &opcao);

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 7)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em Watts:\n");
            scanf("%f", &potencia);
            resultado = potencia / 745.7; // 1 HP ≈ 745.7 W
            printf("O valor em Watts: %.2f W em Horsepower é: %.2f HP\n", potencia, resultado);
            continue;

        case 2:
            printf("Digite o valor em Horsepower:\n");
            scanf("%f", &potencia);
            resultado = potencia * 745.7; // 1 HP ≈ 745.7 W
            printf("O valor em Horsepower: %.2f HP em Watts é: %.2f W\n", potencia, resultado);
            continue;

        case 3:
            printf("Digite o valor em Watts:\n");
            scanf("%f", &potencia);
            resultado = potencia * 3.412; // 1 W ≈ 3.412 BTU/h
            printf("O valor em Watts: %.2f W em BTU/h é: %.2f BTU/h\n", potencia, resultado);
            continue;

        case 4:
            printf("Digite o valor em BTU/h:\n");
            scanf("%f", &potencia);
            resultado = potencia / 3.412; // 1 W ≈ 3.412 BTU/h
            printf("O valor em BTU/h: %.2f BTU/h em Watts é: %.2f W\n", potencia, resultado);
            continue;

        case 5:
            printf("Digite o valor em Horsepower:\n");
            scanf("%f", &potencia);
            resultado = potencia * 2544.43; // 1 HP ≈ 2544.43 BTU/h
            printf("O valor em Horsepower: %.2f HP em BTU/h é: %.2f BTU/h\n", potencia, resultado);
            continue;

        case 6:
            printf("Digite o valor em BTU/h:\n");
            scanf("%f", &potencia);
            resultado = potencia / 2544.43; // 1 HP ≈ 2544.43 BTU/h
            printf("O valor em BTU/h: %.2f BTU/h em Horsepower é: %.2f HP\n", potencia, resultado);
            continue;

        case 7:
            printf("ENCERRANDO...\n");
            break;
        }
    }
}

// converter Temperatura
void converterTemperatura()
{
    int opcao = 0;
    float temperatura, resultado;

    while (opcao != 7)
    {
        printf("Escolha qual conversao deseja fazer:\n");
        printf("1- Celsius para Fahrenheit \n");
        printf("2- Fahrenheit para Celsius\n");
        printf("3- Fahrenheit para Kelvin\n");
        printf("4- Kelvin para Fahrenheit\n");
        printf("5- Celsius para Kelvin\n");
        printf("6- Kelvin para Celsius\n");
        printf("7-SAIR\n");

        scanf("%d", &opcao);

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 7)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em Celsius:\n");
            scanf("%f", &temperatura);
            resultado = (temperatura * 1.8) + 32;
            printf("O valor em Celsius:%.2f em Fahrenheit é:%.2f\n", temperatura, resultado);
            continue;

        case 2:
            printf("Digite o valor em Fahrenheit:\n");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) / 1.8;
            printf("O valor em Fahrenheit:%.2f em Celsius é:%.2f\n", temperatura, resultado);
            continue;

        case 3:
            printf("Digite o valor em Fahrenheit:\n");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) / 1.8 + 273.15;
            printf("O valor em Fahrenheit:%.2f em Kelvin é:%.2f\n", temperatura, resultado);
            continue;

        case 4:
            printf("Digite o valor em Kelvin:\n");
            scanf("%f", &temperatura);
            resultado = (temperatura - 273.15) * 1.8 + 32;
            printf("O valor em Kelvin:%.2f em Fahrenheit é:%.2f\n", temperatura, resultado);
            continue;

        case 5:
            printf("Digite o valor em Celsius:\n");
            scanf("%f", &temperatura);
            resultado = temperatura + 273.15;
            printf("O valor em Celsius:%.2f em Kelvin é:%.2f\n", temperatura, resultado);
            continue;

        case 6:
            printf("Digite o valor em Kelvin:\n");
            scanf("%f", &temperatura);
            resultado = temperatura - 273.15;
            printf("O valor em Kelvin:%.2f em Celsius é:%.2f\n", temperatura, resultado);
            continue;

        case 7:
            printf("ENCERRANDO...");

            continue;
        }
    }
}

// converter Comprimento
void converterComprimento()
{
    int opcao = 0;
    float m, mm, cm;
    float unidade, convertido;

    while (opcao != 7)
    {
        printf("Escolha qual conversao deseja fazer:\n");
        printf("1- m para cm \n");
        printf("2- m para mm\n");
        printf("3- cm para m\n");
        printf("4- cm para mm\n");
        printf("5- mm para m\n");
        printf("6- mm para cm\n");
        printf("7-SAIR\n");

        scanf("%d", &opcao);

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 7)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em m(metro):\n");
            scanf("%f", &unidade);
            convertido = unidade * 100;
            printf("O valor em metros:%.2f em centimetros é:%.2f\n", unidade, convertido);
            continue;

        case 2:
            printf("Digite o valor em m(metro):\n");
            scanf("%f", &unidade);
            convertido = unidade * 1000;
            printf("O valor em metros:%.2f em milímetros é:%.2f\n", unidade, convertido);
            continue;

        case 3:
            printf("Digite o valor em cm(centímetro):\n");
            scanf("%f", &unidade);
            convertido = unidade / 100;
            printf("O valor em centímetros:%.2f em metros é:%.2f\n", unidade, convertido);
            continue;

        case 4:
            printf("Digite o valor em cm(centímetro):\n");
            scanf("%f", &unidade);
            convertido = unidade * 10;
            printf("O valor em centímetros:%.2f em milímetros é:%.2f\n", unidade, convertido);
            continue;

        case 5:
            printf("Digite o valor em mm(milímetro):\n");
            scanf("%f", &unidade);
            convertido = unidade / 1000;
            printf("O valor em milímetros:%.2f em metros é:%.2f\n", unidade, convertido);
            continue;

        case 6:
            printf("Digite o valor em mm(milímetro):\n");
            scanf("%f", &unidade);
            convertido = unidade / 10;
            printf("O valor em milímetros:%.2f em centímetros é:%.2f\n", unidade, convertido);
            continue;

        case 7:
            printf("ENCERRANDO...");

            continue;
        }
    }
}

// converter Massa
void converterMassa()
{

    int opcao = 0;
    float m, mm, cm;
    float unidade, convertido;

    while (opcao != 7)
    {
        printf("Escolha qual conversao deseja fazer:\n");
        printf("1- kg para g \n");
        printf("2- kg para tonelada\n");
        printf("3- g para kg\n");
        printf("4- g para tonelada\n");
        printf("5- tonelada para kg\n");
        printf("6- tonelada para g\n");
        printf("7-SAIR\n");

        scanf("%d", &opcao);

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 7)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em kg(quilograma):\n");
            scanf("%f", &unidade);
            convertido = unidade * 1000;
            printf("O valor em kg:%.2f em g é:%.2f\n", unidade, convertido);
            continue;

        case 2:
            printf("Digite o valor em kg(quilograma):\n");
            scanf("%f", &unidade);
            convertido = unidade / 1000;
            printf("O valor em kg:%.2f em toneladas é:%.2f\n", unidade, convertido);
            continue;

        case 3:
            printf("Digite o valor em g(grama):\n");
            scanf("%f", &unidade);
            convertido = unidade / 1000;
            printf("O valor em g:%.2f em kg é:%.2f\n", unidade, convertido);
            continue;

        case 4:
            printf("Digite o valor em g(grama):\n");
            scanf("%f", &unidade);
            convertido = unidade / 1000000;
            printf("O valor em g:%.2f em toneladas é:%.2f\n", unidade, convertido);
            continue;

        case 5:
            printf("Digite o valor em ton(toneladas):\n");
            scanf("%f", &unidade);
            convertido = unidade * 1000;
            printf("O valor em toneladas:%.2f em kg é:%.2f\n", unidade, convertido);
            continue;

        case 6:
            printf("Digite o valor em ton(toneladas):\n");
            scanf("%f", &unidade);
            convertido = unidade * 1000000;
            printf("O valor em toneladas:%.2f em g é:%.2f\n", unidade, convertido);
            continue;

        case 7:
            printf("ENCERRANDO...");

            continue;
        }
    }
}

// converter Velocidade;
void converterVelocidade()
{
    int opcao = 0;
    float ms, kmh, mph;

    while (opcao != 7)
    {
        printf("Escolha qual conversao deseja fazer\n");
        printf("1- m/s para km/h \n");
        printf("2- m/s para mph \n");
        printf("3- km/h para m/s \n");
        printf("4- km/h para mph \n");
        printf("5- mph para m/s  \n");
        printf("6- mph para km/h \n");
        printf("7-SAIR\n");

        scanf("%d", &opcao);

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 7)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        switch (opcao)
        {
        case 1:
            printf("Insira o valor\n");
            scanf("%f", &ms);
            kmh = ms * 3.6;
            printf("%.4f m/s equivale a %.4f km/h \n", ms, kmh);
            continue;
        case 2:
            printf("Insira o valor\n");
            scanf("%f", &ms);
            mph = ms * 2.237;
            printf("%.4f m/s equivale a %.4f mph \n", ms, mph);
            continue;

        case 3:
            printf("Insira o valor\n");
            scanf("%f", &kmh);
            ms = kmh / 3.6;
            printf("%.4f km/h equivale a %.4f m/s \n", kmh, ms);
            continue;

        case 4:
            printf("Insira o valor\n");
            scanf("%f", &kmh);
            mph = kmh / 1.609;
            printf("%.4f km/h equivale a %.4f mph \n", kmh, mph);
            continue;
        case 5:
            printf("Insira o valor\n");
            scanf("%f", &mph);
            ms = mph / 2.237;
            printf("%.4f mph equivale a %.4f m/s \n", mph, ms);
            continue;
        case 6:
            printf("Insira o valor\n");
            scanf("%f", &mph);
            kmh = mph * 1.609;
            printf("%.4f mph equivale a %.4f km/h \n", mph, kmh);
            continue;
        case 7:
            printf("ENCERRANDO...");

            continue;
        }
    }
}

// converter Área
void converterArea()
{
    int opcao = 0;
    float unidade, convertido;

    while (opcao != 7)
    {
        printf("Escolha qual conversao deseja fazer:\n");
        printf("1- milimetro quadrado para centimetro quadrado \n");
        printf("2- milimetro quadrado para metro quadrado\n");
        printf("3- centimetro quadrado para milimetro quadrado\n");
        printf("4- centimetro quadrado para metro quadrado\n");
        printf("5- metro quadrado para milimetro quadrado\n");
        printf("6- metro quadrado para centimetro quadrado\n");
        printf("7-SAIR\n");

        scanf("%d", &opcao);
        while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6 && opcao != 7)
        {
            printf("Tente novamente digitando uma opção válida: ");
            scanf("%d", &opcao);
        }

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 7)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em mm2 (milimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade / 100;
            printf("O valor em mm2: %.4f em cm2: %.4f\n", unidade, convertido);
            continue;

        case 2:
            printf("Digite o valor em mm2 (milimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade / 1000000;
            printf("O valor em mm2: %.4f em m2: %.4f\n", unidade, convertido);
            continue;

        case 3:
            printf("Digite o valor em cm2 (centimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade * 100;
            printf("O valor em cm2: %.4f em mm2: %.4f\n", unidade, convertido);
            continue;

        case 4:
            printf("Digite o valor em cm2 (centimetro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade / 10000;
            printf("O valor em cm2: %.4f em m2: %.4f\n", unidade, convertido);
            continue;

        case 5:
            printf("Digite o valor em m2 (metro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade * 1000000;
            printf("O valor em m2: %.4f em mm2: %.4f\n", unidade, convertido);
            continue;

        case 6:
            printf("Digite o valor em m2 (metro quadrado):\n");
            scanf("%f", &unidade);
            convertido = unidade * 10000;
            printf("O valor em m2: %.4f em cm2: %.4f\n", unidade, convertido);
            continue;

        case 7:
            printf("Obrigado, encerrando...\n");

            continue;
        }
    }
}
// converter Tempo
void converterTempo()
{
    int opcao = 0;
    float unidade, convertido;

    while (opcao != 7)
    {
        printf("Escolha qual conversao deseja fazer:\n");
        printf("1- Segundos para Minutos \n");
        printf("2- Segundos para Horas \n");
        printf("3- Minutos para Segundos \n");
        printf("4- Minutos para Horas \n");
        printf("5- Horas para Segundos \n");
        printf("6- Horas para Minutos \n");
        printf("7-SAIR\n");

        scanf("%d", &opcao);
        while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6 && opcao != 7)
        {
            printf("Tente novamente digitando uma opção válida: ");
            scanf("%d", &opcao);
        }

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 7)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em segundos:\n");
            scanf("%f", &unidade);
            convertido = unidade / 60;
            printf("%.2f segundos equivalem a %.2f minutos\n", unidade, convertido);
            continue;

        case 2:
            printf("Digite o valor em segundos:\n");
            scanf("%f", &unidade);
            convertido = unidade / 3600;
            printf("%.2f segundos equivalem a %.2f horas\n", unidade, convertido);
            continue;

        case 3:
            printf("Digite o valor em minutos:\n");
            scanf("%f", &unidade);
            convertido = unidade * 60;
            printf("%.2f minutos equivalem a %.2f segundos\n", unidade, convertido);
            continue;

        case 4:
            printf("Digite o valor em minutos:\n");
            scanf("%f", &unidade);
            convertido = unidade / 60;
            printf("%.2f minutos equivalem a %.2f horas\n", unidade, convertido);
            continue;

        case 5:
            printf("Digite o valor em horas:\n");
            scanf("%f", &unidade);
            convertido = unidade * 3600;
            printf("%.2f horas equivalem a %.2f segundos\n", unidade, convertido);
            continue;

        case 6:
            printf("Digite o valor em horas:\n");
            scanf("%f", &unidade);
            convertido = unidade * 60;
            printf("%.2f horas equivalem a %.2f minutos\n", unidade, convertido);
            continue;

        case 7:
            printf("ENCERRANDO...\n");
            continue;
        }
    }
}

int main()
{
    int opcao = 0;

    while (opcao != 9)
    {
        printf("Escolha o número referente a uma das opções de conversão a seguir:\n");
        printf("1. Comprimento (cm, m, Km)\n");
        printf("2. Massa (gramas, quilogramas, toneladas)\n");
        printf("3. Volume (ml, dl, L)\n");
        printf("4. Temperatura (C, F, K)\n");
        printf("5. Velocidade (km/h, m/s, mph)\n");
        printf("6. Potência (W, KW, Hp)\n");
        printf("7. Área (milimetro quadrado, centimetro quadrado, metro quadrado)\n");
        printf("8. Tempo (segundos, minutos, horas)\n");
        printf("9. SAIR\n");

        printf("Digite sua escolha:\n");
        scanf("%d", &opcao);

        // Validação de entrada do usuário
        while (opcao < 1 || opcao > 9)
        {
            printf("Opção inválida. Tente novamente:\n");
            scanf("%d", &opcao);
        }

        printf("\n \n");

        switch (opcao)
        {
        case 1:
            converterComprimento();
            continue;
        case 2:
            converterMassa();
            continue;
        case 3:
            converterVolume();
            continue;
        case 4:
            converterTemperatura();
            continue;
        case 5:
            converterVelocidade();
            continue;
        case 6:
            converterPotencia();
            continue;
        case 7:
            converterArea();
            continue;
        case 8:
            converterTempo();

            continue;
        case 9:
            break;
        }
        return 0;
    }
}

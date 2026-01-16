#include <stdio.h>

int main()
{
    //Declaracao das variáveis
    char _estado1, _estado2;
    char _codCarta1[5], _codCarta2[5], _cidade1[20], _cidade2[20];
    int _populacao1, _pturisticos1, _populacao2, _pturisticos2;
    float _area1, _pib1, _area2, _pib2, _denspop1, _pibpercapta1, _denspop2, _pibpercapta2, _superpower1, _superpower2;
    float resPopulacao, resArea, resPib, resPontosTur, resDensidade, resPibPerCapita, resSuperPoder;

    //Recebendo os dados da Carta 1
    printf("Digite os dados para a carta 1\n\n"); //Usando os dois \n aumenta o espaço e melhora a visualizacao
    printf("Digite o Estado (use uma letra de A a H): ");
    scanf(" %c", &_estado1);
    printf("Digite o Codigo da Carta (Composto da letra do estado, mais o numero da cidade com 2 digitos): ");
    scanf(" %s", _codCarta1);
    printf("Digite o Nome da Cidade (Sem espacos, nao use nomes compostos): ");
    scanf(" %s", _cidade1);
    printf("Digite a Populacao desta Cidade: ");
    scanf(" %d", &_populacao1);
    printf("Digite a Area desta Cidade: ");
    scanf(" %f", &_area1);
    printf("Digite o PIB desta Cidade: ");
    scanf(" %f", &_pib1);
    printf("Digite o numero de Pontos Turisticos desta Cidade: ");
    scanf(" %d", &_pturisticos1);

    //Cria um espaco entre a aquisicao dos dados
    // da Carta 1 para a Carta 2.
    printf("\n\n");

    //Recebendo os dados da Carta 2
    printf("Digite os dados para a carta 2\n\n");  //Usando os dois \n aumenta o espaço e melhora a visualizacao
    printf("Digite o Estado (use uma letra de A a H): ");
    scanf(" %c", &_estado2);
    printf("Digite o Codigo da Carta (Composto da letra do estado, mais o numero da cidade com 2 digitos): ");
    scanf(" %s", _codCarta2);
    printf("Digite o Nome da Cidade (Sem espacos, nao use nomes compostos): ");
    scanf(" %s", _cidade2);
    printf("Digite a Populacao desta Cidade: ");
    scanf(" %d", &_populacao2);
    printf("Digite a Area desta Cidade: ");
    scanf(" %f", &_area2);
    printf("Digite o PIB desta Cidade: ");
    scanf(" %f", &_pib2);
    printf("Digite o numero de Pontos Turisticos desta Cidade: ");
    scanf(" %d", &_pturisticos2);

    //Cria um espaco entre a aquisicao dos dados
    // e a impressao deles.
    printf("\n\n");

    //Calcula Densidade populacional e PIB Per Capta para ambas as Cartas

    _denspop1 = _populacao1 / _area1;
    _denspop2 = _populacao2 / _area2;

    _pibpercapta1 = _pib1 / _populacao1;
    _pibpercapta2 = _pib2 / _populacao2;

    //Calculando o super poder
    _superpower1 = _populacao1 + _area1 + _pib1 + _pturisticos1 + _pibpercapta1 + (1 / _denspop1);
    _superpower2 = _populacao2 + _area2 + _pib2 + _pturisticos2 + _pibpercapta2 + (1 / _denspop2);

    //Imprimindo as informacoes da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", _estado1);
    printf("Codigo: %s\n", _codCarta1);
    printf("Nome da Cidade: %s\n", _cidade1);
    printf("Populacao: %d\n", _populacao1);
    printf("Area: %.2f Km2\n", _area1);
    printf("PIB: %.2f bilhoes de reais\n", _pib1);
    printf("Numero de Pontos Turisticos: %d\n", _pturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", _denspop1);
    printf("PIB per Capita: %.2f reais\n", _pibpercapta1);

    //Cria um espaco entre as informacoes
    // das cidades.
    printf("\n\n");

    //Imprimindo as informacoes da carta 3
    printf("Carta 2:\n");
    printf("Estado: %c\n", _estado2);
    printf("Codigo: %s\n", _codCarta2);
    printf("Nome da Cidade: %s\n", _cidade2);
    printf("Populacao: %d\n", _populacao2);
    printf("Area: %.2f Km2\n", _area2);
    printf("PIB: %.2f bilhoes de reais\n", _pib2);
    printf("Numero de Pontos Turisticos: %d\n", _pturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", _denspop2);
    printf("PIB per Capita: %.2f reais\n\n\n", _pibpercapta2);


    //Resultado da comparação das cartas
    resPopulacao = _populacao1 > _populacao2;
    resArea = _area1 > _area2;
    resPib = _pib1 > _pib2;
    resPontosTur = _pturisticos1 > _pturisticos2;
    resDensidade = _denspop1 > _denspop2;
    resPibPerCapita = _pibpercapta1 > _pibpercapta2;
    resSuperPoder = _superpower1 > _superpower2;

    // Imprime o resultado do Jogo

    printf("*** Comparacao das Cartas***\n\n");
    printf("Area: Carta 1 venceu (%d)\n", resPopulacao);
    printf("PIB: Carta 1 venceu (%d)\n", resPib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", resPontosTur);
    printf("Densidade Demografica: Carta 1 venceu (%d)\n", resDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resSuperPoder);

    getchar();
    getchar();

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesomedio, carboidratos, A, B, C, D, resultado, tomate, extrato, tt, te;
    char ch;
    printf("\nDigite uma opcao (letra maiuscula):");
    ch = getchar();


    pesomedio = 100;
    carboidratos = 3.1 ;

    switch (ch){
    case 'A':
        printf("\nOpcao: A ");
        printf("\nPeso dos tomates (em gramas): ");
        scanf("%f", &A);

        resultado = A * carboidratos / pesomedio;
        printf("\nQuantidade de carboidrato no saco de tomates: %.2f g\n", resultado);

        break;

    case 'B':
        printf("\nOpcao: B");

        printf("\nQuantas colheres de sopas voce deseja adicionar: ");
        scanf("%f", &B);

        resultado= 2 * B;

        printf("\nA quantidade de carboidatros suco de tomate e de %.2f g", resultado);
        break;

    case 'C':
        printf("\nOpcao: C");

        printf("\nPeso dos tomates (em gramas):");
        scanf("%f", &tomate);

        tt = 0.031 * tomate;

        printf("\nPeso do extrato (em gramas):");
        scanf("%f", &extrato);

        te = 0.1333 * extrato;

        resultado = tt + te;

        if (tt > te){
            printf("O numeros de carboidratos desses tomates e maior que do extrato de tomate");
        } else if (tt == te) {
            printf("O numero de carboidratos sao os mesmo");
            } else {
                printf("O numeros de carboidratos desse extrato de tomate e maior que dos tomates");
                }

        printf("\nTotal de carboidratos no molho %.2f g", resultado);
        break;
    case 'D':
        printf("\nOpcao: D");

        printf("\nCapacidade do recipiente em gramas: ");
        scanf("%f", &D);

        tt = D * 6;
        resultado =  D * 0.186;

        printf("\nSerao necessarios aproximadamente %.2f g de tomates para fazer %.2f g de extrato  g", tt, D);
        printf("\nA Quantidade total de carboidratos e de %.2f ", resultado);
        break;


     default:
        printf("\nOpcao invalida! Por favor, digite A, B ou C.\n");
        break;
    }

    return 0;}

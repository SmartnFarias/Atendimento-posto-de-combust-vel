#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() 
{
    system ("color 3e");
	setlocale(LC_ALL,"PORTUGUESE");
    int opcao;
    float litros, vDesconto, vGasol = 6.50, vAlcool = 5.00,valorT;
// perguntar sobre o tipo
    printf("Vai de gasolina ou �lcool chefe?\n");
    printf("Digite 1 para gasolina ou 2 para �lcool: ");
    scanf("%d", &opcao);
// se escolhido gasolina (1) fazer isso
    if (opcao == 1)
	{
        printf("Perfeito, quantos litros de gasolina pra hoje? ");
        scanf("%f", &litros);

        valorT = litros * vGasol;

        if (litros <= 20) 
    {
        vDesconto = valorT * 0.965;
    } 
	else 
	{
        vDesconto = valorT * 0.94;
    }

        printf("ficou R$ %.2f j� com o desconto!\n", vDesconto);
    } 
// se escolhido alcool (2) fazer isso
	else if (opcao == 2)
	{
        printf("�timo, quantos litros de �lcool pra hoje? ");
        scanf("%f", &litros);

        valorT = litros * vAlcool;

    if (litros <= 20) 
    {
        vDesconto = valorT * 0.97;
    } 
    else 
    {
        vDesconto = valorT * 0.95;
    }

        printf("Ficou R$ %.2f j� com o desconto!\n", vDesconto);
    } 
// se outras op��es que n�o (1) ou (2)
    else 
	{
        printf("Desculpa n�o temos outras op��es pra hoje! \nDigita 1 para gasolina ou 2 se for �lcool.\n");
    }
}

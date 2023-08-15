#include <stdio.h>  //incluindo a biblioteca com os metodos printf, scanf
#include <stdlib.h> //incluindo a biblioteca padrao para atribuicao e alocacao de memoria

void main()
{
    int ano, result; // definindo as variaveis do tipo int que irei usar

    do
    {
        printf("Entre com seu ano de aniversario:"); // mensagem para o usuario
        result = scanf("%d", &ano);                  // obtendo a entrada do teclado e colocando o retorno de exito ou falha do scanf em result

        if (result != 1) // se o usuario entrar com algo que nao seja um numero o result sera 0, indicando um erro
        {
            printf("Entrada invalida. Certifique-se de inserir um numero.\n");
            return; // encerro o programa
        }

        if (ano <= 0) // verifico se o usuario colocou uma data menor ou igual a zero
        {
            printf("A entrada eh invalida, ano negativo? Voce eh mais velho que cristo?\n"); // printo a mensagem de erro
        }

    } while (ano <= 0); // mantenho o laço enquanto o usuario nao colocar uma data maior que zero

    system("clear"); // limpo a janela

    if (ano < 1900) // verifico se o ano é anterior a 1900
    {
        printf("Ola pessoa do passado!\n");
    }

    if (ano > 2015 && ano < 2023) //vejo se o ano é anterior a 2023, posterior a 2015 e exibo a mensagem divertida para a criança
    {
        printf("Moshi Moshi Kodomo!");
    }

    if (ano > 2023) // verifico se o ano é posterior a 2023
    {
        printf("Ola pessoa do futuro!\n");
    }

    if (ano % 4 == 0 || (ano % 100 == 0 && ano % 400 == 0)) //verifico se o ano é bissexto
    {
        printf("O ano %d eh bissexto", ano);//printo se é bissexto
        return;//encerro o programa
    }

    printf("O ano %d nao eh bissexto", ano);//printo se não é bissexto
    return;//encerro o programa
}

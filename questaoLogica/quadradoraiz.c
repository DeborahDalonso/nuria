#include <stdio.h> //incluindo a biblioteca com os metodos printf, scanf
#include <stdlib.h> //incluindo a biblioteca padrao para atribuicao e alocacao de memoria
#include <math.h> //incluindo a biblioteca para o calculo da potencia e da raiz

void main()
{
    float vetor[2] = {0,0}, maior = 0; //definido as variaveis do tipo float que irei usar
    int result; //definindo variavel do tipo int
    
    printf("Entre com o primeiro numero:"); //printando texto para o usuario
    result = scanf("%f", &vetor[0]); //obtendo a entrada do teclado e colocando o retorno de exito ou falha do scanf em result 
    
     if (result != 1) { //se o usuario entrar com algo que nao seja um numero o result sera 0, indicando um erro
        printf("Entrada invalida. Certifique-se de inserir um numero.\n");
        return; //encerro o programa
    }

    printf("Entre com o segundo numero:");
    result = scanf("%f", &vetor[1]); 
    
     if (result != 1) {
        printf("Entrada invalida. Certifique-se de inserir um numero.\n");
        return; //encerro o programa
    }
   
   system("clear");//limpo a janela
   
   //caso houvesse uma entrada n de numeros poderiamos ordenar usando bubble sort ou heap sort, é mais eficiente em complexidade de tempo
    if(vetor[0] > vetor[1]){ //ordenando o vetor para que o menor numero seja o primeiro e o maior o ultimo usando substituição 
        maior = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = maior;
    }
    
    if (vetor[0] == vetor[1])//verifico se os numeros sao iguais
    {
        printf("Ambos os números são iguais!\n");//se forem iguais exibo uma mensagem
    }
    
    printf("Quadrado do menor número(%.4f): %.4f\n", vetor[0], pow(vetor[0], 2));//uso o metodo pow para obter a potencia e exibo o resultado
    
    if(vetor[1] < 0){ //verifico se o maior numero é negatico ou positivo
        printf("Raiz quadrada do maior número(%.4f): impossivel", vetor[1]); // se for negativo informo que é impossivel fazer a raiz
        return; //encerro o programa
    }
    
    printf("Raiz quadrada do maior número(%.4f): %f", vetor[1], sqrt(vetor[1])); //uso o metodo sqrt para obter a raiz e exibo o resultado
}
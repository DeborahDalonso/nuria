function quadradoraiz() {//criando metodo para encontrar o quadrado do menor numero e a raiz do menor numero
    let numberOne = document.getElementById("numberOne").value, //criando uma variavel numberOne e atribuindo a ela o valor obtido no campo com id numberOne
        numberTwo = document.getElementById("numberTwo").value, //criando uma variavel numberTwo e atribuindo a ela o valor obtido no campo com id numberTwo
        raiz, quadrado; //criando variaveis para receber o valor da raiz e do quadrado

    if (numberOne.length === 0 || numberTwo.length === 0) { //verifico se ambos os inputs estão preenchidos
        alert("Preencha ambos os campos!"); // alerto o usuario se o campo estiver vazio
        return; //encerro a funçao
    }

    if (numberOne > numberTwo) { //verifico se o primeiro numero é maior que o segundo numero
        quadrado = Math.pow(numberTwo, 2); // uso o metodo pow presente na biblioteca Math para calcular a potencia do menor numero
        raiz = numberOne > 0 ?  Math.sqrt(numberOne) : "Impossivel"; // uso o metodo sqrt presente na biblioteca Math para calcular a raiz do maior numero
        //uso uma operaçao ternaria para verificar se o segundo numero é maior que zero, caso sim executo sqrt, caso nao coloco impossivel na varivel raiz 

        alert('O quadrado do menor número é: ' + quadrado + '\n A raiz quadrada do maior número é: ' + raiz); //exibo os resultados
        return; //encerro a funçao
    }

    //caso o segundo numero seja maior ou ambos os numeros sejam iguais essa etapa é executada

    quadrado = Math.pow(numberOne, 2); 
    raiz = numberTwo > 0 ? Math.sqrt(numberTwo) : "Impossivel";

    if (numberTwo === numberOne) { //verifica se são iguais
        alert('Os números são iguais!\n O quadrado do número é: ' + quadrado + '\n A raiz quadrada do número é: ' + raiz); //exibe os resultados 
        return; //encerro a funçao
    }

    //caso o segundo numero seja maior e não seja igual ao primeiro essa etapa é executada

    alert('O quadrado do menor número é: ' + quadrado + '\n A raiz quadrada do maior número é: ' + raiz); // exibo o resultado 

}

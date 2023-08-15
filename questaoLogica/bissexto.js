function bissexto() { //criando metodo para verificar se é bissexto
    let year = document.getElementById("date").value, //crindo uma variavel year e atribuindo a ela o valor obtido no campo com id date
        message = ""; //crinado uma variavel de texto message

    if (year <= 0) { //verifico se o usuario colocou uma data menor ou igual a zero
        alert("O ano é invalido!\n Voce é mais velho que cristo?\n Coloque uma valor positivo maior que 0"); // printo a mensagem de erro
        return; //encerro a funçao
    }

    if (year < 1900) {// verifico se o ano é anterior a 1900
        message = "Ola pessoa do passado!\n"; //coloco a mensagem divertida em message
    }

    if (year < 2023 && year >= 2015) {//vejo se o ano é anterior a 2023, posterior a 2015 e exibo a mensagem divertida para a criança
        message = "Moshi Moshi Kodomo!\n"; //coloco a mensagem divertida em message
    }

    if (year > 2023) {// verifico se o ano é posterior a 2023
        message = "Ola pessoa do futuro!\n"; //coloco a mensagem divertida em message
    }

    if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) { //verifico se é bissexto
        alert(message + "O ano é bissexto"); //concateno as mensagens e exibo se for bissexto
        return; //encerro a função
    }

    alert(message + "O ano nao é bissexto"); //concateno as mensagens e exibo se nao for bissexto
}
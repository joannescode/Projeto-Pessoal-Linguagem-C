/*COMANDOS B�SICOS C*/

/*incluindo bibliotecas*/
#include <nomedabiblioteca.extens�o>
/*exemplo real*/
#include <stdio.h>
#include <stdlib.h>

/*incluindo acentua��o nos textos*/
#include <locale.h>
/*Ap�s o "int main"*/
setlocale(LC_ALL, "Portuguese");

/*iniciando c�digo principal*/
int main (){
    /* seu c�digo vai aqui*/
}

/*imprimindo mensagem no terminal*/
printf("Por favor digite o valor:");

/*permitindo digitar valor e lendo o valor*/
scanf("%d", &valor);

/*tipos de vari�veis*/
int = /*vari�vel inteira*/
float = /*vari�vel com mais de uma casa n�merica*/
bool = /*vari�vel booleana 1 = true, 0 = false*/
char = /*vari�vel letra, exemplo 'x'*/

/*letras utilizadas na leitura da cada vari�vel*/
int = /*scanf("%d", &valor)*/
float = /*scanf("%f", &valor)*/
bool = /*scanf("%d", &valor)*/
char = /*scanf("%c", &valor)*/
/*observe que para indexar a variavel no "valor", utilizamos o & (E comercial)*/

/*Operadores L�gicos*/
=      IGUAL
>      MAIOR QUE
<      MENOR QUE
>=     MAIOR QUE OU IGUAL
<=     MENOR QUE OU IGUAL
<>     DIFERENTE DE
AND    OPERADOR L�GICO E
OR     OPERADOR L�GICO OU

/*exemplo de c�digo utilizando vari�veis e operadores*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int A, B, R;

    printf("Por favor digite o valor para A:");
    scanf("%d", &A);

    printf("Por favor digite o valor para B:");
    scanf("%d", &B);

    printf("O valor de A �: %d\n", A);
    printf("O valor de B �: %d\n", B);
    printf("O valor de %d + %d = %d\n", A, B, R = A + B);
    
    system("pause");
    return 0;
    
}
/*\n para pular linha no terminal*/

/*fun��o if e else (condicional): caso uma condi��o seja verdadeira ir� realizar um bloco de comando, do contr�rio ir� realizar outro bloco de comando.*/

se(vari�vel,operador l�gico,valor){
    imprimi mensagem
}senao{
    imprimi outra mensagem
}

// exemplo:
int x = 10;
if(x>10){
    printf("X � maior que 10");
}else{
    printf("X n�o � maior que 10");
}
/*sempre utilizamos operadores l�gicos para poder realizar a compara��o da vari�vel com algum valor*/

/*fun��o while (la�o de repeti��o): while � um repetidor, que sempre ir� repetir o bloco de comandos, 
assim atualizando o valor da vari�vel at� que o valor seja igual a condi��o*/

enquanto(condi��o)fa�a
    instru��es
    atualizar a vari�vel de controle;

// exemplo:
 int contador = 1;
 while (contador<=10){
    printf("%d", contador);
    contador ++
 }

 /*fun��o do while (la�o de repeti��o): do while � um repetidor assim como o while, a sua diferen�a est� que a sua 
 condi��o � verificada apenas no final do c�digo, executando o repetidor ao menos uma vez*/

fa�a{
    instru��es
    atualizar a vari�vel de controle;
} enquanto(condi��o)

// exemplo:
do{
    printf("%d", contador);
    contador ++
}while(contador<=10);

/*fun��o for (la�o de repeti��o): diferente do while, o for voc� utiliza quando voc� sabe o valor que precisa alcan�ar com o controlador*/

para(valor inicial, condi��o final, atualiza vari�vel)fa�a
    instru��es

// exemplo:
for(contador=1, contador<=20, contador++){
    printf("%d", contador);
}


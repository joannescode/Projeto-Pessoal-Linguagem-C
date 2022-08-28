/*COMANDOS B�SICOS SQL*/

/*selecionando informa��o espec�fica de uma tabela*/
SELECT ncoluna1, ncoluna2
FROM tabela

/*selecionando informa��o geral de uma tabela*/
SELECT * 
FROM tabela

/*selecionando informa��o espec�fica e sem repeti��es de uma tabela*/
SELECT DISTINCT ncoluna
FROM tabela

/*selecionando informa��o espec�fica ou geral  com condi��es*/
SELECT * 
FROM tabela
WHERE ncoluna (operador) (refer�ncia)

/*Operadores L�gicos*/
=      IGUAL
>      MAIOR QUE
<      MENOR QUE
>=     MAIOR QUE OU IGUAL
<=     MENOR QUE OU IGUAL
<>     DIFERENTE DE
AND    OPERADOR L�GICO E
OR     OPERADOR L�GICO OU


/*visualizando quantidade de colunas dentro de uma tabela*/
/*GERAL*/
SELECT count (*)
FROM tabela
/*ESPEC�FICA*/
SELECT count (DISTINCT ncoluna)
FROM tabela

/*selecionando as 10 primeiras linhas de uma tabela*/
SELECT TOP 10 *
FROM tabela

/*selecionado informa��o espec�fica em ordem crescente ou decresente*/
SELECT *
FROM tabela
ORDER BY ncoluna asc 
/**/
SELECT ncoluna
FROM tabela
ORDER BY ncoluna desc

/*selecionando informa��es dentro de um range*/
SELECT *
FROM tabela
WHERE ncoluna BETWEEN valor AND valor
/*selecionando informa��es que N�O est�o dentro de um range*/
SELECT *
FROM tabela
WHERE ncoluna NOT BETWEEN valor AND valor

/*selecionando informa��es espec�ficas dentro de uma coluna*/
SELECT *
FROM tabela
WHERE ncoluna IN (x,y,z)
/*outra forma*/
SELECT *
FROM tabela
WHERE ncoluna = x
OR ncoluna = y
OR ncoluna = z

/*procurando informa��es semelhantes com um valor*/
SELECT *
FROM tabela
WHERE ncoluna LIKE '%veira' /*sendo que a pesquisa ser� feita com o valor final "VEIRA"*/
WHERE ncoluna LIKE '%veira%' /*sendo que a pesquisa ser� feita tendo o valor "VEIRA" entre o inicio e fim da informa��o*/
WHERE ncoluna LIKE 'veira%' /*sendo que a pesquisa ser� feita com o valor inicial "VEIRA"*/

/*selecionando coluna e utilizando opera��es aritm�ticas em seus valores*/
SELECT TOP 10 SUM (ncoluna)
FROM tabela
/*selecionado coluna e mostrando o menor valor*/
SELECT TOP 10 MIN (ncoluna)
FROM tabela
/*selecionado coluna e mostrando o valor m�ximo*/
SELECT TOP 10 MAX (ncoluna)
FROM tabela
/*selecionado coluna e mostrando a m�dia dos valores*/
SELECT TOP 10 AVG (ncoluna)
FROM tabela

/*agrupando informa��es de duas colunas*/
SELECT ncoluna, /*OPERA��O ARITM�TICA*/ (ncoluna)
FROM tabela
GROUP BY ncoluna
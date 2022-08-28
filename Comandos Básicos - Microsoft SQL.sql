/*COMANDOS BÁSICOS SQL*/

/*selecionando informação específica de uma tabela*/
SELECT ncoluna1, ncoluna2
FROM tabela

/*selecionando informação geral de uma tabela*/
SELECT * 
FROM tabela

/*selecionando informação específica e sem repetições de uma tabela*/
SELECT DISTINCT ncoluna
FROM tabela

/*selecionando informação específica ou geral  com condições*/
SELECT * 
FROM tabela
WHERE ncoluna (operador) (referência)

/*Operadores Lógicos*/
=      IGUAL
>      MAIOR QUE
<      MENOR QUE
>=     MAIOR QUE OU IGUAL
<=     MENOR QUE OU IGUAL
<>     DIFERENTE DE
AND    OPERADOR LÓGICO E
OR     OPERADOR LÓGICO OU


/*visualizando quantidade de colunas dentro de uma tabela*/
/*GERAL*/
SELECT count (*)
FROM tabela
/*ESPECÍFICA*/
SELECT count (DISTINCT ncoluna)
FROM tabela

/*selecionando as 10 primeiras linhas de uma tabela*/
SELECT TOP 10 *
FROM tabela

/*selecionado informação específica em ordem crescente ou decresente*/
SELECT *
FROM tabela
ORDER BY ncoluna asc 
/**/
SELECT ncoluna
FROM tabela
ORDER BY ncoluna desc

/*selecionando informações dentro de um range*/
SELECT *
FROM tabela
WHERE ncoluna BETWEEN valor AND valor
/*selecionando informações que NÃO estão dentro de um range*/
SELECT *
FROM tabela
WHERE ncoluna NOT BETWEEN valor AND valor

/*selecionando informações específicas dentro de uma coluna*/
SELECT *
FROM tabela
WHERE ncoluna IN (x,y,z)
/*outra forma*/
SELECT *
FROM tabela
WHERE ncoluna = x
OR ncoluna = y
OR ncoluna = z

/*procurando informações semelhantes com um valor*/
SELECT *
FROM tabela
WHERE ncoluna LIKE '%veira' /*sendo que a pesquisa será feita com o valor final "VEIRA"*/
WHERE ncoluna LIKE '%veira%' /*sendo que a pesquisa será feita tendo o valor "VEIRA" entre o inicio e fim da informação*/
WHERE ncoluna LIKE 'veira%' /*sendo que a pesquisa será feita com o valor inicial "VEIRA"*/

/*selecionando coluna e utilizando operações aritméticas em seus valores*/
SELECT TOP 10 SUM (ncoluna)
FROM tabela
/*selecionado coluna e mostrando o menor valor*/
SELECT TOP 10 MIN (ncoluna)
FROM tabela
/*selecionado coluna e mostrando o valor máximo*/
SELECT TOP 10 MAX (ncoluna)
FROM tabela
/*selecionado coluna e mostrando a média dos valores*/
SELECT TOP 10 AVG (ncoluna)
FROM tabela

/*agrupando informações de duas colunas*/
SELECT ncoluna, /*OPERAÇÃO ARITMÉTICA*/ (ncoluna)
FROM tabela
GROUP BY ncoluna
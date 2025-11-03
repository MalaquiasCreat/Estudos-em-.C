
# Estudo em C 

# Questionário de Fundamentos da Programação e Linguagem C

## 1. Fundamentos da Programação

1. O que é programação e qual o objetivo de escrever um programa? São Instruções escritas para serem executadas pelo computador. 
2. O que é um **algoritmo** e como ele se relaciona com um programa? Uma sequência de instruções que devem ser claras, lógicas e definidas. São seguidas para resolver um problema ou executar uma tarefa. 

3. O que é **lógica de programação** e por que ela é importante?  É considerada a base do desenvolvimento de sw, consiste em desenvolver uma sequência lógica de instruções (algoritmo) para resolução de problemas.

4. Explique o que são **entrada**, **processamento** e **saída** em um programa. São três passos importantes para programação, conhecidos como IPO - imput process output. 
Entrada/input: é a fase em que o programa recebe dados ou informações do mundo mundo exterior podendo vir de diversas fontes, como a calculadora que a entrada seria as informações que o usuário digita
Processamento: é a fase em que o programa executa as instruções e manipula os dados de entrada para produzir o resultado, sendo o pensar do programa onde a lógica de programação é aplicada podendo ocorrer cálculos matemáticos, manipulação de dados e tomadas de decisões. Como exemplo na calculadora seria as operações realizadas com os números digitados na entrada
Saída/Output: é a fase em que o programa apresenta o resultado processado ao mundo exterior. Como exemplo na calculadora o resultado da operação após o processamento. 

5. Dê um exemplo simples de **algoritmo do dia a dia** (como fazer café, atravessar a rua, etc). Atravessar a rua: chegue até o ponto seguro antes de terminar a calça, olhe para os dois lados e veja se tem algum veículo vindo se não tiver pode atravessar, caso tenha algum veículo vindo espere passar para atravessar a rua. 
6. O que é um **erro de sintaxe**? Dê um exemplo. É como se fosse um erro de escrita, quando o código é escrito fora das regras gramaticais da linguagem de programação usada impedindo de executar o algoritmo até que o erro seja corrigido. Um exemplo seria, Por, favor poderia me informar as horas ! 
Sendo correto: Por favor, poderia me informar as horas ?

7. O que é um **erro lógico**? Um erro lógico é quando o código compila e roda, porém o resultado final não é de acordo com a ideia ou projeto do programador. 

8. O que significa **compilar** um programa e qual é a função do **compilador**? Seria traduzir o código legível por humano para que seja possível ser interpretado pelo processador.  

9. Qual é a diferença entre **código-fonte** e **programa executável**? Código fonte seria instruções legíveis para os humanos e o programa executável é traduzido para linguagem da máquina pronto para ser executado.  

10. O que é um **comentário** em código e para que ele serve? São trechos do código que servem como explicação ou anotações, sendo ignorados pelo compilador, importantes para melhor compreensão, facilitar a manutenção, debugg e documentação. 

---

## 2. Conceitos Essenciais de Programação

11. O que é uma **variável** e qual é o seu propósito? Um espaço reservado na memória   Para armazenar um valor de um tipo específico, seu propósito é fornecer um método flexível e reutilizável para lidar com dados que podem mudar. 

12. Explique o que são **tipos de dados** e por que precisamos deles. São as classificações que definem qual o tipo de valores que a variável poderá armazenar. São importantes para armazenamento de dados da forma correta e melhor representação, ajuda na organização do código evitando repetições. 

13. Cite os principais tipos de dados primitivos em C e um exemplo de uso de cada um.
int: Usado para armazenar números inteiros. 
float: Usado para armazenar números decimais, com precisão simples.
double: Usado para armazenar números decimais com maior precisão que o float.
char: Usado para armazenar um único caractere, como uma letra, um número ou um símbolo.
14. O que é **declaração** de variável e o que é **atribuição de valor**? A Declaração informa que uma variaria em será criada reservando um espaço na memória, já a atribuição armazena um valor nesse espaço que foi reservado.
15. Qual é a diferença entre uma **constante** e uma **variável**? Na constante declaramos um valor fixo e na variável é possível modificar o valor durante a execução. 
16. O que são **operadores aritméticos** em C? Dê exemplos.
Símbolos usados para realizar operações matemáticas. Como adição e subtração. 
17. O que é uma **expressão lógica** e onde ela é usada?

18. Explique o que é uma **estrutura condicional** (`if`, `else`) e para que serve.
Um comando para tomada de decisão, direciona o fluxo de execução se verdade ou não. 
19. Explique o que é uma **estrutura de repetição** (`for`, `while`) e para que serve.
Um recurso que permite executar um trecho do código repetidamente sem a necessidade de escrever várias vezes. 
20. Por que é importante **indentação** (organização visual do código) em C? Melhora a legibilidade do código facilitando a visualização hierárquica visível. 

---

## 3. Introdução à Linguagem C

21. O que faz a linha `#include <stdio.h>` em um programa C? Instruir o compilador C a incluir o conteúdo do arquivo de cabeçalho padrão de entrada e saída, permitindo a interação do usuario (leitura e escrita no console)
22. Qual é o papel da função `main()` em um programa em C?
 É a partir dela que o sistema operacional começa a executar o código, controlando o fluxo do programa e chamando outras funções quando necessário. Ela também é responsável por retornar um código de status para o sistema operacional, indicando se a execução foi bem-sucedida ou não. 
23. Para que serve o comando `printf()`?
 para escrever ou imprimir dados formatados na saída padrão como Exibição de Texto, Exibição de Valores de Variáveis, Formatação de Saída especificando tipos de dados e controlando a precisaõ e o alinhamento.
24. Para que serve o comando `scanf()`?
 para ler dados formatados da entrada padrão como o teclado, e armazená-los em variáveis
25. Por que usamos `%d`, `%f`, `%c`, `%s` dentro do `printf()` e do `scanf()`?
 dentro de printf() e scanf() pois são especificadores de formato que indicam o tipo de dado que está sendo lido ou escrito. 
￼

26. O que significa `return 0;` no final do `main()`?
  ela indica que o programa foi executado com sucesso e encerra sua execução. 
27. Como declarar e exibir uma variável inteira chamada `idade` com valor 20?
#include <stdio.h>
int main (){
//Declara e inicializa a variavel inteira com o valor 20.
int idade=20;
//Exibi o valor da variavel na tela.
printf("a idade é: %d\n", idade):
return=0
}
28. Como pedir ao usuário que digite sua idade e depois mostrar o valor na tela?
 com scanf 
29. Qual é a função dos caracteres `\n` dentro de um `printf()`? Quebra de linha
30. O que acontece se esquecermos um `;` no final de uma linha?
 erro de sintax.

---

## 4. Exercícios de Interpretação de Código

31. Qual será a saída do programa abaixo?

```c
int a = 5;
int b = 3;
printf("%d\n", a + b);
```

---

## 5. Escreva um exemplo de código que:

- Peça ao usuário para digitar sua idade
- Guarde o valor na variável idade
- Mostre “Sua idade é X” na tela

---
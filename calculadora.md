# Calculadora (calculadora.c)

Descrição
- Programa de consola em C que oferece operações básicas: adição, subtração, multiplicação e divisão.
- Menu interativo que repete até o usuário escolher finalizar.

Recursos
- Tratamento simples de divisão por zero.
- Resultado apresentado com duas casas decimais.

Pré-requisitos
- GCC (MinGW) ou outro compilador C compatível.
- Linha de comando do Windows (PowerShell / CMD) ou terminal do VS Code.

Como compilar
- Com GCC (MinGW):
  gcc -Wall -Wextra -Werror -std=c11 calculadora.c -o calculadora.exe

Como executar
- No terminal:
  .\calculadora.exe

Exemplo de uso
1. Escolher operação (1–4) no menu.
2. Informar o primeiro número (inteiro).
3. Informar o segundo número (inteiro).
4. Ver o resultado formatado com 2 casas decimais.
5. Escolher 5 para finalizar.

Observações e melhorias recomendadas
- As funções estão declaradas dentro de main (extensão do GCC). Mover as funções para o escopo global e adicionar protótipos melhora portabilidade e legibilidade.
- Atualmente a entrada usa inteiros; se desejar operações com decimais, alterar variáveis e scanf para float/double:
  - declarar variáveis como float/double;
  - usar scanf("%f", &var) para float (ou "%lf" para double).
- Validação de entrada: verificar retorno de scanf e limpar buffer para evitar loops infinitos com entradas inválidas.
- Padronizar nomes (ex: primeiro_numero, segundo_numero) e mensagens ao usuário.
- Considerar separar lógica em funções em outro ficheiro (calculadora.h / calculadora.c) para testes unitários.

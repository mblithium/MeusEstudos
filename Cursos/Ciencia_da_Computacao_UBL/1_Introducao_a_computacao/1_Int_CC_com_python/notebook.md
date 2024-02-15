https://www.coursera.org/learn/ciencia-computacao-python-conceitos

Necessário ter Python 3 instalado.

(Alguns dos assuntos estão em tópicos porque foram a recaptulação de aulas que já tive)

# Introdução ao Python

- Operações matemáticas
- Comparações lógicas

# Variáveis e Primeiro Programa

- Nomes das variáveis precisam ser bem descritivas do que exatamente ela faz.
- Variáveis

# Quatro maneiras de rodar o python

- idle
- executar arquivo py com python

# O que é Software Livre?

- Um programa contém o conhecimento expresso em algoritmos e pode ser executado, como uma ferramenta.
- Existem softwares que tem licenças restritas (copyright), são chamados de "proprietários" ou "de código fonte secreto".
- Linguagens compiladas e interpretadas.
- O software livre não tem restrições de copia, distribuição, leitura ou modificação.
- A definição de Software Livre de acordo com a Free Software Foundation é, o software que tem as 4 liberdades: executar, estudar e modificar, redistribuir e redistribuir as melhorias.
- Open Source Initiative.
- Centro de Competência em Software Livre

# Tipos de Dados

- Comando "type" para exibir o tipo de dados.

```py
type(10)
# > <class 'int'>

type("tudo bem?")
# > <class 'str'>

type(5 / 2)
# > <class 'float'>
```

- Conversão de tipos.

```py
num = 12.5687
int(num)
# > 12
```

- Ver tamanho de caracteres

```py
len("o texto aqui")
```

# Entrada de Dados

- Exemplo com conversor de Fahrenheit para Celsius.


```py
tempF = int(input("Digite uma temperatura em Fahrenheit: "))
tempC = (tempF - 32) * 5 / 9
print(f"A temperatura {78}ºF em Celsius é {tempC}ºC")
```

# Introdução ao Python, variáveis, expressões e comandos

[Variáveis, expressões e comandos](https://panda.ime.usp.br/cc110/static/cc110/03-variaveis.html)

# Expressões booleanas

- Tabela verdade
- Precedência de operadores

# Execução Condicional

- if, elif, else

# Repetição While

# Variáveis booleanas

# Deputador (como utilizar o "debugger")

# Funções

```py
def soma (x, y):
    return x + y

userinputX = input("Digite o valor de X: ")
userinputY = input("Digiet o valor de Y: ")

print(f"A soma de X: {userinputX} + Y: {userinputY} é igual a {soma(userinputX, userinputY)})
```
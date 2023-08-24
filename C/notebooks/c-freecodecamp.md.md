
# Cabeçalhos

Pode ser que seja necessário importar bibliotecas para certos usos, como, por exemplo, a biblioteca stdio e stdlib, que se tratam de bibliotecas padrão de entrada e saída (stdio) e de manipulação e alocação de memória, conversão de dados, etc (stdlib).

```c 
#include <stdio.h>
#include <stdlib.h>
```

# Declaração de variáveis

```c 
#include <stdio.h>
#include <stdlib.h>

int main () {
	char word = 'A';
	char phrase[20] = "Hello World";
	double numberDouble = 1.5;
	float numberFloat = 2.25
	int numberInt = 2;
}
```

Para declarar valores como strings e arrays, é necessário usar colchetes para dizer que aquilo é uma matriz. Palavras precisam disso pois são cadeias de caracteres, assim como arrays que guardam vários elementos que podem ser acessados pelos seus respectivos índices.

# Funções

A principal função de um programa em C é literalmente "main", esta função será o ponto inicial onde o programa irá iniciar na execução.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	return 0;
}
```

Funções são partes do código reutilizáveis que terão um conjunto de instruções que podem ou não ser retornados. Um exemplo de função que imprime "Hello World" quando chamado:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	sayHello();
	return 0;
}

void sayHello() {
	printf("Hello World!\n");
}
```

A melhor parte de utilizar uma função é a sua reutilização e retornos diversos. Por exemplo:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	sayHello("Marcos", 28);
	sayHello("André", 19);
	sayHello("Maria", 27);
	sayHello("Julia", 35);
	return 0;
}

void sayHello(char name[], int age) {
	printf("Hello %s, you are %d%!\n", name, age);
}
```

**O código acima exibirá:**

> Hello Marcos, you are 28.
> Hello André, you are 19.
> Hello Maria, you are 27.
> Hello Julia, you are 35.

Dentro dos parênteses estará os "parâmetros", que são os valores que podem ser recebidos e utilizados dentro da função. São declarados de forma parecida como se declaram variáveis em C.

## Retorno de funções
Funções podem retornar valores depois de executadas, assim, é possível utilizar esses valores em um fluxo. Por exemplo:

```c
#include <stdio.h>
#include <stdlib.h>

double cube(num) {
	return num * num * num;
}
int main() {
	double userNum;
	scanf("%f", &userNum);
	printf("%f cubed equals %f", userNum, cube(userNum));
	return 0;
}
```
# Ponteiros
Ponteiros são tipos de dados, como int, double, char, etc. Um ponteiro armazena o endereço físico na memória, normalmente em hexadecimal.

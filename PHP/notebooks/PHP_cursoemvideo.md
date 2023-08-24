# Estudos PHP

# Curso em Vídeo

[Plataforma Curso em Vídeo](https://www.cursoemvideo.com/curso/curso-de-php-moderno-modulo-01/aulas/modulo-01-8/modulos/melhores-extensoes-para-vs-code/)

## Módulo 01

### Começa aqui seu curso de PHP moderno

...

### Esse curso de PHP serve para mim?

...

### Lista TOP 6 livros PHP

- ["PHP - Documentação" (Gratuito)](https://www.php.net/docs.php)
- "Aprendendo PHP - Introdução amigável à linguagem mais popular da internet, David Sklar, Novatec"
- "Programming PHP - Creating Dynamic Web Pages - O'Reilly."
- "Learning PHP 8 - Using MySQL, JavaScript, CSS3 and HTML5, Steve Pretyman, Apress"
- "PHP 8 Quick Scripting Reference - A Pocket Guide to PHP Web Scripting, Mikael Olisson, Apress"
- "PHP & MySQL - Server-side web development, Jon Duckett"

### A evolução do PHP

[Vídeo](https://youtu.be/TwNmvk-F7E8)

Surgiu em 1994 por Rasmus Lerdorf, nascido na Groelândia. No Canadá, colaborava do Apache e MySQL. Tinha a ideia de criar uma ferramenta simples de contar usuários, mas foi evoluindo com o tempo. Em 1995, lançou a 1.0, a Personal HomePage Tools (PHP Tools), fortemente inspirado em Perl e C, as linguagens que Rasmus gostava e dominava, mas mudou para "Form Interpreter" por causa de um recurso de manipulação de formulários, depois mudou de novo para "Personal Homepage Constructor Kit". Em 1996 lançou o PHP 2.0, PHP/FI (PHP Form Interpreter) e tornou Open Source. Em 1997, surgiu no Israel Institute of Technology, Andi Gutmans e Zeev Suraski ao tentar criar um software de loja, tiveram contato com projeto PHP e viram potencial na ferramenta, virando grandes colaboradores da linguagem, aí sim, se tornou uma linguagem e não apenas uma ferramenta, em 1998, lançou o PHP3, também mudou o significado da sua sigla, de "Personal Home Page" para "PHP: Hypertext Preprocessor" (um acrônimo recursivo), também contou com outros colaboradores, como o Colin Viebrock e Vincent Pontier, estes criaram a logo do PHP e seu mascote, o elefante. Em 1999, Zeev e Andi criaram uma empresa com seus nomes, chamada de "Zend", que utiliza e contribui muito com o desenvolvimento da linguagem, com PHP4 para frente.

### Por que um elefante é o mascote do PHP?

#### Por que um elefante?

![PHP Logo](../images/php-elephant.jpg)

Foi criado por Vincent Pontier, o nome do mascote faz referência a linguagem e uma brincadeira com nome "elePHPant". A sigla "PHP" parece um elefante e daí que surgiu a ideia. 

### As versões do PHP e seus recursos

> PHP7 e PHP8 houve uma mudança enorme de performance de processamento.

- PHP 1.0 (1995)
  
  - Personal Home Page
  - Funcionalidades simples para um site básico
  - Não tinha características de linguagem em si

- PHP 2.0 (1997)
  
  - Oficialmente nomeados PHP/FI 2.0
  - Linguagem standalone não oficializada
  - Recursos limitados

- PHP 3.0 (1998)
  
  - Primeira linguagem colaborativa e Open Source
  - Características mais relacionadas a uma linguagem
  - Extension API

- PHP 4.0 (2000)
  
  - Zend Engine 1.0
  - Melhoria de performance
  - Aumento de modularização
  - Uso de super globais ```$_GET, $_POST, $_SESSION```, etc

- PHP 5.0 (2004)
  
  - Zend Engine 2.0
  - Primeira versão com Orientação a Objetos (POO)
  - PHP Data Objects (PDO)
  - Operador de exponenciação
  - Suporte a JSON
  - Namespaces, closures, garbage collection, exceptions handling.
  - Novo depurador (phpdbg)
  - Apesar das várias melhorias e a qual ajudou a popularizar a linguagem de forma mais ampla, teve também muitos problemas e foi responsável por talvez o preconceito com a linguagem.

- PHP 6.0 (2005) Não lançado
  
  - Aumento da segurança e performance
  - Suporte nativo a Unicode
  - Até existiram algumas versões de teste, mas nunca recebeu uma versão oficial.
  - Algumas atulizações foram sendo implementadas por cima no PHP 5, o que gerou muitos problemas.

- PHP 7.0 (2015)
  
  - Zend Engine 3.0
  - Performance até 9x maior que a última versão anterior
  - Escape de códigos Unicode
  - Operador null coalescing ??
  - Declaração escalar
  - Operador spaceship <=>
  - Classes anônimas
  - Excessões mais modernas
  - Retorno de void
  - Libsodium
  - Foreign function interface

- PHP 8.0 (2020)
  
  - Zend Engine 4.0
  - Just-In-Time compilation (CPU Bound)
  - Locale-independent number convertions
  - Named arguments
  - Expressão match
  - Operador nullsafe
  - Enumerations
  - Readonly properties
  - Fibers

#### Frases que vemos por aí

- "PHP é ultrapassado"
- "PHP é lento"
- "PHP é limitado"
- "PHP é só para amadores"
- "PHP não tem segurança"

O PHP mudou bastante desde o seu surgimento, é uma ótima ferramenta.

### O PHP vai morrer? Vale a pena estudar PHP?

Todas as linguagens e até nós mesmos estamos "morrendo". Mas isso não pode impedir de aprender e utilizar as linguagens.

> "Nunca houve intenção de escrever uma linguagem de programação [...] Eu não tenho absolutamente nenhuma ideia de como escrever uma linguagem de programação, só continuo adicionando coisas que acho lógicas." - Rasmus, em 1994, antes da colaboração open source.

[Estatísticas de uso em Buildwith](https://builtwith.com/)

[Estatísticas w3techs](https://w3techs.com/)

#### PHP é ruim?

É injusto comparar com suas versões anteriores. É como comparar o **Microsoft Windows Milenium Edition** com o **Microsoft Windows 11**, houve uma evolução gigantesca.

### Como funciona o PHP?

PHP é uma ferramenta que roda em servidor.

- **client-side (lado do cliente)**: O cliente faz uma requisição para o servidor e o servidor envia uma cópia dos arquivos para o cliente.
- **server-side (lado do servidor**): O cliente faz a requisição para o servidor e o servidor processa os arquivos e envia o resultado para o cliente.

Só PHP é server-side? Não. Tem o **Microsoft .NET**, **Pearl**, **Java (JSP)**, **JavaScript (Node, Deno, etc)**, **Python (Jango)**, **Ruby (Ruby on rails)**.

### É possível criar tudo em PHP?

Nenhuma linguagem é para tudo. Há linguagens especializadas em certas áreas e funciona muito bem nesta.

Uma parafusadeira serve para parafusar e desparafusar. Serve para acoplar uma broca para furadeira, mas não é tão bom quanto uma furadeira. É possível também acoplar uma lixa, mas não é tão bom quanto algo utilizado para isso.

#### O que criar com PHP?

- Site pessoal
- Loja Online
- Plataforma de EAD

#### O que pode funcionar, mas é gambiarra

- Aplicativo standalone com janela
- Jogos online e offline
- Aplicativos para dispositivos móveis

Linguagens são ferramentas. Nem toda ferramenta serve para resolver tudo.

### Como transformar seu computador em servidor PHP

#### O que precisa?

**Cliente**:

- Navegador web
- Editor de Códigos

**Servidor**:

- Servidor Apache
- Banco de Dados MySQL
- Interpretador PHP

**Soluções AMP (Apache, MySQL, PHP)**:

- LAMP (Linux);
- WAMP (Windows);
- MAMP (Mac OS);
- XAMPP (Funciona nos três);

Há também alternativas ao XAMPP, como o WampServer, Laragon, MAMP, AMPPS, EasyPHP.

### É possível aprender PHP no smartphone

...

### Seu servidor PHP no Windows

...

### Seu servidor PHP no Linux

[Site oficial](https://www.apachefriends.org/)

O gerenciador XAMPP está em /opt/lampp/manager-linux-x64.run

### Seu servidor PHP no Mac

...

### Configurações importantes para VS Code

- Autosave [onWindowChange]

- Editor: World Wrap [on]

### Melhores extensões para VS Code (Sugestões)

- [**"Portuguese (Brazil) Language Pack for Visual Studio Code"**](https://marketplace.visualstudio.com/items?itemName=MS-CEINTL.vscode-language-pack-pt-BR), Microsoft: Pacote com tradução do Visual Studio Code para português brasileiro, oficial da Microsoft.

- [**PHP Intelephense**](https://marketplace.visualstudio.com/items?itemName=bmewburn.vscode-intelephense-client), Ben Mewburn: Intelisense para a linguagem PHP.

- [**Format HTML in PHP**](https://marketplace.visualstudio.com/items?itemName=rifi2k.format-html-in-php), rifi2k: habilita a formatação de HTML em arquivos .php. Pode ser que não seja mais necessário no futuro, pois está sendo implementado no VS Code.

- [**PHP Awesome Snippets**](https://marketplace.visualstudio.com/items?itemName=hakcorp.php-awesome-snippets), HakCorp: Sugere trechos de código PHP.

### Primeiro programa em PHP

#### Ex001

```php
<!-- Antigamente utilizava, não funciona na versão 7+ -->
<script language="php"></script>

<!-- Ou ASP tags -->
<% %>

<!-- Atualmente utiliza o super tag -->
<?php
    echo "Texto aqui";
    print "Texto aqui";
?>

<!-- Também funciona com short open tag (precisa habilitar) -->
<?= ?>
```

**Unicode:** \u{codigounicodedoemoji}

#### Ex001

**Ver informações do PHP:**

```php
<?php
    phpinfo();
?>
```

### O PHP por dentro

#### Ex002

- Concatenação com "."

- Função "date()" para obter data e horário do servidor. É preciso configurar a timezone. Utilizar "date_default_timezone_set("")" para setar a timezone.

- O código é processado no servidor e o resultado é enviado ao cliente.

### Como configurar o php.ini

O "php.ini" é um arquivo de configurações para o PHP. No linux, está em "/opt/lampp/etc/php.ini". 

- **display_errors**: Define se os erros serão visíveis.

- **short_open_tag**: Define se as short open tags irão funcionar.

### Variáveis e constantes em PHP

Variáveis são valores que mudam, já constantes são que se mantém. Esses valores são armazenados e endereçados na memória, normalmente volátil, como a memória RAM.

Variáveis podem mudar ao decorrer do programa.

```php
// Variáveis simples
$nome = "Nome";
$sobrenome = "Sobrenome";
echo "Muito prazer, $nome $sobrenome!";
```

Constantes não mudam.

```php
// Constante
// Constantes não usam cifrão "$"
const PAIS = "Brasil";
echo "Você mora no " . PAIS;
```

Neste caso, se tentar mudar o valor da constante ele apresentará um erro.

As variáveis e constantes serão guardadas na memória do servidor, onde o PHP está sendo executado.

#### Regras de nome identificadores

1. Variáveis sempre começam com o **símbolo $** e não admitem espaços;

2. O segundo caractere pode ser **letra** ou o **símbolo _**;

3. Aceita caracteres **[a-z]**, **[A-Z]**, **[0-9]** e **[_]**;

4. Aceita caracteres da tabela **ASCII** a partir de **128**;

5. Aceita caracteres acentuados como **á**, **õ**, **ç**;

6. A linguagem é **case sensitive** em relação aos nomes;

7. Nomes especiais como $this não podem ser usados, pois são reservados;

#### Recomendações para nomes

1) Tente dar nomes **claros** e de **fácil** identificação;

2) Evite nomes muito **curtos** ou muito **longos**;

3) Defina um **padrão** e siga em todo o projeto;

4) Para **variáveis**, dê preferência a letras **minúculas**;

5) Para **constantes**, dê preferência a letras **maiúsculas**;

6) Use **camelCase** para métodos e atributos;

7) Use **SNAKE_CASE** para nomear constantes;

```php
$nomeCompletoCliente = "Camel Case";
$telefone_contato_fornecedor = "Snake Case";
$nomecursosuperior = "Confuso e Não Recomendado Case";
```

### Tipos primitivos do PHP

PHP é uma linguagem fracamente tipada.

- "RJ" (String)

- 3.1415 (Float ou Double)

- 17 (Número Inteiro)

- true (Booleano)

- "" (String)

- -19 (Número Inteiro)

- "false" (String)

- 0x1A (Número Inteiro Hexadecimal)

- 3e2  (Número Float ou Double)

- "1024" (String)

**<u>Tipos primitivos:</u>**

- **<u>Escalares</u>**:
  
  - **String:** Sequências de letras, números e símbolos, sempre representadas entre aspas. Exemplos: "Olá", "1558", "Teste"
  
  - **Int** ou **Integer**: Um valor numérico inteiro, aquele que vem sem a parte decimal. **Exemplos**: 85, 90, 25, -19
  
  - **Float**, **double** ou **real**: Um valor numérico Real, que vem com a parte decimal, depois do ponto flutuante. A palavra Real deixou de existir a partir da versão 7.4 do PHP. **Exemplos**: 85.9
  
  - **Bool** ou **boolean**: Um valor lógico ou Booleano, que aceita apenas os valores verdadeiro ou falso (**true** ou **false**). **Exemplos**: true, false.

- **<u>Compostos</u>**:
  
  - Array:
  
  - Object:

- **<u>Especiais</u>**:
  
  - Null:
  
  - Resource:
  
  - Callabe:
  
  - Mixed: Representa todos os tipos primitivos. Surgiu a partir da versão 8.0 do PHP.

**<u>Forçar tipos</u>**:

```php
// Força inteiro (Coerção)
$num = (int) 3e4; 
$num = (integer) 3e4;
var_dump($num);

$num = (int) "950";
var_dump($num);

// Faz considerar como Float.
$num = (float) "950";
var_dump($num);
```

```php
$valorFalso = false;
$valorVerdadeiro = true;
print "O valor verdadeiro é $valorVerdadeiro e falso é $valorFalso"
```

### Manipulação de strings com PHP

#### Strings em PHP

- **<u>Double Quoted (Aspas duplas)</u>**: Existe a interpretação do conteúdo da string e consegue fazer interpolação. Exemplos: "Curso", "PHP \u{1F418" (o unicode será interpretado).

- **<u>Single Quoted (Aspas simples)</u>**: Não interpreta o conteúdo da string, mantém a string literal.

- **<u>Heredoc</u>**: Interpreta literalmente tudo o que digitar, incluindo tabulações, quebras de linha, unicode, etc;

- **<u>Nowdoc</u>**: Semelhante ao Heredoc, só que o nome de início do bloco é com aspas simples. Não interpreta variáveis nem unicode;

```php
$nome = "João";
echo "Olá $nome! ";
echo 'Olá $nome!';
```

<u>O resultado seria algo como</u>: "Olá João! Olá $nome";

Concatenação de strings:

```php
echo "Curso de " . "PHP"
```

<u>Resultado será:</u> "Curso de PHP".

É possível concatenar CONSTANTES com o operador de concatenação, pois ele não interpreta a constante por não ter "$". 

```php
const BANDEIRA = "Brasil";
echo "Bandeira BRASIL";
echo "Bandeira " . BRASIL;
```

```php
$nome = 'Rodrigo';
$snome = 'Nogueira';

// Errado
echo "$nome "Minotauro" $snome";
echo '$nom "Minotauro" $snome';

// Certo
// Sequẽncia de escape
echo "$nome \"Minotauro\" $snome";
```

Escape Sequences (Sequências de Escape):

- \n Nova Linha

- \t Tabulação horizontal

- \\\ Barra invertida

- \\$ Sinal de cifrão

- \u{} Codepoint Unicode

**Obs:** No caso das aspas simples, a única sequência de escape permitida é a própria aspas simples.

Heredoc

```php
$curso = "PHP";
$ano = date('Y');
echo <<< FRASE
    Estou estudando
        $curso em $ano
FRASE;
```

Nowdoc:

```php
$curso = "PHP";
$ano = date('Y');
echo <<< 'FRASE'
    Estou estudando
        $curso em $ano
FRASE;
```

### Obtendo dados de formulários com PHP (parte 1)

**Formulários HTML**

**Obs**: No PHP não pode esquecer do método de envio (method) e a ação, onde será enviado (action).

### Obtendo dados de formulários com PHP (parte 2)

```php
// Super Global

// Pega as requisições GET;
var_dump($_GET);

// Pega as requisições POST;
var_dump($_POST);


// Junção de $_GET, $_POST e $_COOKIES
var_dump($_REQUEST);
```

**<u>Operador de coalescência nula (só disponível no PHP7+)</u>**:

```php
// Caso não tenha valor, irá utilizar o valor da direita.
$nome = $_GET["nome"] ?? "sem nome";
```

### Expressões Aritméticas com PHP

```php
$res = 5 + 2 / 2;
echo $res // 6
```

**<u>Ordem de precedência</u>**

```php
0) ()
1) **
2) * / %
3) + -

Priorizar com par
```



### Funções Aritméticas do PHP

```php
// abs() Valor Absoluto (sem o sinal)
echo abs(-2000);

// base_convert(valor, baseatual, basealvo) // Conversor de bases.
echo base_convert(254, 10, 8);
echo base_convert(254, 2, 10);

// ceil() arredonda para baixo, floor()  arredonda para cima, round() arredonda por aritmética.

// hypot() calcula hipotenusa.

// intdiv() divisão inteira.
echo intdiv(5, 2);

// min() valor mínimo, max() valor máximo
echo min(3, 8, 4, 5, 9);
echo max(3, 8, 4, 9, 7);

// pi() valor de pi.
echo pi();

// pow(base, expoente) Potência
// Perde a ordem de precedência.
echo pow(5, 2); // 25

// sin() seno, cos() cosseno, tan() tangente.

// sqrt(raiz) calcula raiz quadrada. 81 ** (1/2)
echo sqrt(81);
```

### Operadores Aritméticos do PHP

```php
echo 2 + 2 = 4; // 4
echo "2" + "2"; // 4. Diferente do javascript, o "" não faz concatenação, ele converte para número e calcula o resultado. PHP 7 ou menor tenta achar um valor e se não tiver numérico considera int(0).
```

Operadores Aritméticos

```php
// + Adição
// - Subtração
// * multiplicação
// / Divisão real
// % Módulo/Resto da divisão inteira
// ** Exponenciação
echo 5 + 2; // 7
echo 5 - 2; // 3
echo 5 * 2; //10
echo 5 / 2; // 2.5
echo 5 % 2; // 1
echo 5 ** 2; // 25
```

O operador de exponenciação só passou a existir a partir da versão 5.2 do PHP.

### Cinco desafios PHP para iniciantes

1 - Sucessor e antecessor: Informar um número e mostrar o resultado de seu sucessor e o seu antecessor;
2 - Trabalhando com números aleatórios: Criar um gerador de números aleatórios, que gera um número entre 0 e 100.
3 - Conversor de moedas v1.0: Pergunta quantos R$ o usuário tem na carteira e mostrar quantos dólares. Cotação fixa R$5,22.
4 - Conversor de moedas v2.0: O mesmo que o 1.0, mas consultando uma API real do banco central do brasil.
5 - Analisador de número real: Analisa o número real e separa e mostra sua parte inteira e depois sua parte fracionária.

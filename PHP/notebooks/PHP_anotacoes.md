**Entrar no servidor, pasta de exercícios:**

[Entrar aqui](http://localhost/EstudoPHP)

# Handbook

## Estrutura básica

```php
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <!-- Arquivo nome.php -->
    <?php 
        // Código PHP aqui.
    ?>
</body>
</html>
```

## Mostrar valor na tela

```php
// Echo é mais utilizado.
echo "Valor que irá ser exibido";
print "Valor que ir"
```

## Variáveis e constantes

### Regras de nome identificadores

1) Variáveis sempre começam com o **símbolo $** e não admitem espaços;

2) O segundo caractere pode ser **letra** ou o **símbolo _**;

3) Aceita caracteres **[a-z]**, **[A-Z]**, **[0-9]** e **[_]**;

4) Aceita caracteres da tabela **ASCII** a partir de **128**;

5) Aceita caracteres acentuados como **á**, **õ**, **ç**;

6) A linguagem é **case sensitive** em relação aos nomes;

7) Nomes especiais como $this não podem ser usados, pois são reservados;

### Variáveis

```php
$sobrenome = "Bastos";
$idade = "22";
$numero = 25;
$incremento = $numero + 1; 
```

### Constantes

```php
const IDENTIFICADOR = "A8BOIQMDA5N4SDNSDA18";
const AUTENTICADO = false;
const USERNUMBER = 158;
```

### Coersão

```php
// Força inteiro (Coerção)
$num = (int) 3e4; 
$num = (integer) 3e4;
$num = (int) "950"

// Faz considerar como Float.
$num = (float) "950";
var_dump($num);
```

### Strings

Como funciona a concatenação:

```php
echo "Este é um texto de teste " . "e esta é a segunda parte dele."
```
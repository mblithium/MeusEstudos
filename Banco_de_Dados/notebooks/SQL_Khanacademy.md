# Khan Academy

Link: [Bem-vindo ao SQL (vídeo) | Khan Academy](https://pt.khanacademy.org/computing/computer-programming/sql/sql-basics/v/welcome-to-sql)

## Bem-vindo ao SQL

Linguagem SQL (Structured Query Language) é uma linguagem de banco de dados relacional.

**Tabela:** Linha representa um item e coluna as propriedades daquele item.

## Criando uma tabela e inserindo dados

- **CREATE TABLE**: Cria uma tabela, o argumento é seu nome logo a direita.

- **INSERT INTO**: Insere na tabela algum valor.

- **SELECT \* FROM**: Seleciona tudo (asteriscos) de tabela. 

```sql
CREATE TABLE groceries (id INTEGER PRIMARY KEY, name TEXT, quantity INTEGER);


INSERT INTO groceries VALUES (1, "Bananas", 4);
INSERT INTO groceries VALUES (2, "Peanut Butter", 1);
INSERT INTO groceries VALUES (3, "Dark chocolate bars", 2);

SELECT * FROM groceries
```

**Alguns tipos de dados:**

- **INTEGER**: Número inteiro

- **TEXT**: Uma cadeia de caracteres, texto.

## Exercício

Quais são os seus livros favoritos? Você pode criar uma tabela no 
banco de dados e guardá-los lá! Nesse primeiro passo, crie uma tabela 
para guardar a sua lista de livros. Esta deverá conter colunas para `id`, `name`, e `rating` (identificador, nome e avaliação - é preciso que você use os nomes em 
inglês para que o programa possa verificar se está tudo ok).

```sql
CREATE TABLE books (id INTEGER PRIMARY KEY, name TEXT, rating INTEGER);

INSERT INTO books VALUES (1, "Alice no País das Maravilhas (Lewis Carrol)", 5);

INSERT INTO books VALUES (2, "Coraline (Neil Gaiman)", 4);

INSERT INTO books VALUES (3, "O Incrível Livro de Hipnotismo de Molly Moon (Georgia Byng)", 4);
```

## Consultar a tabela

- **ORDER BY**: Ordena a tabela do menor para o maior.

- **WHERE**: Filtra com uma condição específica.

```sql
CREATE TABLE groceries (id INTEGER PRIMARY KEY, name TEXT, quantity INTEGER, aisle INTEGER);
INSERT INTO groceries VALUES (1, "Bananas", 4, 7);
INSERT INTO groceries VALUES(2, "Peanut Butter", 1, 2);
INSERT INTO groceries VALUES(3, "Dark Chocolate Bars", 2, 2);
INSERT INTO groceries VALUES(4, "Ice cream", 1, 12);
INSERT INTO groceries VALUES(5, "Cherries", 6, 2);
INSERT INTO groceries VALUES(6, "Chocolate syrup", 1, 4);

SELECT * FROM groceries WHERE aisle > 5 ORDER BY aisle;
```

## Agregando dados

## O que é Banco de Dados

[Modelagem de Dados - Conceitos de Bancos de Dados - YouTube](https://youtu.be/Q_KTYFgvu1s)

São uma organização de dados para serem processados, normalmente salvos em um arquivo de banco de dados, que é lido e manipulado por um SGDB (Data Base Management System).



# Diferença de Dados e Informação

Os **dados** são fatos que podem ser armazenados em algum lugar para acesso posterior, não há nenhuma utilização prática aqui, são dados puros e sem um contexto definido.

- Nome de algum cliente

- CPF

- Data de nascimento

Já **Informação** são os dados processados e organizados para um determinado fim, normalmente se utilizando dos dados armazenados.

- Uma lista dos primeiros 10 clientes registrados por ordem.

- Clientes que fazem aniversário no mês atual.



# Metadados

Dados sobre outros dados, que são dados para facilitar a identificação de dados no banco de dados. Mantidos nos chamados "Dicionário de Dados" ou "Catálogo de Dados".



# Modelos

[Modelagem de Dados - O Modelo Relacional - Introdução - YouTube](https://www.youtube.com/watch?v=hGstS10kCPM&list=PLucm8g_ezqNoNHU8tjVeHmRGBFnjDIlxD&index=2))

Um Modelo é uma representação que ajuda a organizar os conceitos que serão aplicados no banco de dados real. O conceito de Modelagem de Dados é o processo de criação destes modelos.

### Tipos de Modelos

- Hierárquico

- Rede

- Relacional

- Orientado a Objeto

- Não-Relacional



## Modelo Entidade-Relacionamento

O Modelo Entidade-Relacionamento (MER) cria uma ilustração das entidades e os relacionamentos entre elas.

- **Entidades**: São uma representação de um conjunto de informações sobre determinado conceito. Por exemplo: Clientes, Funcionários, Pedidos e Produtos.

- **Atributo**: Algo que descreve ou qualifica uma entidade. Podem ser obrigatórios ou opcionais. Exemplo: Entidade Cliente possui atributos que descrevem seu nome, endereço, telefone, número de identificação, entre outros.

- **Relacionamento**: Trata-se de uma associação nomeada entre entidades, com um grau de associação. Por exemplo, clientes podem estar associados a pedidos.



## Convenções

- **Entidades**: Nome único, singular; em caixa alta;

- **Atributos**: Nome no singular; caixa baixa; Atributos obrigatórios marcados com '*'; identificador único marcado com '#'.

- **Relacionamento**: nome identificador (verbo); opcionalidade ("deve ser" ou "pode ser"); grau ou cardinalidade ('um e apenas um ', ou 'um ou mais').

**Cardinalidade**: significa que cada entidade pode ser ou deve em relação de forma uma e apenas uma ou uma ou mais com outra entidade.





## Identificador único (UID)

Um identificador único é qualquer combinação de atributos ou relacionamentos que são usados para distinguir ocorrências de uma entidade. Cada ocorrência de entidade de ser identificável de forma exclusiva.

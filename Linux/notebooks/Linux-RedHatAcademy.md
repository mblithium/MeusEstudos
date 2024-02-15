# Red Hat Academy
Minhas anotações dos cursos da RedHat Academy.

# Distribuições linux e a Red Hat

- **Fedora**: é uma distribuição comunitária linux patrocinada pela Red Hat, que com pacotes mais recentes, assim, esta distribuição prioriza inovações e excelência acima da estabilidade a longo prazo. É mais indicado para sistemas Desktop.
- **CentOS**: 

# Acesso à linha de comando

O usuário comum é identificado na string do shell como caráctere de dólar ($) e quando é um super-usuário, é identificado como (#).

```bash
[user@host ~]$
[user@host ~]#
```

O "~" é o diretório atual onde o script irá executar ações.

# Consoles virtuais

Os consoles virtuais são várias instâncias de console que podem ser utilizadas para realizar o login em um usuário e executar as ações pretendidas. Utiliza-se o atalho CTRL + ALT + (F1 até F6), do tty1 até tty6 respectivamente. 

# Login em sistemas remotos

Utilizando o OpenSSH é possível logar em um computador na rede com o comando "ssh". A conexão pelo SSH (Secure Shell) é criptografada para evitar qualquer interceptação na rede.

```bash
ssh remoteuser@remotehost
```

O programa irá solicitar o a senha de login da máquina de destino para realizar a conexão. Mas também é possível logar usando uma chave pública. 

```bash
ssh -i mykeyssh.pem remoteuser@remotehost
```

O "i" especifica uma chave para utilizar, que precisa estar definida como apenas o proprietário com acesso. A primeira conexão com a máquina pede que confirme a autenticidade do host, basta selecionar "yes".

Para sair da sessão remota basta usar "exit" ou a combinação CTRL + D.

# Ver nome de usuário atual

"Emite o nome do usuário associado à identificação de usuário efetivo (uid)
atual. O mesmo que id -un."
```bash
whoami
```

# Criar e alterar password do usuário atual

```bash
passwd
```

Irá perguntar a senha atual, a nova senha e a confirmação da nova senha.

# Criar usuário

```bash
sudo useradd [--opções] [nomedousuário]
```

# Vários comandos em uma linha

```bash
comando1 ; commando2
```

- "whoami": mostra o nome do usuário atual logado.
- "date": mostra a data e hora atual. Usando o argumento "+%R" pega somente a hora e o "+%x" somente a data.
- "file [caminho do arquivo]": verifica o tipo de arquivo analisada usando o header do arquivo.
- "cat": lê o conteúdo de um arquivo, a saída padrão é o terminal, mas pode ser redirecionado para um arquivo.
- "head": exibe o começo de um arquivo de texto, por padrão 10 linhas são mostradas e podem ser configuradas com "-n".
- "tail": exibe o fim de um arquivo de texto, por padrão 10 linhas são mostradas e podem ser configuradas com "-n".
- "less": exibe as páginas de um arquivo de texto navegando para cima ou para baixo com teclas de seta para cima (UpArrow) e seta para baixo (DownArrow).
- "wc": conta as linhas, palavras e caracteres.
- "history": mostra uma lista de histórico de comandos executados. O "!" é um metacaractere que expande para a string ou número corresponte no histórico. Por exemplo, o número 10028 no histórico, usando "!10028" irá ser substituído pelo seu valor de comando do histórico.

# Edição da linha de comando

<table>
<tr>
    <th>Atalho</th>
    <th>Descriçao</th>
</tr>
<tr>
    <td>CTRL+A</td>
    <td>Ir para o início da linha de comando.</td>
</tr>
<tr>
    <td>CTRL+E</td>
    <td>Ir para o final da linha de comando</td>
</tr>
<tr>
    <td>CTRL+U</td>
    <td>Limpar do cursor até o início da linha de comando</td>
</tr>
<tr>
    <td>CTRL+K</td>
    <td>Limpar do cursor até o final da linha de comando.</td>
</tr>
<tr>
    <td>CTRL+LeftArrow</td>
    <td>Ir para o início da palavra anterior na linha de comando</td>
</tr>
<tr>
    <td>CTRL+RightArrow</td>
    <td>Ir para o final da próxima palavra na linha de comando</td>
</tr>
<tr>
    <td>CTRL+R</td>
    <td>Pesquisa um padrão na lista de histórico de comandos.</td>
</tr>
</table>

# Tabela de diretórios significativos

<table>
<tr>
    <th>Local</th>
    <th>Finalidade</th>
</tr>
<tr>
    <td>/boot</td>
    <td>Arquivos que fazem parte do processo de boot do sistema.</td>
</tr>
<tr>
    <td>/dev</td>
    <td>Arquivos de dispositivos especiais usados pelo sistema para acessar o hardware.</td>
</tr>
<tr>
    <td>/etc</td>
    <td>Arquivos de configuração específicos do sistema.</td>
</tr>
<tr>
    <td>/home</td>
    <td>O diretório pessoal, onde usuários regulares armazenam seus dados e arquivos de configuração.</td>
</tr>
<tr>
    <td>/root</td>
    <td>Diretório pessoal do superusuário administrativo: root.</td>
</tr>
<tr>
    <td>/run</td>
    <td>Dados de tempo de execução de processos iniciados desde o último boot. Esses dados incluem arquivos de ID de processos e arquivos de bloqueio. O conteúdo desse diretório é recriado na reinicialização. Este diretório consolida os diretórios /var/run e /var/lock de versões anteriores do Red Hat Enterprise Linux.</td>
</tr>
<tr>
    <td>/tmp</td>
    <td>Um espaço gravável para arquivos temporários. Arquivos não acessados, alterados nem modificados por 10 dias são excluídos automaticamente desse diretório. O diretório /var/tmp também é um diretório temporário, no qual os arquivos que não tiverem sido acessados, alterados ou modificados por mais de 30 dias serão excluídos automaticamente.</td>
</tr>
<tr>
    <td>/usr</td>
    <td>Software instalado, bibliotecas compartilhadas, arquivos incluídos e dados de programas somente leitura. Subdiretórios significativos no diretório /usr incluem os seguintes comandos 
    /usr/bin: comandos de usuário
    /usr/sbin: comandos de administração do sistema
    /usr/local: software personalizado localmente.
    </td>
</tr>
<tr>
    <td>/var</td>
    <td>Dados variáveis específicos do sistema que devem persistir entre boots. Os arquivos que mudam de modo dinâmico; por exemplo, bancos de dados, diretórios de cache, arquivos de log, documentos com spool de impressora e conteúdo de sites podem ser encontrados em /var.</td>
</tr>
</table>

# Navegando pelos caminhos do sistema de arquivos

O comando PWD exibe o caminho completo do diretório de trabalho atual. 

```bash
pwd
```

Exemplo de saída: /home/user

Retorna para o diretório de trabalho anterior:

```bash
cd -
```

# Criação de links entre arquivos

```bash
ln newfile.txt /tmp/newfile-hlink2.txt
```
Os links físicos só podem ser usados para criar um link físico para arquivos regulares e só podem ser utilizados quando estiverem no mesmo *sistema de arquivos*.

Listar os links físicos e inodes:
```bash
ls -il
```

# Links simbólicos

Os links simbólicos podem vincular arquivos de diferentes sistemas de arquivos, além de apontar também para diretórios ou arquivos especiais, não apenas um arquivo comum. 


```bash
ln -s ~/newfile.txt /tmp/newfile-symlink.txt
```

O exemplo acima cria um link simbólico do arquivo "newfile.txt" do diretório do usuário com o nome "newfile-symlink.txt" em /tmp.

Ao apagar o arquivo que o link simbólico aponta, o link simbólico continua existindo como "link simbólico pendente". Uma direrença importante entre o físico e simbólico, é que se apagar o arquivo original e depois criar um novo arquivo com mesmo nome, ele continuará apontando para ele em um link simbólico, já no físico, caso crie um arquivo novo com o mesmo nome sem utilizar ln, ele não irá apontar para este arquivo.

# Expansões de linha de comando

São sequências e caracteres especiais que se expandem. 

<table>
    <tr>
        <th>Padrão</th>
        <th>Correspondências</th>
    </tr>
    <tr>
        <td>*</td>
        <td>Qualquer string com zero ou mais caracteres.</td>
    </tr>
    <tr>
        <td>?</td>
        <td>Qualquer caractere único.</td>
    </tr>
    <tr>
        <td>[abc...]</td>
        <td>Qualquer caractere na classe entre colchetes.</td>
    </tr>
    <tr>
        <td>[!abc...]</td>
        <td>Qualquer caractere que não esteja na classe entre colchetes.</td>
    </tr>
    <tr>
        <td>[^abc...]</td>
        <td>Qualquer caractere alfabético.</td>
    </tr>
    <tr>
        <td>[[:alpha:]]</td>
        <td>Qualquer caractere na classe entre colchetes.</td>
    </tr>
    <tr>
        <td>[[:lower:]]</td>
        <td>Qualquer caractere em minúsculas.</td>
    </tr>
    <tr>
        <td>[[:upper:]]</td>
        <td>Qualquer caractere em maiúsculas.</td>
    </tr>
    <tr>
        <td>[[:alnum:]]</td>
        <td>Qualquer caractere alfabético ou numérico.</td>
    </tr>
    <tr>
        <td>[[:punct:]]</td>
        <td>Qualquer caractere imprimível que não seja alfanumérico nem um espaço.</td>
    </tr>
    <tr>
        <td>[[:digit:]]</td>
        <td>Qualquer dígito único de 0 a 9.</td>
    </tr>
    <tr>
        <td>[[:space:]]</td>
        <td>Qualquer caractere de espaço em branco único, o que pode incluir tabulações, novas linhas, retornos de carro, avanços de página ou espaços.</td>
    </tr>
</table>
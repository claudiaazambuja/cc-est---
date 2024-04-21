1. Cliente vs Server

css + html + js  ------------ banco de dados


Protocolo HTTo

Método {REST}

--- base
Get
post
Put
Delete

# Modelos de Rede

## Modelo de duas camadas:   cliente e servidor, sendo função da primeira tratar a lógica do negócio e fazer a interface com o usuário, enquanto a segunda é responsável por tratar os dados

## Modelo de três camadas: foi incluída uma camada a mais, a camada de aplicação.


cliente => Representada pela aplicação instalada na máquina cliente. Era responsável pela interface com o usuário e passou a acessar o servidor de aplicação, perdendo o acesso direto ao servidor de dados.

aplicacao => servidor responsável pela lógica e pelas regras de negócio, assim como pelo controle de acesso ao servidor de dados.

Dados => Representada por um servidor responsável pelo armazenamento dos dados.

MVC = Model => View => Controller


## Modelo de quatro 

O grande avanço obtido nesse modelo foi tirar da máquina cliente a responsabilidade pela interface com o usuário


Server web > cliente > aplicações > dados

Apache, tomcat

Jboss, WIldFLy, GlassFish

# Comunicação no ambiente web

A comunicação, nesse ambiente, é feita sobre a internet, com o uso dos seus protocolos de comunicação, sendo o principal protocolo o HTTP (HyperText Transfer Protocol), que é um protocolo para transferência de hipertexto. Na imagem seguinte, podemos ver um exemplo de comunicação no ambiente web.


## O conceito de *interface* está ligado à área de Interação Humano-Computador (IHC)
## JS, CSS, HTML e PHP


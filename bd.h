#ifndef BD_H
#define BD_H

// Dados do visitante.
struct s_visitante
{
    char nome[100];
};

// Dados do ingresso.
struct s_ingresso
{
    char diaVisita[100];
    char tipo[20];
    int numero;
};

// Dados do tema da palestra.
struct s_tema
{
    char nome[100];
    char descricao[1000];
};

// Perguntas em forma de constantes, desta maneira as variáveis não têm armazenamento local.
static const char *perguntas[] = {
    "de uma nota de 1 a 5 para o tema da exposicao que acabou de ver sendo 1 ruim e 5 muito boa",
    "responda com sim ou nao se voce recomendaria essa exposicao para algum amigo",
    "responda com sim ou nao se voce retornaria para ver os outros temas de nossa exposicao",//linha de baixo: add temas
    "caso ja tenha visto nossas outras exposicoes qual voce mais gostou 1 2 3 ou 4? caso nao tenha visto outras responda 5",
    "de uma nota de 1 a 5 para a qualidade de nosso servico",
    "voce veio com sua familia (1) ou com seus amigos(2)?",
    "responda com sim ou nao se voce achou o preco do ingresso justo",
    "voce ja conhecia o tema da exposicao(1) ou foi seu primeiro contato(2) com esse assunto",
    "voce a estudante(1) pesquisador(2) ou visitante casual(3)",
    "responda com sim ou nao se voce e maior de idade?",
    NULL
};

#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "bd.h"

int main(void) {
    srand(time(NULL));

    unsigned int qntIng;
    int dVisita;

    struct s_visitante vis;

    printf("\nQuantidade de ingressos a serem comprados: ");
    scanf("%u", &qntIng);

    struct s_ingresso ing[qntIng];

    printf("\n\nNome do visitante: ");
    scanf("%s", vis.nome);

    for (unsigned int i = 0; i < qntIng; i++) {
        printf("\nInforme o dia da visita do ingresso %u \n'1' para segunda - 100 anos da semana de arte moderna\n'2' para quarta - 150 anos de Santos Dumont\n'3' para terca - Jogos olímpicos de Paris 2024\n'4' para domingo - Inteligência Artificial \n\nDigite o numero correspondende: ", i + 1);
        scanf("%i", &dVisita);
        if (dVisita == 1) {
            strcpy(ing[i].diaVisita, "segunda - tema da exposicao: 100 anos da semana de arte moderna");
        } else if (dVisita == 2) {
            strcpy(ing[i].diaVisita, "quarta - tema da exposicao: 150 anos de Santos Dumont");
        } else if (dVisita == 3) {
            strcpy(ing[i].diaVisita, "terca - tema da exposicao: Jogos Olimpicos de Paris 2024");
        } else if (dVisita == 4) {
            strcpy(ing[i].diaVisita, "domingo - tema da exposicao: Inteligencia Artificial");
        } else {
            printf("Por favor, respeite a sequência informada.\n");
            strcpy(ing[i].diaVisita, "Ingresso invalido.");
        }

        printf("\nInforme o tipo de visita do ingresso %u (inteira, meia ou isento): ", i + 1);
        scanf("%s", ing[i].tipo);

        ing[i].numero = rand();
        printf("\n\n\n\n");

    }

    for (unsigned int i = 0; i < qntIng; i++) {
        printf("Ticket numero: %d\n_________________________________________\nVisita: %s\nVisitante: %s\nTipo de ingresso: %s\n_________________________________________\n\n\n",
               ing[i].numero, ing[i].diaVisita, vis.nome, ing[i].tipo);
    }

    return 0;
}

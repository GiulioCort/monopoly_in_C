#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "dati.c"
#include "colori.h"

#define POS lista_giocatori[giocatore_attuale].posizione

int dado() {
    return (rand() % 6) + 1;
}

void richiesta_di_acquisto(int ind_strada, int giocatore_attuale) {
    // printf("\nVuoi aquistare ...")
}

void pagare_affitto_casa(int n_strada, int giocatore_attuale){
    printf("\nAffitto per %s di %d€ da pagare a %s", strade[n_strada].nome, strade[n_strada].affitto_1)
}

void imprevisto(int mazzo) {
    // Da fare
}

void inizio() {
    int n_giocatori;
    // printf("\nQuanti giocatori");
    // scanf();
    n_giocatori = 3; // Come prova

    for (int i = 1; i <= n_giocatori; i++){
        printf("\nInserisci nome giocatore >> ");
        scanf("%s", &lista_giocatori[i].nome);

        lista_giocatori[i].soldi = SOLDI_INIZIO;
    }
}

void turno(int giocatore_attuale) {
    if (lista_giocatori[giocatore_attuale].in_prigione) {
        // Da completare
    }
    else {
        int num_1 = dado();
        int num_2 = dado();

        int num_3 = num_1 + num_2;
        POS += num_3;
        if (POS >= N_CASELLE){
            POS -= N_CASELLE;
            printf("\nSei passato dal VIA! +200€");
            lista_giocatori[giocatore_attuale].soldi += 200;
        }

        switch (tabellone[POS].tipo) {
        case VAI_IN_PRIGIONE:
            lista_giocatori[giocatore_attuale].in_prigione = 1;
            printf("\nOra sei in prigione");
            break;
        case TASSA:
            lista_giocatori[giocatore_attuale].soldi -= tabellone[POS].valore;
            break;
        case PARCHEGGIO:
        case PRIGIONE:
        case PARTENZA:
            printf("\nNon succede niente");
            break;
        case IMPREVISTO:
            printf("\nPesca una carta");
            imprevisto(tabellone[POS].valore);
            break;
        case STRADA:
            if (strade[tabellone[POS].valore].proprietario == 0)
                richiesta_di_acquisto(tabellone[POS].valore, giocatore_attuale);
            else if (strade[tabellone[POS].valore].proprietario == giocatore_attuale){
                // altro
                printf("\nQuesta proprietà è tua");
            }
            else {
                pagare_affitto(tabellone[POS].valore, giocatore_attuale);
            }

        case STAZIONE:
        case SOCIETA:
            
        default:
            
            break;
        }
    }
}

int main() {
    srand(time(0));
    inizio();
    

    return 0;
}
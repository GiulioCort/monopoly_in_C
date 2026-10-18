#include <stdbool.h>

#define MAX_LEN 100

typedef enum {
    STRADA,
    STAZIONE,
    SOCIETA,
    IMPREVISTO,
    PRIGIONE,
    VAI_IN_PRIGIONE,
    TASSA,
    PARCHEGGIO,
    PARTENZA
} Tipo_di_caselle;

typedef enum  {
    MARRONE, AZZURRO, MAGENTA, ARANCIONE, ROSSO, GIALLO, VERDE, BLU
} Serie;

struct Strada {
    char nome[MAX_LEN];
    int costo;
    int affitti[6];     // Singolo, 1c, 2c, 3c, 4c, 1albergo
    int affitto_completo;
    int costo_casa;
    Serie colore;
    int proprietario;
    int n_case;         // 0-4 --> case; 5 = 1 albergo
};

struct Stazione {
    char nome[MAX_LEN];
    int proprietario;
};

struct Societa {
    char nome[MAX_LEN];
    int proprietario;
};

struct Casella {
    Tipo_di_caselle tipo;
    int valore;
};

typedef struct {
    char nome[MAX_LEN];
    int soldi;
    int posizione;
    int in_prigione;
    int carte_esci_gratis;
} Giocatore;
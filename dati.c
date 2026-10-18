#include "strutture.h"

#define N_CASELLE 40
#define N_STRADE 22
#define N_STAZIONI 4
#define N_SOCIETA 2

#define MAX_GIOCATORI 7     // [0] = banca
#define SOLDI_INIZIO 1500

struct Strada strade[N_STRADE] = {
    {"Vicolo Corto",             60,  2,  4,  10,  30,  90,  160,  250,  50,    MARRONE},
    {"Vicolo Stretto",           60,  4,  8,  20,  60,  180, 320,  450,  50,    MARRONE},
    {"Bastioni Gran Sasso",     100,  6, 12,  30,  90,  270, 400,  550,  50,    AZZURRO},
    {"Viale Monterosa",         100,  6, 12,  30,  90,  270, 400,  550,  50,    AZZURRO},
    {"Viale Vesuvio",           120,  8, 16,  40, 100,  300, 450,  600,  50,    AZZURRO},
    {"Via Accademia",           140, 10, 20,  50, 150,  450, 625,  750, 100,    MAGENTA},
    {"Corso Ateneo",            140, 10, 20,  50, 150,  450, 625,  750, 100,    MAGENTA},
    {"Piazza Università",       160, 12, 24,  60, 180,  500, 700,  900, 100,    MAGENTA},
    {"Via Verdi",               180, 14, 28,  70, 200,  550, 750,  950, 100,    ARANCIONE},
    {"Corso Raffaello",         180, 14, 28,  70, 200,  550, 750,  950, 100,    ARANCIONE},
    {"Piazza Dante",            200, 16, 32,  80, 220,  600, 800, 1000, 100,    ARANCIONE},
    {"Via Marco Polo",          220, 18, 36,  90, 250,  700, 875, 1050, 150,    ROSSO},
    {"Corso Magellano",         220, 18, 36,  90, 250,  700, 875, 1050, 150,    ROSSO},
    {"Largo Colombo",           240, 20, 40, 100, 300,  750, 925, 1100, 150,    ROSSO},
    {"Viale Costantino",        260, 22, 44, 110, 330,  800, 975, 1150, 150,    GIALLO},
    {"Viale Traiano",           260, 22, 44, 110, 330,  800, 975, 1150, 150,    GIALLO},
    {"Piazza Giulio Cesare",    280, 24, 48, 120, 360,  850, 1025, 1200, 150,   GIALLO},
    {"Via Roma",                300, 26, 52, 130, 390,  900, 1100, 1275, 200,   VERDE},
    {"Corso Impero",            300, 26, 52, 130, 390,  900, 1100, 1275, 200,   VERDE},
    {"Largo Augusto",           320, 28, 56, 150, 450, 1000, 1200, 1400, 200,   VERDE},
    {"Viale dei Giardini",      350, 35, 70, 175, 500, 1100, 1300, 1500, 200,   BLU},
    {"Piazza della Vittoria",   400, 50, 100, 200, 600, 1400, 1700, 2000, 200,  BLU}
};

struct Stazione lista_stazioni[N_STAZIONI] = {
    {"Stazione Sud"},
    {"Stazione Ovest"},
    {"Stazione Nord"},
    {"Stazione Est"}
};
int costo_stazione = 200;
int affitto_stazione[N_STAZIONI] = {25, 50, 100, 200};

struct Societa lista_societa[N_SOCIETA] = {
    {"Società Elettrica"},
    {"Società Idrica"}
};
int costo_societa = 150;

struct Casella tabellone[N_CASELLE] = {
    {PARTENZA},
    {STRADA, 0},
    {IMPREVISTO, 0},
    {STRADA, 1},
    {TASSA, 200},
    {STAZIONE, 0},
    {STRADA, 2},
    {IMPREVISTO, 1},
    {STRADA, 3},
    {STRADA, 4},
    {PRIGIONE},
    {STRADA, 5},
    {SOCIETA, 0},
    {STRADA, 6},
    {STRADA, 7},
    {STAZIONE, 1},
    {STRADA, 8},
    {IMPREVISTO, 0},
    {STRADA, 9},
    {STRADA, 10},
    {PARCHEGGIO},
    {STRADA, 11},
    {IMPREVISTO, 1},
    {STRADA, 12},
    {STRADA, 13},
    {STAZIONE, 2},
    {STRADA, 14},
    {STRADA, 15},
    {SOCIETA, 1},
    {STRADA, 16},
    {VAI_IN_PRIGIONE},
    {STRADA, 17},
    {STRADA, 18},
    {IMPREVISTO, 0},
    {STRADA, 19},
    {STAZIONE, 3},
    {IMPREVISTO, 1},
    {STRADA, 20},
    {TASSA, 100},
    {STRADA, 21}
};

Giocatore lista_giocatori[MAX_GIOCATORI];
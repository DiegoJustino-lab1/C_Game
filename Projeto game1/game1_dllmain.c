#include "game1_dll.h"
#include <stdio.h>

int lives = 3;
int level = 0;
int points = 0;
const int levels = 3;
int selected = 0;
const char *question[] = {
    "Quanto e a metade de 50?", 
    "Quanto e 2 + 2?", 
    "Qual a capital do Brasil?"
};
const char *options[][4] = {
    {"10", "25", "30", "50"},
    {"22", "5", "4", "12"},
    {"Sao Paulo", "Salvador", "Amazonia", "Brasilia"}
};

void description() {
    printf("Descrição do jogo...\n");
}

void reset() {
    lives = 3;
    level = 0;
    points = 0;
    selected = 0;
}

void update() {
    printf("Atualizando o jogo...\n");
}

void controller(int key, int button) {
    printf("Controlando o jogo...\n");
}
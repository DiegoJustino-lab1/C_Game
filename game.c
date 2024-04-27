// game1_dll.h
DLLIMPORT void description(void);
DLLIMPORT void reset(void);
DLLIMPORT void update(void);
DLLIMPORT void controller(int key, int button);

// game1_dllmain.c
#include "game1_dll.h"

int lives = 3;
int level = 0;
int points = 0;
const int levels = 3;
int selected = 0;
const char *question[] = {
    "Quanto e a metade de 50?", "Quanto e 2 + 2?", "Qual a capital do Brasil?"
};
const char *options[][4] = {
    {"10", "25", "30", "50"},
    {"22", "5", "4", "12"},
    {"Sao Paulo", "Salvador", "Amazonia", "Brasilia"}
};
const int correct[] = {1,2,3};

DLLIMPORT void description() {
    printf("** GAME 1 **\n\nAbsolute amazing game done by Teacher.\n\n");
}

DLLIMPORT void reset(void) {
    lives = 3;
    level = 0;
    selected = 0;
    points = 0;
}

DLLIMPORT void update(void) {
    if ((level >= levels) || (lives == 0)) {
        printf("Fim do jogo\n");
    } else {
        printf("PLAYER 1: %d vidas - %04d pontos\n\n", lives, points);
        printf("%s\n", question[level]);
        int i;
        for (i = 0; i < 4; i++) {
            printf("%c%d) %s\n", selected == (i)? '*' : ' ', i+1, options[level][i]);
        }
    }
}

DLLIMPORT void controller(int key, int button) {
    switch (key){
        case 1: // up
            selected -= (selected == 0)? -3 : 1; break;
        case 2: // down
            selected += (selected == 3)? -3 : 1; break;
    }
    if (key == 0 && button) {
        if (selected == correct[level]) {
            printf("ACERTOU!!!\n");
            level++;
            points += 100;
        } else {
            printf("ERROU!!!\n");
            lives--;
        }
        selected = 0;
    }
}

BOOL APIENTRY DllMain (HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    switch (reason) {
        case DLL_PROCESS_ATTACH:
            break;
        case DLL_PROCESS_DETACH:
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
    }
    /* Returns TRUE on success, FALSE on failure */
    return TRUE;
}
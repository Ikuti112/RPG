#ifndef GAME_H
#define GAME_H
#include <stdio.h>
#include <stdlib.h>
#include "getch.h"
#include "colors.h"
#include "menus.h"
typedef struct Character_s
{
char* name;
int gender;
int race;
int class;
}Character;
void showMap(int tab[5][5]);
void showInterface();
#endif
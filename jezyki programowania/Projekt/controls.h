#ifndef CONTROLS_H
#define CONTROLS_H
#include <stdio.h>
#include "getch.h"
#include "menus.h"
#include "game.h"
struct Menu_s;
int control_menu(struct Menu_s* menu, int button,int point);
void move(int tab[5][5], int zmienna);
#endif // CONTROLS_H
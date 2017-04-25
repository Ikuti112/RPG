#ifndef MENUS_H
#define MENUS_H
#include <stdio.h>
#include "colors.h"
#include "getch.h"
#include "controls.h"
typedef struct Menu_s
{
    char* Noninteractive[120];
    char* Interactive[120];
    int length_N;
    int length_I;
    struct Menu_s* Menus[20];
    int saveData[20];
    int tag;
    char* name;
}Menu;
void print_menu(Menu* menu,int point);
void print_menu2(Menu* menu,int point);
int Menu_Function(Menu* menu,int point);
Menu* Menu_Change(Menu* menu,int point);
#endif // MENUS_H

#ifndef GETCH_H
#define GETCH_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
int getch(void);
#endif //GETCH_H
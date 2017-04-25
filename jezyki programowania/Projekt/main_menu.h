#include <stdio.h>
#include "colors.h"
char* main_menu[]={"1.New Game","2.Load Game","3.Options","4.Credits","5.Close Game"};
int i;
void print_ascii_main_title(void){
  printf("MMMMMMMMM `MMMMMMMb. `MM'  6MMMMb/       `MMMMMMM       dM.     `MM\\     `M'MMMMMMMMMM       dM.      6MMMMb\\ `MM(     )M'\n");
 printf("MM      \\  MM    `Mb  MM  8P    YM        MM    \\      ,MMb      MMM\\     M /   MM   \\      ,MMb     6M'    `  `MM.    d'\n"); 
 printf("MM         MM     MM  MM 6M      Y        MM           d'YM.     M\\MM\\    M     MM          d'YM.    MM         `MM.  d'\n");  
 printf("MM    ,    MM     MM  MM MM               MM   ,      ,P `Mb     M \\MM\\   M     MM         ,P `Mb    YM.         `MM d'\n");   
 printf("MMMMMMM    MM    .M9  MM MM               MMMMMM      d'  YM.    M  \\MM\\  M     MM         d'  YM.    YMMMMb      `MM'\n");    
 printf("MM    `    MMMMMMM9'  MM MM               MM   `     ,P   `Mb    M   \\MM\\ M     MM        ,P   `Mb        `Mb      MM\n");     
 printf("MM         MM         MM MM               MM         d'    YM.   M    \\MM\\M     MM        d'    YM.        MM      MM\n");     
 printf("MM         MM         MM YM      6        MM        ,MMMMMMMMb   M     \\MMM     MM       ,MMMMMMMMb        MM      MM\n");     
 printf("MM      /  MM         MM  8b    d9        MM        d'      YM.  M      \\MM     MM       d'      YM. L    ,M9      MM\n");     
 printf("MMMMMMMMM _MM_       _MM_  YMMMM9        _MM_     _dM_     _dMM__M_      \\M    _MM_    _dM_     _dMM_MYMMMM9      _MM_\n");
 printf("\n\n\n\n\n\n\n\n\n\n\n\n");

}
void print_menu(int zmiana, int wielkosc){
    for(i=0;i<wielkosc;i++){
    if(i==zmiana){
        printf(SELECTED"%s"NOT_SELECTED"\n\n",main_menu[i]);
    }
    else{
    printf("%s\n\n",main_menu[i]);
}
    printf("\n\n");
}
printf(RESET);
    
}
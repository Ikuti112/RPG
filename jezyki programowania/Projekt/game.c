#include "game.h"

void showMap(int tab[5][5]){
printf(CLEAR);
int i,j;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(i==0 || i==4){
			if(tab[i][j]==1){
				printf("-");
			}
		}
		else{
			if(tab[i][j]==1){
				printf("|");
			}
			if(tab[i][j]==0){
				printf(" ");
			}
			if(tab[i][j]==2){
				printf("U");
			}
		}
	}
	printf("\n");
}
}
void showInterface(){
//char* string=LoadChar(file);
printf("E"RED"x"RESET"it(Save before leaving!)\t");
printf(RED"I"RESET"nventory\t");
printf(RED"C"RESET"haracter\t");
printf(RED"S"RESET"ave\t");
printf("C"RED"o"RESET"ntrols");
printf("\n");
printf(RESET);
}
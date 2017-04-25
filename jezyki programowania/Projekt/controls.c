#include "controls.h"
int control_menu(struct Menu_s* menu, int button,int point){
	    if (button == '\033') {
    getch(); // skip the [
    switch(getch()) { // the real value
        case 'A':
        if(point>0)
        {
            point--;
        }
        else
        {
            point=menu->length_I-1;
        }
        break; 
        case 'B':
          if(point<menu->length_I-1){
            point++;
          }
          else {
            point=0;
          }
          break;
    }
}
if(button=='\n'){
	point=point+100;
}
return point;
}
void move(int tab[5][5], int zmienna){
	int ruch_zrobiony=0;
	int i,j;
	int zmiana;
	if (zmienna== '\033') {
    getch(); // skip the [
    switch(getch()) { // the real value
    	case 'A':{
    		zmiana=0;
    		break;
    	}
    	case 'B':{
    		zmiana=1;
    		break;
    	}
    	case 'C':{
    		zmiana=2;
    		break;
    	}
    	case 'D':{
    		zmiana=3;
    		break;
    	}
    }
}

for(i=0;i<5;i++){
	for(j=0;j<5;j++){
			if(tab[i][j]==2 && ruch_zrobiony==0){
				if(zmiana==0){
					if(tab[i-1][j]==0){
						tab[i][j]=0;
						tab[i-1][j]=2;
						ruch_zrobiony=1;
					}
				}
				if(zmiana==1){
					if(tab[i+1][j]==0){
						tab[i][j]=0;
						tab[i+1][j]=2;
						ruch_zrobiony=1;
					}
				}
				if(zmiana==2){
					if(tab[i][j+1]==0){
						tab[i][j]=0;
						tab[i][j+1]=2;
						ruch_zrobiony=1;
					}
				}
				if(zmiana==3){
					if(tab[i][j-1]==0){
						tab[i][j]=0;
						tab[i][j-1]=2;
						ruch_zrobiony=1;
					}
				}
		}
	}
}
}

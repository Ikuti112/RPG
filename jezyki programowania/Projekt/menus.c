#include "menus.h"
int i;
int Menu_Function(Menu* menu,int point){
	if(menu->tag==1){
		print_menu2(menu,point);
	}
		else{
	print_menu(menu,point);
}
	int button=getch();
	point=control_menu(menu,button,point);
	return point;
}
Menu* Menu_Change(Menu* menu, int point){
return menu->Menus[point];
}
void print_menu(Menu* menu,int point){
	printf(CLEAR"\n");
	for(i=0;i<menu->length_N;i++){
		printf("%s",menu->Noninteractive[i]);
	}
    for(i=0;i<menu->length_I;i++){
    if(i==point){
        printf(SELECTED"%s"NOT_SELECTED"\n\n",menu->Interactive[i]);
    }
    else{
    printf("%s\n\n",menu->Interactive[i]);
}
printf("\n");
}
printf(RESET);
    
}
void print_menu2(Menu* menu, int point){
	printf(CLEAR"\n");
	for(i=0;i<menu->length_I;i++){
		if(i==0){
		printf("%s",menu->Noninteractive[i]);
	}
	if(i+1<menu->length_N){
		printf("%s",menu->Noninteractive[i+1]);
	}
	if(i==point){
        printf(SELECTED"%s"NOT_SELECTED"\n\n",menu->Interactive[i]);
    }
    else{
    printf("%s\n\n",menu->Interactive[i]);
	}
}
}
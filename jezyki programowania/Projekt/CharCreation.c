#include "CharCreation.h"
char* EnterNameChar(char* charName){
	int zmienna;
	printf(CLEAR"\n");
	printf("Enter your character's name:\n");
	scanf("%s",charName);
	zmienna=getch();
	if(zmienna=='\n'){
		printf("Are you sure? This is the last time to change anything.\n");
		zmienna=getch();
		if(zmienna=='\n'){
			
		}
	}
return charName;
}
int CheckNameChar(struct Menu_s* menu){
	int i;
	  if(strcmp(menu->name,"Gender")==0){
        i=0;
  }
  	  if(strcmp(menu->name,"Race")==0){
        i=1;
  }
	  if(strcmp(menu->name,"Class")==0){
        i=2;
  }
  	  if(strcmp(menu->name,"Attributes")==0){
        i=3;
  }
  return i;
}
int InsertDataChar(struct Menu_s* menu, int point){
return menu->saveData[point];
}

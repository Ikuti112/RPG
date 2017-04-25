#include <stdio.h>
#include <string.h>
#include "menus.h"
#include "getch.h"
#include "colors.h"
#include "game.h"
#include "controls.h"
#include "CharCreation.h"
#include "loadnsave.h"
int main(void)
{
  int point=0;
  FILE *fp=NULL;
  Character dummy;
  Character *dummy_p;
  int i;
  int zmienna;
  char* charName;
  char Save[3];
  int Save_i=0;
  Menu menu0,menu1,menu2,menu3,menu4,menu5,menu6,menu7,menu8,game;
  Menu *menu_p,*menu0_p,*menu1_p,*menu2_p,*menu3_p,*menu4_p,*menu5_p,*menu6_p,*menu7_p,*menu8_p,*close,*game_p;
  close=NULL;
  menu0.Noninteractive[0] = "MMMMMMMMM `MMMMMMb. `MM'  6MMMMb/       `MMMMMMM       dM.     `MM\\     `M'MMMMMMMMMM       dM.      6MMMMb\\ `MM(     )M'\n";
  menu0.Noninteractive[1] = "MM      \\  MM    `Mb  MM  8P    YM        MM    \\      ,MMb      MMM\\     M /   MM   \\      ,MMb     6M'    `  `MM.    d'\n";
  menu0.Noninteractive[2] = "MM         MM     MM  MM 6M      Y        MM           d'YM.     M\\MM\\    M     MM          d'YM.    MM         `MM.  d'\n";
  menu0.Noninteractive[3] = "MM    ,    MM     MM  MM MM               MM   ,      ,P `Mb     M \\MM\\   M     MM         ,P `Mb    YM.         `MM d'\n";
  menu0.Noninteractive[4] = "MMMMMMM    MM    .M9  MM MM               MMMMMM      d'  YM.    M  \\MM\\  M     MM         d'  YM.    YMMMMb      `MM'\n";
  menu0.Noninteractive[5] = "MM    `    MMMMMMM9'  MM MM               MM   `     ,P   `Mb    M   \\MM\\ M     MM        ,P   `Mb        `Mb      MM\n";
  menu0.Noninteractive[6] = "MM         MM         MM MM               MM         d'    YM.   M    \\MM\\M     MM        d'    YM.        MM      MM\n";
  menu0.Noninteractive[7] = "MM         MM         MM YM      6        MM        ,MMMMMMMMb   M     \\MMM     MM       ,MMMMMMMMb        MM      MM\n";
  menu0.Noninteractive[8] = "MM      /  MM         MM  8b    d9        MM        d'      YM.  M      \\MM     MM       d'      YM. L    ,M9      MM\n";
  menu0.Noninteractive[9] = "MMMMMMMMM _MM_       _MM_  YMMMM9        _MM_     _dM_     _dMM__M_      \\M    _MM_    _dM_     _dMM_MYMMMM9      _MM_\n";
  menu0.Noninteractive[10] = "\n\n\n\n\n\n\n\n\n\n\n\n";
  menu0.Interactive[0]="1.New Game";
  menu0.Interactive[1]="2.Load Game";
  menu0.Interactive[2]="3.Options";
  menu0.Interactive[3]="4.Credits";
  menu0.Interactive[4]="5.Close Game";
  menu0.length_N=11;
  menu0.length_I=5;
  menu0.name="Main";
  menu0_p=&menu0;
  menu2.Noninteractive[0]="Place for options(maybe?)\n";
  menu2.Interactive[0]="Back";
  menu2.length_N=1;
  menu2.length_I=1;
  menu2.name="";
  menu2_p=&menu2;
  menu1.Noninteractive[0]="Place for loading savefiles(if we can learn how to do that :D )\n";
  menu1.Interactive[0]="Back";
  menu1.length_N=1;
  menu1.length_I=1;
  menu1.name="";
  menu1_p=&menu1;
  menu3.Noninteractive[0]="_____              _ _ _ \n";
  menu3.Noninteractive[1]="/ ____|            | (_) |\n";
  menu3.Noninteractive[2]="| |     _ __ ___  __| |_| |_ ___\n";
  menu3.Noninteractive[3]="| |    | '__/ _ \\/ _` | | __/ __|\n";
  menu3.Noninteractive[4]="| |____| | |  __/ (_| | | |_\\__ \\ \n";
  menu3.Noninteractive[5]=" \\_____|_|  \\___|\\__,_|_|\\__|___/ \n";
  menu3.Noninteractive[6]="AUTHORS:\n";
  menu3.Noninteractive[7]="\n\n";
  menu3.Noninteractive[8]="Michal Piatek 246747\n\n";
  menu3.Noninteractive[9]="Michal Olkiewicz 246805\n\n";
  menu3.Noninteractive[10]="\n\n\n";
  menu3.Noninteractive[11]="Songs used:\n";
  menu3.Noninteractive[12]="Link to Song Used\n";
  menu3.Noninteractive[13]="\n\n\n";
  menu3.Noninteractive[14]="Resources and programs used:\n";
  menu3.Noninteractive[15]="-Text ASCII Generator - patorjk.com/software/taag/\n";
  menu3.Noninteractive[16]="-Sublime Text 3 - text editor used to write this code\n";
  menu3.Noninteractive[17]="\n\n\n";
  menu3.Noninteractive[18]="All Copyrigthed Material used in this project is for educational purposes only. If any holder of the copyright is dissatisfied with includation of his property, he is asked to contact us at molkiewicz@sigma.ug.edu.pl or mpiatek@sigma.ug.edu.pl . We will than make sure to remove that\n content and put in it's place some other original content.\n";
  menu3.Interactive[0]="Back";
  menu3.length_N=19;
  menu3.length_I=1;
  menu3.name="";
  menu3_p=&menu3;
  menu4.Noninteractive[0]="Choose gender for you character:\n\n";
  menu4.Interactive[0]="1.Female";
  menu4.Interactive[1]="2.Male";
  menu4.Interactive[2]="Go back to main menu(your character won't be saved!)";
  menu4.length_I=3;
  menu4.length_N=1;
  menu4.saveData[0]=0;
  menu4.saveData[1]=1;
  menu4.name="Gender";
  menu4_p=&menu4;
  menu5.Noninteractive[0]="Choose race for your character:\n\n";
  menu5.Interactive[0]="1.Human";
  menu5.Interactive[1]="2.Dwarf";
  menu5.Interactive[2]="3.Elf";
  menu5.Interactive[3]="4.Half-Orc";
  menu5.Interactive[4]="Back";
  menu5.Interactive[5]="Go back to main menu(your character won't be saved!)";
  menu5.length_N=1;
  menu5.length_I=6;
  menu5.saveData[0]=0;
  menu5.saveData[1]=1;
  menu5.saveData[2]=2;
  menu5.saveData[3]=3;
  menu5.name="Race";
  menu5_p=&menu5;
  menu6.Noninteractive[0]="Choose class for your character:\n\n";
  menu6.Interactive[0]="1.Warrior";
  menu6.Interactive[1]="2.Ranger";
  menu6.Interactive[2]="3.Rogue";
  menu6.Interactive[3]="4.Paladin";
  menu6.Interactive[4]="5.Barbarian";
  menu6.Interactive[5]="6.Mage";
  menu6.Interactive[6]="7.Cleric";
  menu6.Interactive[7]="8.Druid";
  menu6.Interactive[8]="Back";
  menu6.Interactive[9]="Go back to main menu(your character won't be saved!)";
  menu6.length_N=1;
  menu6.length_I=10;
  menu6.saveData[0]=0;
  menu6.saveData[1]=1;
  menu6.saveData[2]=2;
  menu6.saveData[3]=3;
  menu6.saveData[4]=4;
  menu6.saveData[5]=5;
  menu6.saveData[6]=6;
  menu6.saveData[7]=7;
  menu6.name="Class";
  menu6_p=&menu6;
  menu7.Noninteractive[0]="Choose statistics for your character(You have 20 points to spend):\n\n";
  menu7.Noninteractive[1]="Strength:\t";
  menu7.Noninteractive[2]="Agility:\t";
  menu7.Noninteractive[3]="Stamina:\t";
  menu7.Noninteractive[4]="Inteligence:\t";
  menu7.Noninteractive[5]="Wisdom:\t\t";
  menu7.Noninteractive[6]="Charisma:\t";
  menu7.Interactive[0]="8";
  menu7.Interactive[1]="8";
  menu7.Interactive[2]="8";
  menu7.Interactive[3]="8";
  menu7.Interactive[4]="8";
  menu7.Interactive[5]="8";
  menu7.Interactive[6]="Accept";
  menu7.Interactive[7]="Back";
  menu7.Interactive[8]="Go back to main menu(your character won't be saved!)";
  menu7.length_N=7;
  menu7.length_I=9;
  menu7.saveData[0]=8;
  menu7.saveData[1]=8;
  menu7.saveData[2]=8;
  menu7.saveData[3]=8;
  menu7.saveData[4]=8;
  menu7.saveData[5]=8;
  menu7.name="Attributes";
  menu7.tag=1;
  menu7_p=&menu7;
  menu8.tag=2;
  menu8.name="";
  menu8_p=&menu8;
  game.tag=3;
  game_p=&game;
  dummy_p=&dummy;
  menu_p=menu0_p;
  menu0.Menus[0]=menu4_p;
  menu0.Menus[1]=menu1_p;
  menu0.Menus[2]=menu2_p;
  menu0.Menus[3]=menu3_p;
  menu0.Menus[4]=close;
  menu1.Menus[0]=menu0_p;
  menu2.Menus[0]=menu0_p;
  menu3.Menus[0]=menu0_p;
  menu4.Menus[0]=menu5_p;
  menu4.Menus[1]=menu5_p;
  menu4.Menus[2]=menu0_p;
  menu5.Menus[0]=menu6_p;
  menu5.Menus[1]=menu6_p;
  menu5.Menus[2]=menu6_p;
  menu5.Menus[3]=menu6_p;
  menu5.Menus[4]=menu4_p;
  menu5.Menus[5]=menu0_p;
  menu6.Menus[0]=menu7_p;
  menu6.Menus[1]=menu7_p;
  menu6.Menus[2]=menu7_p;
  menu6.Menus[3]=menu7_p;
  menu6.Menus[4]=menu7_p;
  menu6.Menus[5]=menu7_p;
  menu6.Menus[6]=menu7_p;
  menu6.Menus[7]=menu7_p;
  menu6.Menus[8]=menu5_p;
  menu6.Menus[9]=menu0_p;
  menu7.Menus[0]=menu8_p;
  menu7.Menus[1]=menu8_p;
  menu7.Menus[2]=menu8_p;
  menu7.Menus[3]=menu8_p;
  menu7.Menus[4]=menu8_p;
  menu7.Menus[5]=menu8_p;
  menu7.Menus[6]=menu8_p;
  menu7.Menus[7]=menu6_p;
  menu7.Menus[8]=menu0_p;
  game.Menus[0]=menu0_p;
  int map[5][5]={
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,2,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1}
  };
while(menu_p){
  if(strcmp(menu_p->name,"Main")==0){
        Save_i=0;
  }
  if(menu_p->tag==2){
    charName=EnterNameChar(charName);
    fp=fopen("test.txt","w");
    for(i=0;i<3;i++){
      fprintf(fp,"%d",Save[i]);
    }
    fclose(fp);
    fp=fopen("test.txt","r");
    dummy_p=LoadChar(fp,dummy_p);
    fclose(fp);
    menu_p=game_p;
    }
  if(menu_p->tag==3){
          do{
      showMap(map);
      showCharacterInfo();
      showInterface();
      printf("%d\n",dummy_p->gender);
      zmienna=getch();
      move(map,zmienna);
      if(zmienna=='x'){
        menu_p=Menu_Change(menu_p,0);
      }
    }while(zmienna!='x');
  }
  else{
point=Menu_Function(menu_p,point);
}
if(point>=100){
  point=point-100;
  Save_i=CheckNameChar(menu_p);
  Save[Save_i]=InsertDataChar(menu_p,point);
  menu_p=Menu_Change(menu_p,point);
point=0;
}
}
printf(CLEAR"\n");
return 0;
}




/*zapisatytator3000
jezeli menu_p to np. menu4_p i zostaly wybrany jakis punkt to przed zmiana menu pobieramy pointer i punkt i w zapisytatorze sprawdzamy 
jaki to pointer i punkt, czyli w fukncji robimy wielgasnego switcha i to co zostalo wybrane to zapisujemy w zmiennej globalnej ktora czyszczymy gdy ktos wroci do menu glownego
potym jak ktos skonczyc tworzyc postac i nazwie ja to zapisatytator bierze i wpisuje ta zmienna do pliku i nazywa ja nazwa postaci
potem odczytywytytator odczyta ta zmienna zapisana w pliku i przypisze strukturze postac te dane.
Do tego potrzebuje jeszcze menu w ktorym mozna zmieniac statystyki i menu pozwalajace wpisac jakiekogolwiek stringa. Potem po stringu odpala sie gra i odczytywytytator odczytywuje postac

0-0-female 1-male
1-
*/
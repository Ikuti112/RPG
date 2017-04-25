#include "loadnsave.h"

Character* LoadChar(FILE *f,Character* chara){
int i;
//fscanf(f,".1%d",&i);
chara->gender=i;
return chara;	
}
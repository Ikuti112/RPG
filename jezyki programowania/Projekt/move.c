/*void showInterface(){
	printf("0.e"RED_BOLD"X"RESET"it ");
	printf("1."RED_BOLD"I"RESET"nventory ");
	printf("2."RED_BOLD"C"RESET"haracter\n");
}
void showInventory(int tab[20][3]){
	int i,j;
	printf(CLEAR);
	for(i=0;i<20;i++){
		for(j=0;j<3;j++){
			switch(tab[i][j]){
				case 2:{
					printf(SELECTED"			wybrane			"RESET);
					break;
				}
				case 0:{
					printf("			puste			");
					break;
				}
			}
		}
	printf("\n");
	}
	printf(RED_BOLD"B"RESET"ack\n");

}*/
int main(int argc, char const *argv[])
{
	int inv[20][3]={
		{2,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	int k=0;
	int zmienna;
	printf(CLEAR);
	while(k!=1){
	//showInterface();
if(zmienna==120){
	k=1;
}
if(zmienna==105){
	do{
showInventory(inv);
	if (zmienna == '\033') { // if the first value is esc
    getch(); // skip the [
    switch(getch()) { // the real value
        case 'A':
        	move(inv,0);
            break;
        case 'B':
        move(inv,1);
            break;
        case 'C':
        move(inv,2);
            break;
        case 'D':
        move(inv,3);
            break;
    }
}
}while(getch()!=98);
}
	}
	return 0;
}
// 0 - empty
// 1 - wall
// 2 - player
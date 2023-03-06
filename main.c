#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int i,ar[9],pos;
void init(){
srand(time(NULL));
for(i=0;i<9;i++){
ar[i]=32;
}}
void print(){
printf("+=+=+=+=+\n");
for(i=0;i<9;i++){
printf("|%c|",ar[i]);
if(i==2||i==5||i==8){
printf("\n+=+=+=+=+\n");
}
}
}
int check(int posi){
if(ar[posi]==32){
return 0;
}
else{
return 1;
}}
void randomPlacer(){
	int cplace,rval;
for(;;){
cplace=(rand()%10);
rval=check(cplace);
if(rval==0){
ar[cplace]=79;
break;
}
}
}
void humanPlacer(){
	int ideal=0;
	for(;;){
printf("Enter a blank position number:");
scanf("%d",&pos);
ideal=check(pos-1);
	if(ideal==0){
	ar[pos-1]=88;
	break;
	}}
}
int matchWinCheck(){
if((ar[0]==88)&&(ar[1]==(88))&&(ar[2]==(88))){
	int result=ar[0];
	if(result==88){
	printf("You won\n");
	}
	/*else{
	printf("You lose\n");
	
	}*/
	return 1;
}
else{return 0;}
}
int main(){
	int finres;
init();
print();
for(;;){
 finres=matchWinCheck();
 if(finres==1){
	 break;}
 else {
humanPlacer();
print();
randomPlacer();
print();}
		
}
}

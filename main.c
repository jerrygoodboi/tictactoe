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
printf("\n+=+=+=+=+\n");}}
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
break;}}
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
	printf("You won\n");
	return 1;
}
else if((ar[3]==88)&&(ar[4]==(88))&&(ar[5]==(88)))
{	printf("You won\n");
	return 1;
}else if((ar[6]==88)&&(ar[7]==(88))&&(ar[8]==(88)))
{	printf("You won\n");
	return 1;
}else if((ar[0]==88)&&(ar[3]==(88))&&(ar[6]==(88)))
{	printf("You won\n");
	return 1;
}else if((ar[1]==88)&&(ar[4]==(88))&&(ar[7]==(88)))
{	printf("You won\n");
	return 1;
}else if((ar[2]==88)&&(ar[5]==(88))&&(ar[8]==(88)))
{	printf("You won\n");
	return 1;
}else if((ar[0]==88)&&(ar[4]==(88))&&(ar[8]==(88)))
{	printf("You won\n");
	return 1;
}else if((ar[2]==88)&&(ar[4]==(88))&&(ar[6]==(88)))
{	printf("You won\n");
	return 1;
}
else if((ar[0]==79)&&(ar[1]==(79))&&(ar[2]==(79)))
{       printf("You lose\n");
        return 1;
}
else if((ar[3]==79)&&(ar[4]==(79))&&(ar[5]==(79)))
{       printf("You lose\n");
        return 1;
}
else if((ar[6]==79)&&(ar[7]==(79))&&(ar[8]==(79)))
{       printf("You lose\n");
        return 1;
}else if((ar[0]==79)&&(ar[3]==(79))&&(ar[6]==(79)))
{       printf("You lose\n");
        return 1;
}else if((ar[1]==79)&&(ar[4]==(79))&&(ar[7]==(79)))
{       printf("You lose\n");
        return 1;
}else if((ar[2]==79)&&(ar[5]==(79))&&(ar[8]==(79)))
{       printf("You lose\n");
        return 1;
}else if((ar[0]==79)&&(ar[4]==(79))&&(ar[8]==(79)))
{       printf("You lose\n");
        return 1;
}else if((ar[2]==79)&&(ar[4]==(79))&&(ar[6]==(79)))
{       printf("You lose\n");
        return 1;
}
else{return 0;}
}
int draw(){
	int flag=0;
	for(int i=0;i<9;i++){
	if((ar[i]==' ')){
		flag=0;
	return flag;
	break;
	}
	else{
	flag=1;
	}
	}
return flag;
}
#define checkk() {finres=matchWinCheck();if(finres==1){break;}}
#define dc() {drw=draw();if(drw==1){printf("Draw\n");break;}}
int main(){
init();
int finres,drw;
print();
for(;;){
checkk();
dc();
humanPlacer();
print();
checkk();
dc();
randomPlacer();
print();}
}


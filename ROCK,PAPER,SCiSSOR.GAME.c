#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
 int rockpaperscissor(char,char);

int main(){
	system("Color C7");
	int i;
	for( i=0;i<=40;i++){
		printf("*");
		Sleep(200);
	}
	printf("\nLETS PLAY ROCK PAPER SCISSOR :p\n");
	for( i=0;i<=40;i++){
		printf("*");
		Sleep(200);
	}
	char you, comp;
	srand(time(0));
	int number= rand()%100+1;
	if(number<33){     // 100% 3 parts ie 100 divide 1/3 then 33 and after 2/3rd pard is 66 
		comp='r';      //  computer choose "ROCK".
	}
	else if(number>33&&number<66){
		comp='p';     // computer choose "PAPER".
	}
	else{
		comp='s';     // computer choose "SCISSOR".
	}
   printf("\nEnter 's' for scissor ,'p' for paper and 'r' for rock:");
   scanf("%c",&you);
   int result= rockpaperscissor(you,comp);
   if(result==0){
   	printf("Game DRAW ");
   }
   else if(result==1){
   	printf("You Win!");
   }
   else{
   	printf("you Lose!");
   }
  printf("You choose %c and computer choose %c.",you,comp);
}
int rockpaperscissor(char you, char comp)
{ // return 1 for win! ,return -1 for Lose! ,return 0 for Draw.
  // Draw condition**
  if(you==comp){
  	return 0;
  }
  // NOt Draw condition***              rs  pr  sp
  if(you=='r'&& comp=='s' ){            //sr  rp  ps
  	return 1;	
  }
  else if(you=='s'&& comp=='r'){
  	return -1;
  }
   if(you=='p'&& comp=='r' ){
  	return 1;
  }
  else if(you=='r'&& comp=='p'){
  	return -1;
  }
   if(you=='s'&& comp=='p' ){
  	return 1;
  }
  else if(you=='p'&& comp=='s'){
  	return -1;
  } 
	
}
 

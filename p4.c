
// creater a program that defines a function to check if a given number is divisible by 3 and 5 both or not.

#include<stdio.h>

int dive(){
	int i;
	
	printf("Enter any Number:- ");
	scanf("%d",&i);
	
	if(i % 3 == 0 && i % 5 == 0){
		printf("The number is divisable by 3 & 5 both.");
	}
	
	else{
		printf("The number is not divisable by 3 & 5.");
	}

}

main(){
	
	dive();

}

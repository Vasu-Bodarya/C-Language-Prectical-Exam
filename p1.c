// Write the C program that prompts the user to enter a 3 digit's positive integer. find the sum of first and last digit.


#include<stdio.h>
main(){

	int first, last, i, ans;

	printf("Enter your number:");
	scanf("%d",&i);

	last= i % 10;
	
	do{
		first= i % 10;
		i = i/10;
	}
	while(i>0);

	printf("first number:%d\n",first);
	printf("last number:%d\n",last);

	ans= first + last;
	
	printf("Sum Of First And Last %d + %d = %d\n",first,last,ans);
}


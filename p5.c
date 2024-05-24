
// write the c program that uses pointers to find sum of two 1d array.

#include<stdio.h>
void main(){
	
	int a,b;
	
	printf("Enter The Size Of A : ");
	scanf("%d",&a);
	printf("Enter The Size Of B : ");
	scanf("%d",&b);
	printf("\n");
	
	int x[a];
	int y[b];
	int i,j;
	int m,k;
	int sum = 0;
	
	
	for(i=0; i<a; i++){
		printf("a[%d]",i+1);
		scanf("%d",&m);
	}
	printf("\n");
	for(i=0; i<b; i++){
		printf("b[%d]",i+1);
		scanf("%d",&k);
	}
	
	for(i=0; i<a; i++){
		sum = a[i]+ b[i];
	}
	
	for(i=0; i<=a; i++){
		printf("%d",sum);
	}
	
	
	
}

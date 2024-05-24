
// Devlop  a c program that uses a sturcture to represent a mobile .


#include<stdio.h>
#include<string.h>

struct mobile{
	char company_name[20];
	char color[20];
	char model[20];
	int price;
};

void main(){
	
	
	int user,i;
	
	printf("Enter The Number Of User : ");
	scanf("%d",&user);
	
	struct mobile m1[user];
	
	
	for(i=0; i<user; i++){
		
		printf("\n\n");
		fflush(stdin);
		printf("Enter The Company Name : ");
		scanf("%s",&m1[i].company_name);
		
		fflush(stdin);
		printf("Enter The Color : ");
		scanf("%s",&m1[i].color);
		
		fflush(stdin);
		printf("Enter The Model : ");
		scanf("%s",&m1[i].model);
		
		printf("Enter The Price : ");
		scanf("%d",&m1[i].price);
	}
	
	for(i=0; i<user; i++){
		printf("\n\n");
		printf("\nCompany Name : %s",m1[i].company_name);
		printf("\nMobile Color : %s",m1[i].color);
		printf("\nMobile Model : %s",m1[i].model);
		printf("\nMobile Price : %d",m1[i].price);
	}
	
}

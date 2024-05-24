
// implement a c program that the writes intop a file,read it,and writes into another file.

#include<stdio.h>
void main(){
	
	char sentence[20];
	
	FILE *fp;
	fp = fopen("write.txt","w");
	
	if(fp!=NULL){
		printf("File IS Opened");
		
		fprintf(fp,"Hello World");
	}
	else{
		printf("File Is Not OPen");
	}
	
	
	
	fclose(fp);
	
	
	FILE *fp2;
	fp2 = fopen("write.txt","r");
	
	if(fp2!=NULL){
		printf("\nText Readed");
		
		fscanf(fp2,"%[^\n]",&sentence);
	}
	else{
		printf("\nFile Is Not OPen");
	}
	
	fclose(fp2);
	
	
	
	FILE *fp3;
	fp3 = fopen("rw.txt","w");
	
	if(fp!=NULL){
		printf("\nText Writed");
		
		fprintf(fp3,"%s",sentence);
	}
	else{
		printf("\nFile Is Not OPen");
	}
	
	fclose(fp3);
	
}

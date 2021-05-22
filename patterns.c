#include<stdio.h>
#include<cs50.h>

void main(){
	int type,rows;
	type = get_int("Enter type of pattern (1 or 2) : ");
	rows = get_int("Enter the no. of rows : ");
	if(type == 1){
		for(int i=rows; i>0; i--){
			for(int j=0; j<i; j++){
				printf("#");
			}
			printf("\n");
		}
	}
	else if(type == 2){
		for(int i=1; i<=rows; i++){
			for(int s=0; s<rows-i; s++)
				printf(" ");
			for(int j=0; j<i; j++)
				printf("#");
			printf("\n");
		}
	}
	else{
		printf("Invalid type\n");
	}
}
//write a program to calculate the square and cube of an entered number using pointer of a variable using pointers

#include<stdio.h>

int main(){
	int var1, square, cube; 
	int *ptr= &var1;
	
	printf("Enter the value  of variable:\n");
	scanf("%d", &var1);	
	
	square= *ptr * *ptr;
	cube= *ptr * *ptr * *ptr;
	
	printf("Square value of the variable is %d\n", square);
	printf("Cube value of the variable is %d\n", cube);

	
	return 0;
	
}

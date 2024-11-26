//write a program to copy element of one array

#include<stdio.h>
int main(){
	int i,n;
	
	printf("enter the no of elements in array1:\n");
	scanf("%d", &n);
	
	int array1[n], array2[n];
	int *ptr1=array1;
	int *ptr2=array2;
	    printf("enter the elements:\n");
		for(i=0;i<n;i++){
		scanf("%d", &array1[i]);
	}
	
	
	for(i=0;i<n;i++){
	*(ptr2+i)= *(ptr1+i); 	
	}
	printf("elements of array2:\n");
	for(i=0;i<n;i++){
		printf("%d\t",array2[i]);
	}
	
	return 0;
	
	
}

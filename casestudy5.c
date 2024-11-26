#include<stdio.h>
int main(){
	int n, fibotemp1=0, fibotemp2, fibo=1;
	int t;
	start:
		printf("enter the number of test cases between 1 to 15\n");
		scanf("%d",&t);
		if(t<0){
			printf("number of test cases cannot be negative\n");
			goto start;
		}
	
	for(int i=0; i<t; i++){
		printf("enter the number \n");
		scanf("%d",&n);
		
		if(n<0){
			printf("Enter a positive number \n");
			continue;
		}
		do{
			if(n==0){
				printf("isFibo\n");
				break;			}
			if(n==1){
				printf("isFibo\n");
				break;          }
				
		  fibotemp2= fibo;
		  fibo= fibo+ fibotemp1;
		  fibotemp1= fibotemp2;
		  
		  if(n==fibo){
		  	printf("isFibo\n");
		    break;
			 }
		  if(n<fibo){
		  	printf("isNotFibo\n");
		    break;
			 } 
		  
		} while(fibo<n);
	}
}

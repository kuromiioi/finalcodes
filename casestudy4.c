#include<stdio.h>
#include<string.h>

int main(){
	int n; int gem=0;
	printf("enter the number of rocks\n");
	scanf("%d",&n);
	
	char rock[n][100];
	for(int i=0; i<n;i++){
		printf("enter the composition of rock:\n");
		scanf("%s", &rock[i]);
	}
	for(char i=97; i<123; i++){
		int count=0;
		for(int j=0; j<n; j++){
			
			for(int k=0;k<100;k++){
				if((int)rock[j][k]==i){
					count++;
					break;
				}
			}
			if(count==n)
			gem++;
    	}
		
	}printf("number of gem elements are %d", gem);
	
	
}

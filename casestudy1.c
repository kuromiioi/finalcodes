//bigger is greater problem

#include<stdio.h>
#include<string.h>

//function to swap two characters
void swap(char *a, char *b){
	char temp= *a;
	*a= *b;
	*b= temp;
}
//function to reverse the string
void reverse(char *str, int start, int end){
	while(start<end){
		swap(&str[start], &str[end]);
		start++;
		end--;
	}
}
//function to find the next lexigrophically greater string
int output(char *str){
	int n= strlen(str);
	int i=n-2;
	
while(i>=0 && str[i]>=str[i+1]){
	i--;
}	
if(i<0){
	return 0;
}
int j=n-i;
while(str[j] <= str[i]){
	j--;
}
swap(&str[i], &str[j]);
reverse(str, i+1, n-1);
return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char str[101];
		scanf("%s", str);
		
	if(output(str))	{
		printf("%s\n", str);
	}else{
		printf("no answer\n");
	}
	}
return 0;
}

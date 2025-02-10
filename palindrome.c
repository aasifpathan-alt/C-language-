#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20];

	printf("Enter number:");
	scanf("%s",& a);
	strcpy(b,a);
	strrev(b);
int	c=strcmp(a,b);
	
	

if(c==0){
	printf("%s is a panildrome string",a);
}
else{
printf("%s is not a panildrome string",a);	
}
}
#include<stdio.h>
int main()
{
	printf("hello git\n");
	int a,b,ans,choice;
	printf("1. add \n2. substrat");
	printf("enter choice : ");
	scanf("%d",&choice);
	if(choice == 1){
	printf("enter two number to add : ");
	scanf("%d%d",&a,&b);
	ans=a+b;
	printf("%d + %d = %d",a,b,ans);}
	else{
	printf("enter two number to add : ");
	scanf("%d%d",&a,&b);
	ans=a+b;
	printf("%d - %d = %d",a,b,ans);	}
	return 0;
	
}

#include <stdio.h>
int main()
{
	
	int Arr[10];
	int i;
	for(i = 0;i<10;i++)
		
		{
			printf("please enter numbers \n",i+1);
			scanf("%d",&Arr[i]);
		}
		
	printf("number after reverisng: \n");
	
	for(i =9; i>=0; i--)
		{
			printf("%d\n",Arr[i]);
		}
	
	
}
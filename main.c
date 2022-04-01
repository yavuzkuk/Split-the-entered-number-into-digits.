#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int numara;
	printf("deger girin:");
	scanf("%d",&numara);
	int *tek;
	tek=(int *)malloc(1*sizeof(int));
	int *cift;
	cift=(int *)malloc(1*sizeof(int));
	int kalan,i=0,j=0,a=0;
	
	while(numara!=0)
	{
		kalan=numara%10;
		numara=numara/10;
		
		if(kalan%2==1)
		{
			tek=(int *)realloc(tek,1*sizeof(int));
			*(tek+i)=kalan;
			i++;
		}
		
		else
		{
			cift=(int *)realloc(cift,1*sizeof(int));
			*(cift+j)=kalan;
			j++;
		}
				
	}
	
	printf("tek sayilar\t");
		
		for(a=0;a<i;a++)
		{
			printf("%d\t",*(tek+a));
		}
			
	
	
	printf("\n");
	
	printf("cift sayilar\t");
	
		for(a=0;a<j;a++)
		{
			printf("%d\t",*(cift+a));
		}
	
	
	
	
	
	
	return 0;
}

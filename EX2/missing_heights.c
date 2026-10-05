#include <stdio.h>
int main(void)
{       
	int h1,h2,h3;
	int avg;
	printf("ENTER HEIGHT1:");
	scanf("%d",&h1);
	printf("ENTER HEIGHT2:");
        scanf("%d",&h2);
	printf("ENTER HEIGHT3:");
        scanf("%d",&h3);
	printf("ENTER AVERAGE HEIGHT:");
	scanf("%d",&avg);

	int sum=avg*5;
	int m_h=(sum-(h1+h2+h3))/2;
	printf("The missing height is: %d\n",m_h);

}



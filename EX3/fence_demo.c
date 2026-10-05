#include <stdio.h>
int main (void)
{	int P;
	printf("ENTER PERIMETER:");
	scanf("%d",&P);
	
	int L=P/3.5;
	printf("Length is:%d\n",L);
	int W=3*P/14;
	printf("Width is:%d\n",W);

}


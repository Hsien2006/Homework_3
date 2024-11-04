#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maximum( int x, int y, int z);

int main(int argc, char** argv) 
{
	int numberl; 
	int number2; 
	int number3;
	printf("Enter three integers:");
	scanf("%d %d %d",&numberl,&number2,&number3);
	printf( "Maximum is: %d\n",maximum(numberl,number2,number3));
	system( "pause");
	return 0;
}

int maximum(int x, int y, int z)
{
	int max=x;
	if(y>max)
		max=y;	
	if(z>max)
		max=z;	
	return max;
}





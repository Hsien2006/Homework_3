#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int square(int y);

int main(int argc, char** argv) 
{
	int x;
	
	for(x=1;x<=10;x++)
		printf("%d ",square(x));
	printf("\n");
	system("pause");
	return 0;
}

int square(int y)
{
	return y*y;
}

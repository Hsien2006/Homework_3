#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double Power(double,int);

int main(int argc, char** argv) 
{
	int k;
	double Ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf("%d",&k);	
	Ans=Power(3.5,k);
	printf("3.5的%d次方=%f\n",k,Ans);
	system("pause");
}

double Power(double X,int n)
{
	int i;
	double PowerXn=1;
	for(i=1;i<=n;i++)
		PowerXn=PowerXn*X;
	return PowerXn;
}





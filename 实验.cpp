#include <stdio.h>
int main()
{
	double x,y;
	int v;
	printf("输入您的vip等级,我马上给你一巴掌\n");
	scanf("%lf %d",&x,&v);
	
	if(v == 0)
	{
		y=x;
	}
	if(v == 1)
	{
		y=0.9*x;
	}
	if(v == 2||v == 3)
	{
		y=0.8*x;
	}
	if(v >= 4)
	{
		y=x*0.75;
	}
		printf("%.2lf",y);
	
	return 0;
}




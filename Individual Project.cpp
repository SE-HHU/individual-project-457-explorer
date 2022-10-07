#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void Comment(int i);
int Number_gen(int i)
{
	switch(i)
	{
		case 1:return rand()%10;break;
		case 2:return (rand()%90)+10;break;
		default:break;
	}
}
void Add(int n)
{
	printf("现在进行的是%d位数加法运算\n",n);
	int count=0；
	for(int i=1;i<=10;i++)
	{
		int a=Number_gen(n);
		int b=Number_gen(n);
		printf("%d+%d= ",a,b);
		int result;
		scanf("%d",&result);
		if(result==a+b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);
	}
	double rate=count/10;
	if(rate<0.75)
	printf("很遗憾，你没有过关，快去找老师补课哦！\n");
	else printf("祝贺!你已经通过了本次测试！\n");
}
void Subtr(int n)
{
	printf("现在进行的是%d位数减法运算\n",n);
	int count=0;
	for(int i=1;i<=10;i++)
	{
		int a=Number_gen(n);
		int b=Number_gen(n);
		printf("%d-%d= ",a,b);
		int result;
		scanf("%d",&result);
		if(result==a-b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);	
	}
	double rate=count/10;
	if(rate<0.75)
	printf("很遗憾，你没有过关，快去找老师补课哦！\n");
	else printf("祝贺!你已经通过了本次测试！\n");
}
void Mult(int n)
{
	printf("现在进行的是%d位数乘法运算\n",n);
	int count=0;
	for(int i=1;i<=10;i++)
	{
		int a=Number_gen(n);
		int b=Number_gen(n);
		printf("%d*%d= ",a,b);
		int result;
		scanf("%d",&result);
		if(result==a*b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);	
	}
	double rate=count/10;
	if(rate<0.75)
	printf("很遗憾，你没有过关，快去找老师补课哦！\n");
	else printf("祝贺!你已经通过了本次测试！\n");
}
void Divi(int n)
{
	printf("现在进行的是%d位数除法运算\n",n);
	int count=0;
	for(int i=1;i<=10;i++)
	{
		int a=Number_gen(n);
		int b=Number_gen(n);
		if(n==1)
		{
			int b=(rand()%9)+1;
		}
		printf("%d/%d= ",a,b);
		float result;
		scanf("%d",&result);
		if(result==1.0*a/b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);	
	}
	float rate=count/10;
	if(rate<0.75)
	printf("很遗憾，你没有过关，快去找老师补课哦！\n");
	else printf("祝贺!你已经通过了本次测试！\n");
}
void Mix(int n)
{
	int count;
	for(int i=0;i<=10;i++)
	{
		float result;
		int c=rand()%4;
		int a=Number_gen(n);
		int b=Number_gen(n);
		switch(c)
		{
			case 0:printf("%d+%d= ",a,b);
		scanf("%f",&result);
		if(result==a+b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);break;
		case 1:	printf("%d-%d= ",a,b);
		scanf("%f",&result);
		if(result==a-b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);break;
		case 2:printf("%d*%d= ",a,b);
		scanf("%f",&result);
		if(result==a*b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);break;
		case 3:if(n==1)
		{
			int b=(rand()%9)+1;
		}
		printf("%d/%d= ",a,b)；
		scanf("%f",&result);
		if(result==1.0*a/b)
		{
			count++;
			Comment(1);
		}
		else Comment(0);break;
		default:break;
	    };
	}
	float rate=count/10;
	if(rate<0.75)
	printf("很遗憾，你没有过关，快去找老师补课哦！\n");
	else printf("祝贺!你已经通过了本次测试！\n");
}
int main()
{
	srand((unsigned)time(NULL));
	int choice1,choice2;
	printf("运算选择：\n1\t2\t3\t4\t5\n\n");
	printf("难度选择：\n1\n2\n\n");
	printf("键入运算难度和难度选择： ")；
	scanf("%d%d",&choice1,&choice2);
	switch(choice1)
	{
		case 1:Add(choice2);break;
		case 2:Subtr(choice2);break;
		case 3:Mult(choice2);break;
		case 4:Divi(choice2);break;
		case 5:Mix(choice2);break;
	}
	return 0;
}
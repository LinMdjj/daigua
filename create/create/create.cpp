#include"pch.h"
#include<iostream>
#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include<sys/timeb.h>
using namespace std;
struct timeb timeSeed;
int random()//产生随机数的函数
{
	ftime(&timeSeed);
	srand(timeSeed.time * 1000 + timeSeed.millitm);
	int a;
	a = rand() % 100+1;
	return a;
}
int random1()//产生随机数的函数
{
	int a;
	srand((unsigned int)time(NULL));

	a = rand() % 101 + 1;
	return a;
}
int random2()//产生随机数的函数
{
	int a;
	srand((unsigned int)time(NULL));

	a = rand() % 99 + 1;
	return a;
}
int random3()//产生随机数的函数
{
	int a;
	srand((unsigned int)time(NULL));

	a = rand() % 98 + 1;
	return a;
}
int test(int t)//产生除数的函数
{
	int b,e;
	srand((unsigned)time(NULL));
	e = rand() % 30;
	b = t * e;
	return b;
	
}
int symbol()//产生符号
{
	int t;
	int x;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
		t = rand() % 3+1;
	switch (t)
	{
	case 1:x = 42; break;
	case 2:x = 43; break;
	case 3:x = 45; break;
	}
	return x;
}
int symbol1()//产生符号
{
	int t;
	int x=42;
	srand((unsigned)time(NULL));
		t = rand() % 4 ;
	switch (t)
	{
	case 1:x = 42; break;
	case 2:x = 43; break;
	case 3:x = 45; break;
	}
	return x;
}
void delay(int msec)//延时函数
{
	clock_t now = clock();
	while (clock() - now < msec);
}

int main()
{
	char s, j;
	int r,n,h,g,k,i;

	cout << "请输入需要题的数目(按回车键获取题目)" << endl;
	cin >> i;
	for (int t = 1; t <= i; t++)
	{
	    h = random();
	    n = random1();
	    g = random2();
	    k = random3();
	
		if (h % 2 == 0)
		{
			r = test(n);
			s = symbol();
			j = 47;
			cout << r << j << n << s << g << endl;
		
		}
		else
		{
			s = symbol();
			j = symbol1();
			cout << k << j << n << s << g << endl;
		
		}
		delay(1000);
	}
	cout << "谢谢使用";
	return 0;

}
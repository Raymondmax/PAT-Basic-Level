/**
 * 1002. 写出这个数 (20)

时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/
#include<stdio.h>
#include<math.h>
main()
{
	int c,sum,sum_c,digit,num;
	sum=0;
	while((c=getchar())!='\n')
	{
		sum+=(c-'0');
	}
	sum_c=sum;
	digit=0;
	do
	{
		sum_c/=10;
		digit++;
	}
	while(sum_c);
	while(digit)
	{
		num=sum/pow(10,digit-1);
		if(digit==1)
		{
			switch(num)
			{
				case 1:printf("yi");break;
				case 2:printf("er");break;
				case 3:printf("san");break;
				case 4:printf("si");break;
				case 5:printf("wu");break;
				case 6:printf("liu");break;
				case 7:printf("qi");break;
				case 8:printf("ba");break;
				case 9:printf("jiu");break;
				case 0:printf("ling");break;
			}
			break;
		}
		switch(num)
		{
			case 1:printf("yi ");break;
			case 2:printf("er ");break;
			case 3:printf("san ");break;
			case 4:printf("si ");break;
			case 5:printf("wu ");break;
			case 6:printf("liu ");break;
			case 7:printf("qi ");break;
			case 8:printf("ba ");break;
			case 9:printf("jiu ");break;
			case 0:printf("ling ");break;
		}
		sum=sum-num*pow(10,digit-1);
		digit--;
	}

}

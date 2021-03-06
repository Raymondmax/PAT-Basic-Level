/**
 * 1005. 继续(3n+1)猜想 (25)

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
卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。

当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。例如对n=3进行验证的时候，我们需要计算3、5、8、4、2、1，则当我们对n=5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，我们称5、8、4、2是被3“覆盖”的数。我们称一个数列中的某个数n为“关键数”，如果n不能被数列中的其他数字所覆盖。

现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。

输入格式：每个测试输入包含1个测试用例，第1行给出一个正整数K(<100)，第2行给出K个互不相同的待验证的正整数n(1<n<=100)的值，数字间用空格隔开。

输出格式：每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用1个空格隔开，但一行中最后一个数字后没有空格。

输入样例：
6
3 5 6 7 8 11
输出样例：
7 6
*/
 #include<stdio.h>

int main()
{
	int n,i,temp,num,count[101],total=0;
	scanf("%d",&n);
	for(i=0;i<101;i++)
		count[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		count[num]++;
	}
	for(i=2;i<101;i++)
	{
		if(count[i]!=0)
		{
			temp=i;
			while(temp>1)
			{
				if(temp%2)
				{
					temp=temp*3+1;
					temp/=2;
					if(temp<=100&&temp>1)
						count[temp]=0;
				}
				else
				{
					temp/=2;
					if(temp<=100&&temp>1)
						count[temp]=0;
				}
			}
		}
	}
	temp=0;
	for(i=100;i>1;i--)
	{
		if(count[i]!=0)
			total++;
	}
	for(i=100;i>1;i--)
	{
		if(count[i]!=0)
		{
			temp++;
			if(temp!=total)
				printf("%d ",i);
			else
				printf("%d",i);
		}
	}
	return 0;
}

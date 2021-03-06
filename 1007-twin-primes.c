/**
 1007. 素数对猜想 (20)

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
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正整数N。

输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

输入样例：
20
输出样例：
4
*/
#include<stdio.h>
#include<math.h>
main()
{
	int isprime(int n);
	int prime_pre,prime_next,temp,twin,i,j,n;
	scanf("%d",&n);
	twin=0;
	for(i=2;i<=n;i++)
	{
		if(isprime(i))
		{
			prime_pre=i;
			for(j=i+1;j<=n;j++)
			{
				if(isprime(j))
				{
					prime_next=j;
					break;
				}
			}
			if(prime_next-prime_pre==2)
			{
				twin++;
			}
			i=j-1;
		}
	}
	printf("%d\n",twin);
}
int isprime(int n)
{
	int sqn,i;
	sqn=sqrt(n);
	for(i=2;i<=sqn;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

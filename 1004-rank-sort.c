/**
 * 读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：每个测试输入包含1个测试用例，格式为

  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，字符串间有1空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112
*/
#include<stdio.h>
#include<string.h>
main()
{
	char temp_name[15],temp_id[15],min_name[15],min_id[15],max_name[15],max_id[15];
	int n,i,min,max,grade;
	scanf("%d",&n);
	min=100;
	max=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",temp_name);
		scanf("%s",temp_id);
		scanf("%d",&grade);
		if(grade>max)
		{
			max=grade;
			strcpy(max_name,temp_name);
			strcpy(max_id,temp_id);
		}
		if(grade<min)
		{
			min=grade;
			strcpy(min_name,temp_name);
			strcpy(min_id,temp_id);
		}
	}
	printf("%s %s\n",max_name,max_id);
	printf("%s %s\n",min_name,min_id);
	return 0;
}

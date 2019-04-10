#include<stdio.h>
#include<stdlib.h>
char* Rever_string(char* p)
{
	int n = 0;
	char* q;
	char temp;
	q = p;
	while (*p != 0)
	{
		p++;
		n++;
	}
	if (n > 1)
	{
		temp = q[0];
		q[0] = q[n - 1];
		q[n - 1] = '\0';
		Rever_string(q + 1);
		q[n - 1] = temp;
	}
	return q;
}
int main()
{
	printf("輸入你的字元:");
	char p[1000];
	gets(p);
	printf("翻轉後為：%s\n", Rever_string(p));
	system("pause");
	return 0;
}
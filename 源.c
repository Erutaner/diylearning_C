#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct Stu
{
	char name[20];
	int age;
}stu;
int cmp(const void* e1, const void* e2)
{
	return ((stu*)e1)->age - ((stu*)e2)->age;
}
bubble(void* base, int sz, int width, int(*cmp)(const void* ,const void* ))
{
	for (int i = 0;i < sz;i++)
	{
		for (int j = 0;j < sz - i - 1;j++)
		{
			if (cmp(((char*)base + j * width), ((char*)base + (j + 1) * width))>0)//给cmp传递两个相邻数组元素的地址
			{
				for (int k = 0;k < width;k++)
				{
					char tmp = *((char*)base + j * width + k);
					*((char*)base + j * width + k) = *((char*)base + (j + 1) * width + k);
					*((char*)base + (j + 1) * width + k) = tmp;


				}
			}
		}
	}
}
int main(void)
{
	stu s[3] = { {"zhangsan",40},{"lisi",20},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble(s, sz, sizeof(s[0]), cmp);
	printf("Test for SSH");
	return 0;
}

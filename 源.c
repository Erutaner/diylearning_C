#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src!= NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{

	}
	return ret;
}
int main(void)
{
	char arr[] = "12345";
	char arr1[] = "456";
	my_strcpy(arr, arr1);
	
	return 0;
}
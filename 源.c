#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* source,size_t count)
{
	assert(dest && source);
	char* ret = dest;
	while (count && (*dest++ = *source++))//注意里面的括号非常关键，这解释了为何下面的循环中使用--count
		count--;
	if (count)
		while (--count)
			*dest++ = '\0';
	return ret;
}
int main(void)
{
	char arr[20] = "abcdefghg";
	char arr1[3] = "z";
	printf("%s",my_strncpy(arr, arr1, 3));
  
	return 0;
}
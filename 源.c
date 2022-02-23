#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* source, size_t count)
{
	assert(dest && count);
	char* ret = dest;
	while (*dest)
		dest++;
	while (count--)//只有还有剩余次数时才会进入赋值模块
		if (!(*dest++ = *source++))
			return ret;
	*dest = '\0';//只有剩余次数为零时仍未追加到source里的\0，才会来到这里，且只加一个\0结束
	return ret;
}
int main(void)
{
	
	char arr[30] = "abcdefgh\0xxxxxxxx";
	char arr1[] = "123";
	my_strncat(arr, arr1,2);

	
  
	return 0;
}
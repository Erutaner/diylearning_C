#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* source,size_t count)
{
	assert(dest && source);
	char* ret = dest;
	while (count && (*dest++ = *source++))//ע����������ŷǳ��ؼ����������Ϊ�������ѭ����ʹ��--count
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
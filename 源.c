#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* source, size_t count)
{
	assert(dest && count);
	char* ret = dest;
	while (*dest)
		dest++;
	while (count--)//ֻ�л���ʣ�����ʱ�Ż���븳ֵģ��
		if (!(*dest++ = *source++))
			return ret;
	*dest = '\0';//ֻ��ʣ�����Ϊ��ʱ��δ׷�ӵ�source���\0���Ż����������ֻ��һ��\0����
	return ret;
}
int main(void)
{
	
	char arr[30] = "abcdefgh\0xxxxxxxx";
	char arr1[] = "123";
	my_strncat(arr, arr1,2);

	
  
	return 0;
}
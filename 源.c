#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
		while (count--)
			*((char*)dest)++ = *((char*)src)++;
	else
		while (count--)
			*((char*)dest + count) = *((char*)src + count);//count的值在不断缩小，起到了内存左移的作用，不需++
	return (ret);
}
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr, arr+3, 20);
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", *(arr + i));
	}
	

	return 0;
}
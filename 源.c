#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
void* my_memcpy(void* dest, const void* source, size_t num)
{
	assert(dest && source);
	void* ret = dest;
	while (num--)
		*((char*)dest)++ = *((char*)source)++;
	return (ret);
}
typedef struct S
{
	char name[20];
	int age;
}S;
int main(void)
{

	int arr[] = { 1,2,3,4 };
	int arr2[4] = { 0 };
	my_memcpy(arr2, arr, sizeof(arr));
	return 0;
}
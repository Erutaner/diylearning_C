#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* cp = (char*)str1;
	char* s1, *s2;//注意s2前面也要加星号
	if (!*str2)
		return (char*)str1;
	while (*cp)
	{
		s1 = cp;
		s2 =(char*) str2;
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		if (!*s2)
			return cp;
		cp++;
	}
	return NULL;


}
int main(void)
{

	char* str1 = "123456777";
	char* str2 = "456";
	printf("%s", my_strstr(str1, str2));

	return 0;
}
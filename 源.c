#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* c1, const char* c2)
{
	assert(c1 && c2);
	while (*c1 == *c2)
	{
		if (*c1 == 0)
			return 0;
		c1++;
		c2++;
	}
	return (*c1 - *c2);

}
int main(void)
{
	char* p1 = "abcze";
	char* p2 = "abcze";
	
	if (my_strcmp(p1, p2) > 0)
		printf("p1>p2");
	else if (my_strcmp(p1,p2) == 0)
		printf("p1=p2");
	else if (my_strcmp(p1,p2) < 0)
		printf("p1<p2");

	return 0;
}
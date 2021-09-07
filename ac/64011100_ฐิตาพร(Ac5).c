#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char str[50];
	char *ptr;

	ptr = str;
	scanf("%s", str);
	printf("Input : %s\n", str);
	printf("Output : ");
	while (*ptr != '\0')

	{
		if (*ptr != *(ptr + 1))
		{
			printf("%c", *ptr);
			ptr++;
		}

		else
		{
			ptr++;
		}
	}
	return 0;
}
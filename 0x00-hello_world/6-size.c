#include <stdio.h>

int main(void)

{
	char acharacter;
	int xinteger;
	long ylong;
	long long zlonglong;
	float wfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(xinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ylong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(zlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(wfloat));

	return (0);
}

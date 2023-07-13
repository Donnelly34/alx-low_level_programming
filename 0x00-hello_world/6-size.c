#include <stdio.h>
/**
*main - entry point
*Return: always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of an int: %zu bytes(s)", sizeof(int));
	printf("Size of a long int: %zu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}

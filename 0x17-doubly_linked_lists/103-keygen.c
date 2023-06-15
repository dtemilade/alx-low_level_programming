#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - the function to get a key depending on a username for crackme5
 * @argc: variable parameter number of arguments passed
 * @argv: variable parameter arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{

	/*introducing parameter variable for the function*/
	char *alpvar = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	unsigned int s, t;
	char retval[7] = "      ";
	size_t var_s, var_i;

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	var_s = strlen(argv[1]);
	retval[0] = alpvar[(var_s ^ 59) & 63];
	for (t = 0, var_i = 0; t < var_s; t++)
		var_i = var_i + argv[1][t];
	retval[1] = alpvar[(var_i ^ 79) & 63];
	for (t = 0, s = 1; t < var_s; t++)
		s *= argv[1][t];
	retval[2] = alpvar[(s ^ 85) & 63];

	for (s = argv[1][0], t = 0; t < var_s; t++)
		if ((char)s <= argv[1][t])
			s = argv[1][t];

	srand(s ^ 14);
	retval[3] = alpvar[rand() & 63];
	for (s = 0, t = 0; t < var_s; t++)
		s += argv[1][t] * argv[1][t];
	retval[4] = alpvar[(s ^ 239) & 63];
	for (s = 0, t = 0; (char)t < argv[1][0]; t++)
		s = rand();
	retval[5] = alpvar[(s ^ 229) & 63];
	printf("%s\n", retval);
	return (0);
}

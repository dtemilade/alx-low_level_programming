#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @fisame: parameter pointer for the name of the file.
 * @text_content: parameter for the string
 * Return: -1 if function fails, not exit or fisame is NULL. Otherwise 1.
 */
int append_text_to_file(const char *fisame, char *text_content)
{
	/*introducing variable parameter*/
	int a, s, b;

s = 0;
/*conditional statement for the function*/
if (fisame == NULL)
return (-1);

if (text_content != NULL)
{
for (s = 0; text_content[s];)
s++;
}

a = open(fisame, O_WRONLY | O_APPEND);
b = write(a, text_content, s);

if (b == -1 || a == -1)
return (-1);

close(a);

return (1);
}


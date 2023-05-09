#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *fisame, size_t letters);
int create_file(const char *fisame, char *text_content);
int append_text_to_file(const char *fisame, char *text_content);

#endif


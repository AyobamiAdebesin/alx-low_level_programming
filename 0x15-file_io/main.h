#ifndef _main_h_
#define _main_h_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);

#endif

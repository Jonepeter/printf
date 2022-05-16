#ifndef MAIN_H
#define MAIN_H

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
#endif

#include "main.h"
int_strlen(char *s)
	{
	int longi = 0;
	while (*s != '\0')
	{
	longi++;
	s++;
	}
	return (longi);
	}

#include "main.h"
/**
 *
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
const char *ns = src;
char *nd = dest;
for (i = 0; i < n; i++)
{
	nd[i] = ns[i];
}
return (dest);
}

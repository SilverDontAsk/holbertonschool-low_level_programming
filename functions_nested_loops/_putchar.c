#include <stdio.h>
void _putchar(void)
 
{
int ascii_codes[] = {95,112,117,116,99,104,97,114};
int i;
for (i = 0; i < sizeof(ascii_codes) / sizeof(ascii_codes[0]); i++)
putchar(ascii_codes[i]);
putchar('\n');
}

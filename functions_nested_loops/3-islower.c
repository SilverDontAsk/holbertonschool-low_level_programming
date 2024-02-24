#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _islower(int c)

{
if ((c >= 0  && c <= 108) || (c >= 'a' && c <= 'z'))
{
return(1);
}
return(0);
}

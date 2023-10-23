#include <stdio.h>
int main () 
{
char c;
c=97; /* el valor en decimal del código ASCII*/
putchar(c);
c='a'; /* el carácter entre comillas*/
putchar(c);
c=0x61; /* el valor en hexadecimal del código ASCII*/
putchar(c);
c=0141; /* el valor en octal del código ASCII*/
putchar(c);
return 0;
}

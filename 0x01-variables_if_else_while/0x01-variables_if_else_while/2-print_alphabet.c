#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Description: A program that prints the alphabet in lowercase
 * Return: Always 0 (success)
*/

int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet < = 'z'; alphabet++)
{
alphabet = tolower(alphabet);
putcher(alphabet);
if (alphabet == 'z')
{
alphabet = 'A';
for (; alphabet < = 'z'; alphabet++)
{
putcher(alphabet);
}
break;
}
}
putcher("*\n");
return (0);
}

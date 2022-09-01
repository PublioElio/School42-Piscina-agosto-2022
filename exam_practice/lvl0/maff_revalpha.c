/* Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$ */

#include<unistd.h>

int	main(void)
{
	char upper = 'Y';
	char lower = 'z';
	while (upper >= 'A')
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		upper -= 2;
		lower -= 2;
	}
	write(1, "\n", 1);
	return (0);
}
/* And also :
int main(void)
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
} */

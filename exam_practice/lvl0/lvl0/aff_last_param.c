/*
Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/

#include<unistd.h>

void	ft_printstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_printstr(argv[argc - 1]);
	}
	write(1, "\n", 1);
	return (0);
}

/* But also:
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*argv[argc - 1])
			write(1, argv[argc -1]++, 1);
	}
	write(1, "\n", 1);
}*/

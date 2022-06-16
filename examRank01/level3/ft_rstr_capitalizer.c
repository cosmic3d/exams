#include <unistd.h>

void	ft_rstr_capitalizer(char *s)
{
	while (*s)
        {
                while (*s && (*s == ' ' || *s == '\t'))
                {
                        write(STDOUT_FILENO, s, sizeof(char) * 1);
                        ++s;
                }
                while (*s != '\0' && *s != ' ' && *s != '\t')
                {
                        if (*s >= 'a' && *s <= 'z'
                        && (*(s + 1) == '\0' || *(s + 1) == ' ' || *(s + 1) == '\t'))
                                *s -= ('a' - 'A');
                        else if (*s >= 'A' && *s <= 'Z' && *(s + 1) != '\0'
                        && *(s + 1) != ' ' && *(s + 1) != '\t')
                                *s += ('a' - 'A');
                        write(STDOUT_FILENO, s, sizeof(char) * 1);
                        ++s;
                }
        }
        write(STDOUT_FILENO, "\n", sizeof(char) * 1);
}

int     main(int argc, char **argv)
{
        int     i;

        i = 0;
        if (argc == 1)
                write(STDOUT_FILENO, "\n", sizeof(char) * 1);
        else
                while (++i < argc)
                        ft_rstr_capitalizer(argv[i]);
        return (0);
}


#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("----------\n");
	printf("Test results for ft_isalpha:\n");
	printf("%d-%d", isalpha('A'), ft_isalpha('A'));
	printf("\n----------\n");
	printf("Test results for ft_isdigit:\n");
	printf("%d-%d\n", isdigit('2'), ft_isdigit('2'));
	printf("\n----------\n");
	printf("Test results for ft_isalnum:\n");
	printf("%d-%d\n", isalnum('A'), ft_isalnum('A'));
	printf("%d-%d\n", isalnum('Z'), ft_isalnum('Z'));
	printf("%d-%d\n", isalnum('a'), ft_isalnum('a'));
	printf("%d-%d\n", isalnum('z'), ft_isalnum('z'));
	printf("%d-%d\n", isalnum('0'), ft_isalnum('0'));
	printf("%d-%d\n", isalnum('9'), ft_isalnum('9'));
	printf("%d-%d\n", isalnum('M'), ft_isalnum('M'));
	printf("%d-%d\n", isalnum('m'), ft_isalnum('m'));
	printf("%d-%d\n", isalnum('&'), ft_isalnum('&'));
	printf("%d-%d\n", isalnum('\n'), ft_isalnum('\n'));
	printf("\n----------\n");
	printf("Test results for ft_isascii:\n");
	printf("%d-%d", isascii('\n'), ft_isascii('\n'));
	printf("\n----------\n");
	printf("Test results for ft_isprint:\n");
	while (1)
	{
		int	i;

		i = 0;
		while (i <= 1000)
		{
			if (isprint(i) != ft_isprint(i))
			{
				printf("ft_isprint doesn't work because of ASCII char #%d.\n", i);
				break ;
			}
			i++;
		}
		printf("ft_isprint works!\n");
		break ;
	}
	printf("\n----------\n");
	printf("Test results for ft_strlen:\n");
	printf("%zu|%zu", strlen("Hello!"), ft_strlen("Hello!"));
	printf("\n----------\n");
	printf("Test results for ft_memset:\n");

	printf("\n----------\n");
	printf("Test results for ft_bzero:\n");

	printf("\n----------\n");
	printf("Test results for ft_memcpy:\n");
	int		intsrc;
	int		intdest;
	char	charsrc[] = "Helloworld";
	char	chardest[20];

	intsrc = 123456;
	ft_memcpy(&intdest, &intsrc, sizeof(int));
	printf("Dest integer: %d\n", intdest);
	ft_memcpy(chardest, charsrc, sizeof(charsrc));
	printf("Dest string: %s\n", chardest);
	printf("\n----------\n");
	printf("Test results for ft_memmove:\n");

	printf("\n----------\n");
	printf("Test results for ft_strlcpy:\n");
	char			source1[6] = "Hello";
	char			dest1[6];
	size_t			len1;
	char			source2[6] = "Hello";
	char			dest2[6];
	size_t			len2;
	size_t			size1;
	unsigned int	size2;

	size1 = 6;
	size2 = 6;
	len1 = strlcpy(dest1, source1, size1);
	len2 = ft_strlcpy(dest2, source2, size2);
	printf("for    strlcpy, dest is %s and return value is %zu\n", dest1, len1);
	printf("for ft_strlcpy, dest is %s and return value is %zu\n", dest2, len2);

	char src[] = "coucou";
	char dest3[10]; memset(dest3, 'A', 10);
	printf("%d\n", ft_strlcpy(dest3, src, 0) == strlen(src) && dest3[0] == 'A');
	printf("%s\n", dest3);
	printf("\n----------\n");
	printf("Test results for ft_strlcat:\n");

	printf("\n----------\n");
	printf("Test results for ft_toupper:\n");

	printf("\n----------\n");
	printf("Test results for ft_tolower:\n");

	printf("\n----------\n");
	printf("Test results for ft_strchr:\n");

	printf("\n----------\n");
	printf("Test results for ft_strrchr:\n");

	printf("\n----------\n");
	printf("Test results for ft_strncmp:\n");

	printf("\n----------\n");
	printf("Test results for ft_memchr:\n");

	printf("\n----------\n");
	printf("Test results for ft_memcmp:\n");

	printf("\n----------\n");
	printf("Test results for ft_strnstr:\n");

	printf("\n----------\n");
	printf("Test results for ft_atoi:\n");

	printf("\n----------\n");
	printf("Test results for ft_calloc:\n");

	printf("\n----------\n");
	printf("Test results for ft_strdup:\n");

	printf("\n----------\n");
	printf("Test results for ft_substr:\n");

	printf("\n----------\n");
	printf("Test results for ft_strjoin:\n");

	printf("\n----------\n");
	printf("Test results for ft_strtrim:\n");

	printf("\n----------\n");
	printf("Test results for ft_split:\n");

	printf("\n----------\n");
	printf("Test results for ft_itoa:\n");

	printf("\n----------\n");
	printf("Test results for ft_strmapi:\n");

	printf("\n----------\n");
	printf("Test results for ft_striteri:\n");

	printf("\n----------\n");
	printf("Test results for ft_putchar_fd:\n");

	printf("\n----------\n");
	printf("Test results for ft_putstr_fd:\n");

	printf("\n----------\n");
	printf("Test results for ft_putendl_fd:\n");

	printf("\n----------\n");
	printf("Test results for ft_putnbr_fd:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstnew:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstadd_front:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstsize:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstlast:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstadd_back:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstdelone:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstclear:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstiter:\n");

	printf("\n----------\n");
	printf("Test results for ft_lstmap:\n");

	printf("\n----------\n");

	return (0);
}

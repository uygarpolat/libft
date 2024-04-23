#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void tester_ft_isalpha()
{
	printf("Test results for ft_isalpha:\n");
	printf("%d-%d", isalpha('A'), ft_isalpha('A'));
}

void tester_ft_isdigit()
{
		printf("Test results for ft_isdigit:\n");
	printf("%d-%d\n", isdigit('2'), ft_isdigit('2'));
}

void tester_ft_isalnum()
{
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
}

void tester_ft_isascii()
{
		printf("Test results for ft_isascii:\n");
	printf("%d-%d", isascii('\n'), ft_isascii('\n'));
}

void tester_ft_isprint()
{
		int	i;

	i = 0;
	while (i <= 1000)
	{
		if (isprint(i) != ft_isprint(i))
		{
			printf("ft_isprint doesn't work because of ASCII char #%d.\n", i);
			return ;
		}
		i++;
	}
	printf("ft_isprint works!\n");
}

void tester_ft_strlen()
{
		printf("Test results for ft_strlen:\n");
	printf("%zu|%zu", strlen("Hello!"), ft_strlen("Hello!"));
}

void tester_ft_memset()
{
	
}

void tester_ft_bzero()
{
	
}

void tester_ft_memcpy()
{
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

}

void tester_ft_memmove()
{
	
}

void tester_ft_strlcpy()
{
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

}

void tester_ft_strlcat()
{
		char	str1[15] = "Hello ";
	char	str2[15] = "Hello ";

	printf("%lu\n", strlcat(str1, "World!", sizeof(str1)));
	printf("%s\n", str1);
	printf("%zu\n", ft_strlcat(str2, "World!", sizeof(str2)));
	printf("%s\n", str2);

	char	str3[7] = "Hello ";
	char	str4[7] = "Hello ";

	printf("%lu\n", strlcat(str3, "World!", 7));
	printf("%s\n", str3);
	printf("%zu\n", ft_strlcat(str4, "World!", 7));
	printf("%s\n", str4);

	char	str5[1] = "";
	char	str6[1] = "";

	printf("%lu\n", strlcat(str5, "World!", sizeof(str5)));
	printf("%s\n", str5);
	printf("%zu\n", ft_strlcat(str6, "World!", sizeof(str6)));
	printf("%s\n", str6);

	char	str7[7] = "Hello ";
	char	str8[7] = "Hello ";

	printf("%lu\n", strlcat(str7, "Worldddd!", 2));
	printf("%s\n", str7);
	printf("%zu\n", ft_strlcat(str8, "Worldddd!", 2));
	printf("%s\n", str8);

	char	dest[50] = "Whataworld";
	char	dest_ft[50] = "Whataworld";
	char	src[50] = "Hello, ";
	int		buf;

	buf = 2;
	printf("    strlcat-> %lu, %s\n", strlcat(dest, src, buf), dest);
	printf("ft_strlcat -> %zu, %s", ft_strlcat(dest_ft, src, buf), dest_ft);
}

void tester_ft_toupper()
{
	printf("%c-%c\n", toupper('d'), ft_toupper('d'));	
}

void tester_ft_tolower()
{
	printf("%c-%c\n", tolower('D'), ft_tolower('D'));
}

void tester_ft_strchr()
{
		char s[] = "tripouille";
	printf("%s|%s\n", strchr("abc", '\0'), ft_strchr("abc", '\0'));
	printf("%d|", strchr(s, 't' + 512) == s);
	printf("%d\n", ft_strchr(s, 't' + 512) == s);
	printf("%c\n", 't' + 512);
	printf("%s\n", ft_strchr("teste", '\0'));
}

void tester_ft_strrchr()
{
	printf("   strrchr returns: %s\nft_strrchr returns: %s\n",
		strrchr("abcdefgcdef", 'a'),ft_strrchr("abcdefgcdef", 'a'));	
}

void tester_ft_strncmp()
{
		printf("%d|%d\n", strncmp("Whynot", "Why",
		6), ft_strncmp("Whynot", "Why", 6));
	printf("%d|%d\n",strncmp("test\200", "test\0", 6),
		ft_strncmp("test\200", "test\0", 6));

}

void tester_ft_memchr()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s|", (char *)memchr(tab, -1, 7));
    printf("%s\n", (char *)ft_memchr(tab, -1, 7));	
}

void tester_ft_memcmp()
{
	char s[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	printf("%d|", memcmp(s, s2, 1));
	printf("%d\n", ft_memcmp(s, s2, 1));
	
	printf("%d|", memcmp(s2, s, 1));
	printf("%d\n", ft_memcmp(s2, s, 1));	
}

void tester_ft_strnstr()
{
	printf("%s\n", ft_strnstr("12345678901234567890", "89", 8));
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));	
}

void tester_ft_atoi(int argc, char**argv)
{
	if (argc == 2)
	{	
		printf("   atoi returns: %d\nft_atoi returns: %d\n",
			atoi(argv[1]), ft_atoi(argv[1]));
	}	
}

void tester_ft_calloc()
{
    // Define the number of elements and size of each element
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Allocate memory using ft_calloc
    int *arr = ft_calloc(num_elements, element_size);
    if (arr == NULL) {
        printf("Memory allocation failed\n");
    }

    // Verify that all fields are populated by zeroes
    int all_zeroes = 1;
    for (size_t i = 0; i < num_elements; ++i) {
        if (arr[i] != 0) {
            all_zeroes = 0;
            break;
        }
    }

    // Output the result
    if (all_zeroes) {
        printf("All fields are populated by zeroes\n");
    } else {
        printf("Fields are not properly initialized\n");
    }

    // Free the allocated memory
    free(arr);

	
}

void tester_ft_strdup(int argc, char **argv)

{
	char	*str;
	char	*str_dup;
	char	*ft_str_dup;

	if (argc == 2)
	{
		str = argv[1];
		str_dup = strdup(str);
		ft_str_dup = ft_strdup(str);
		printf("%s-%s\n", strdup(str_dup), ft_strdup(ft_str_dup));
		free(str_dup);
		free(ft_str_dup);
	}	
}

void tester_ft_substr()
{
		printf("%s\n", ft_substr("Hello World!", 15, 11));
	char *s = ft_substr("tripouille", 100, 1);
	printf("%d|", !strcmp(s, ""));
	char *s2 = ft_substr("tripouille", 0, 42000);
	printf("%d\n", !strcmp(s2, "tripouille"));
	printf("%s\n", ft_substr("01234", 10, 10));
}

void tester_ft_strjoin(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strjoin(argv[1], argv[2]));
}

void tester_ft_strtrim(int argc, char **argv)
{
		if (argc == 3)
			printf("%s\n", ft_strtrim(argv[1], argv[2]));
}

static int	ft_word_amount_checker(char const *str, int c, int flag)
{
	int	counter;

	if (!*str)
		return (0);
	counter = 0;
	if (str[0] != c)
		counter = 1;
	while (*str)
	{
		while (*str == c)
		{
			str++;
			flag = 1;
		}
		if (flag == 1)
		{
			if (!*str)
				break ;
			flag = 0;
			counter++;
			str--;
		}
		str++;
	}
	return (counter);
}

static void	copy_characters(char *s, const char *str, int i, int counter)
{
	int	flag;

	flag = 0;
	while (flag < counter)
	{
		s[flag] = str[i - counter];
		i++;
		flag++;
	}
}

static char	*ft_word_length_checker(char const *str, char c, int i, int counter)
{
	int		flag;
	char	*s;

	flag = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] != c)
		{
			flag = 1;
			counter++;
			i++;
		}
		if (flag == 1)
			break ;
		i++;
	}
	s = malloc(sizeof(char) * (counter + 1));
	if (s == NULL)
		return (NULL);
	flag = 0;
	copy_characters(s, str, i, counter);
	s[counter] = '\0';
	return (s);
}

static int	ft_strlen_mod(char const *str, char c, int i)
{
	int	len;
	int	flag;

	len = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			flag = 0;
			len++;
		}
		else if (flag == 0)
			break ;
		else
			len++;
		i++;
	}
	return (len);
}
void tester_ft_split(int argc, char **argv)
{
	int		i;
	char	**str;

	if (argc == 3)
	{
		str = ft_split(argv[1], argv[2][0]);
		i = 0;
		while (str[i])
		{
			printf("Word %d: %s\n", i + 1, str[i]);
			i++;
		}

		printf("%d\n", str[0] == NULL);
	}
}

	static int	ft_digit_counter(int n)
{
	int		digit;

	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		digit = 2;
		n = -n;
	}
	else
		digit = 1;
	while (n > 9)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

static void	ft_strcharcat(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = c;
	str[i + 1] = '\0';
}

static void	ft_putnbr(char *str, int n)
{
	char	c;

	if (n == -2147483648)
	{
		ft_strcharcat(str, '-');
		ft_strcharcat(str, '2');
		n = 147483648;
	}
	else if (n < 0)
	{
		n = -n;
		ft_strcharcat(str, '-');
	}
	if (n >= 10)
	{
		ft_putnbr(str, n / 10);
		ft_putnbr(str, n % 10);
	}
	else
	{
		c = n + '0';
		ft_strcharcat(str, c);
	}
}

void tester_ft_itoa()
{
	char	*str;
	int		nbr;

	nbr = 10000034;
	str = ft_itoa(nbr);
	printf("%s\n", ft_itoa(nbr));
	free(str);

	
}
char	increase_char(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}
void tester_ft_strmapi()
{

		char	input[] = "Hello, World!";
	char	*result;
	
	result = ft_strmapi(input, &increase_char);

	if (result == NULL)
		return ;
	printf("Original string: %s\n", input);
	printf("Modified string: %s\n", result);
	free(result);

}
	void	ft_write(unsigned int i, char *str)
	{
		(void)i;
		write(1, str, 1);
	}
void tester_ft_striteri(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_striteri(argv[1], ft_write);
	}
}

void tester_ft_putchar_fd()
{
	
}

void tester_ft_putstr_fd(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr_fd(argv[1], 1);	
}

void tester_ft_putendl_fd(int argc, char **argv)
{
	if (argc == 2)
		ft_putendl_fd(argv[1], 1);

}

void tester_ft_putnbr_fd()
{
	ft_putnbr_fd(-57, 1);	
}

void tester_ft_lstnew()
{
	t_list *mylist = ft_lstnew("context");
	char* str = (char *)(mylist->content);
	printf("%s\n", str);	
}

void tester_ft_lstadd_front()
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew("context");
	t_list *mylist3 = ft_lstnew("out of ");
	mylist = &mylist2;
	ft_lstadd_front(mylist, mylist3);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	printf("%s", str);
	printf("%s\n", str2);	
}

void tester_ft_lstsize()
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew("out of ");
	t_list *mylist3 = ft_lstnew("context ");
	t_list *mylist4 = ft_lstnew("quotes");
	mylist = &mylist4;
	ft_lstadd_front(mylist, mylist3);
	ft_lstadd_front(mylist, mylist2);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	char *str3 = (char *) (*mylist)->next->next->content;
	printf("%s", str);
	printf("%s", str2);
	printf("%s\n", str3);
	(*mylist)->next->next->next = NULL;
	printf("Size of list is : %d\n", ft_lstsize(*mylist));	
}

void tester_ft_lstlast()
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew("out of ");
	t_list *mylist3 = ft_lstnew("context ");
	t_list *mylist4 = ft_lstnew("quotes");
	mylist = &mylist4;
	ft_lstadd_front(mylist, mylist3);
	ft_lstadd_front(mylist, mylist2);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	char *str3 = (char *) (*mylist)->next->next->content;
	printf("%s", str);
	printf("%s", str2);
	printf("%s\n", str3);
	(*mylist)->next->next->next = NULL;
	printf("Size of list is: %d\n", ft_lstsize(*mylist));
	printf("Last element's content is: quotes\n       ft_lstlast returns: %s\n", (char *) ft_lstlast(*mylist)->content);	
}

void tester_ft_lstadd_back()
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew("out of ");
	t_list *mylist3 = ft_lstnew("context ");
	t_list *mylist4 = ft_lstnew("quotes");
	t_list *mylist5 = ft_lstnew("mislead");
	mylist = &mylist4;
	ft_lstadd_front(mylist, mylist3);
	ft_lstadd_front(mylist, mylist2);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	char *str3 = (char *) (*mylist)->next->next->content;
	printf("%s", str);
	printf("%s", str2);
	printf("%s\n", str3);
	(*mylist)->next->next->next = NULL;
	printf("Size of list is: %d\n", ft_lstsize(*mylist));
	printf("Last element's content is: quotes\n       ft_lstlast returns: %s\n", (char *) ft_lstlast(*mylist)->content);
	ft_lstadd_back(mylist, mylist5);
	char *str4 = (char *) (*mylist)->next->next->next->content;
	printf("%s\n", str4);	
}

static void	del(void* content)
	{	
		free(content);
	}
void tester_ft_lstdelone()
{
	
	t_list **mylist;
	t_list *mylist2 = ft_lstnew(ft_strdup("out of "));
	t_list *mylist3 = ft_lstnew(ft_strdup("context "));
	t_list *mylist4 = ft_lstnew(ft_strdup("quotes"));
	t_list *mylist5 = ft_lstnew(ft_strdup("mislead"));
	mylist = &mylist4;
	ft_lstadd_front(mylist, mylist3);
	ft_lstadd_front(mylist, mylist2);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	char *str3 = (char *) (*mylist)->next->next->content;
	printf("%s", str);
	printf("%s", str2);
	printf("%s\n", str3);
	(*mylist)->next->next->next = NULL;
	printf("Size of list is: %d\n", ft_lstsize(*mylist));
	printf("Last element's content is: quotes\n       ft_lstlast returns: %s\n", (char *) ft_lstlast(*mylist)->content);
	ft_lstadd_back(mylist, mylist5);
	char *str4 = (char *) (*mylist)->next->next->next->content;
	printf("%s\n", str4);
	ft_lstdelone((*mylist)->next, &del);	
}
void tester_ft_lstclear()
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew(ft_strdup("out of "));
	t_list *mylist3 = ft_lstnew(ft_strdup("context "));
	t_list *mylist4 = ft_lstnew(ft_strdup("quotes"));
	t_list *mylist5 = ft_lstnew(ft_strdup("mislead"));
	mylist = &mylist4;
	ft_lstadd_front(mylist, mylist3);
	ft_lstadd_front(mylist, mylist2);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	char *str3 = (char *) (*mylist)->next->next->content;
	printf("%s", str);
	printf("%s", str2);
	printf("%s\n", str3);
	(*mylist)->next->next->next = NULL;
	printf("Size of list is: %d\n", ft_lstsize(*mylist));
	printf("Last element's content is: quotes\n       ft_lstlast returns: %s\n", (char *) ft_lstlast(*mylist)->content);
	ft_lstadd_back(mylist, mylist5);
	char *str4 = (char *) (*mylist)->next->next->next->content;
	printf("%s\n", str4);
	//ft_lstdelone((*mylist)->next, &del);
	ft_lstclear(mylist, &del);	
}

void tester_ft_lstiter()
{
	
}

void tester_ft_lstmap()
{
	
}

int main(int argc, char **argv)
{
	tester_ft_isalpha();
	tester_ft_isdigit();
	tester_ft_isalnum();
	tester_ft_isascii();
	tester_ft_isprint();
	tester_ft_strlen();
	tester_ft_memset();
	tester_ft_bzero();
	tester_ft_memcpy();
	tester_ft_memmove();
	tester_ft_strlcpy();
	tester_ft_strlcat();
	tester_ft_toupper();
	tester_ft_tolower();
	tester_ft_strchr();
	tester_ft_strrchr();
	tester_ft_strncmp();
	tester_ft_memchr();
	tester_ft_memcmp();
	tester_ft_strnstr();
	tester_ft_atoi(argc, argv);
	tester_ft_calloc();
	tester_ft_strdup(argc, argv);
	tester_ft_substr();
	tester_ft_strjoin(argc, argv);
	tester_ft_strtrim(argc, argv);
	tester_ft_split(argc, argv);
	tester_ft_itoa();
	tester_ft_strmapi();
	tester_ft_striteri(argc, argv);
	tester_ft_putchar_fd();
	tester_ft_putstr_fd(argc, argv);
	tester_ft_putendl_fd(argc, argv);
	tester_ft_putnbr_fd();
	tester_ft_lstnew();
	tester_ft_lstadd_front();
	tester_ft_lstsize();
	tester_ft_lstlast();
	tester_ft_lstadd_back();
	tester_ft_lstdelone();
	tester_ft_lstclear();
	tester_ft_lstiter();
	tester_ft_lstmap();

	return (0);
}

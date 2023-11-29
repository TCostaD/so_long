/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:12:15 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/13 20:40:32 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtestpj.h"
#include "libft.h"
#include <stdio.h>

char	test_mapi(unsigned int i, char c)
{
	(void)i;
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void	test_iteri(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 97 && *c <= 122)
		*c = *c - 32;
}

void	del(void *content)
{
	free(content);
	content = NULL;
}

void	test_lstiter(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	test_lstmap(t_list *lst)
{
	t_list	*new_lst;

	new_lst = ft_lstmap(lst, &test_mapi, &del);
	while (new_lst)
	{
		printf("%s\n", (char *)new_lst->content);
		new_lst = new_lst->next;
	}
}

int	main(void)
{
	// Tests header
	printf(YELLOW("PORTO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:\n"));
	printf(YELLOW("<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ") CYAN("Libft library tests") YELLOW(" >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n"));
	printf(YELLOW("TO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:. 42PORTO .:. 4\n\n"));

	// Part 1 - Libc Functions
	printf(YELLOW("################################## ") CYAN("- Part 1 -") YELLOW(" ##################################\n"));
	printf(BLUE("\n* Function in test: ft_atoi *\n"));
	const char	*test_cases[] = {
		"123",
		"-456",
		"   +789"
	};
	int			expected_results[] = {
		123,
		-456,
		789
	};
	int i = 0;
	while (i < 3)
	{
		int result = ft_atoi(test_cases[i]);
		if (result == expected_results[i])
			printf(GREEN("[OK]"));
		else
			printf(RED("[KO]"));
		printf(" Expected: %d, got: %d\n", expected_results[i], result);
		i++;
	}

	printf(BLUE("\n* Function in test: ft_bzero *\n"));
	char test_str[] = "Hello World!";
	ft_bzero(test_str, 5);
	if (test_str[0] == '\0' && test_str[1] == '\0' && test_str[2] == '\0' && test_str[3] == '\0' && test_str[4] == '\0' && test_str[5] != '\0')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_calloc *\n"));
	char *test_calloc = ft_calloc(5, sizeof(char));
	if (test_calloc[0] == '\0' && test_calloc[1] == '\0' && test_calloc[2] == '\0' && test_calloc[3] == '\0' && test_calloc[4] == '\0')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_isalnum *\n"));
    printf("ft_isalnum('a') : ");
	if (ft_isalnum('a'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isalnum('z') : ");
	if (ft_isalnum('z'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isalnum('\\t'): ");
	if (ft_isalnum('\t'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_isalpha *\n"));
    printf("ft_isalpha('a'): ");
	if (ft_isalpha('a'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isalpha('z'): ");
	if (ft_isalpha('z'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isalpha('9'): ");
	if (ft_isalpha('9'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_isascii *\n"));
	printf("ft_isascii(0)  : ");
	if (ft_isascii(0))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isascii(127): ");
	if (ft_isascii(127))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isascii(128): ");
	if (ft_isascii(128))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_isdigit *\n"));
	printf("ft_isdigit('0'): ");
	if (ft_isdigit('0'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isdigit('9'): ");
	if (ft_isdigit('9'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isdigit('a'): ");
	if (ft_isdigit('a'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_isprint *\n"));
	printf("ft_isprint(' ') : ");
	if (ft_isprint(' '))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isprint('~') : ");
	if (ft_isprint('~'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\nft_isprint('\\t'): ");
	if (ft_isprint('\t'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_strlen *\n"));
	printf("\nft_strlen('Hello World!') : ");
	if (ft_strlen("Hello World!") == 12)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_memset *\n"));
	char test_memset[] = "Hello World!";
	printf("test_memset = \"Hello World!\"\n");
	ft_memset(test_memset, 'a', 5);
	printf("ft_memset('Hello World!', 'a', 5) : \"%s\"\n", test_memset);
	if (test_memset[0] == 'a' && test_memset[1] == 'a' && test_memset[2] == 'a' && test_memset[3] == 'a' && test_memset[4] == 'a' && test_memset[5] != 'a')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_memcpy *\n"));
	char test_memcpy[] = "Hello World!";
	printf("test_memcpy = \"Hello World!\"\n");
	ft_memcpy(test_memcpy, "Goodbye World!", 5);
	printf("ft_memcpy('Hello World!', 'Goodbye World!', 5) : \"%s\"\n", test_memcpy);
	if (test_memcpy[0] == 'G' && test_memcpy[1] == 'o' && test_memcpy[2] == 'o' && test_memcpy[3] == 'd' && test_memcpy[4] == 'b' && test_memcpy[5] != 'y')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_memmove *\n"));
	char test_memmove[] = "Hello";
	printf("test_memmove = \"Hello\"\n");
	ft_memmove(test_memmove + 2, test_memmove, 3);
	printf("ft_memmove('Hello' + 2, 'Hello', 3) : \"%s\"\n", test_memmove);
	if (test_memmove[0] == 'H' && test_memmove[1] == 'e' && test_memmove[2] == 'H' && test_memmove[3] == 'e' && test_memmove[4] == 'l')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_strlcpy *\n"));
	char test_strlcpy[] = "Hello World!";
	printf("test_strlcpy = \"Hello World!\"\n");
	printf("ft_strlcpy('Hello World!', 'Goodbye World!', 5) : \"%zu\"\n", ft_strlcpy(test_strlcpy, "Goodbye World!", 5));
	printf("test_strlcpy : \"%s\"\n", test_strlcpy);
	if (ft_strlcpy(test_strlcpy, "Goodbye World!", 5) == ft_strlen("Goodbye World!"))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_strlcat *\n"));
	char test_strlcat[] = "Hello World!";
	printf("test_strlcat = \"Hello World!\"\n");
	printf("ft_strlcat('Hello World!', 'Goodbye World!', 5) : \"%zu\"\n", ft_strlcat(test_strlcat, "Goodbye World!", 5));
	printf("test_strlcat : \"%s\"\n", test_strlcat);
	if (ft_strlcat(test_strlcat, "Goodbye World!", 5) == ft_strlen("Goodbye World!") + 5)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_toupper *\n"));
	printf("ft_toupper('a') : ");
	if (ft_toupper('a') == 'A')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_tolower *\n"));
	printf("ft_tolower('A') : ");
	if (ft_tolower('A') == 'a')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_strchr *\n"));
	printf("ft_strchr('Hello World!', 'W') : ");
	if (ft_strchr("Hello World!", 'W') == strchr("Hello World!", 'W'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_strrchr *\n"));
	printf("ft_strrchr('Hello World Walker', 'W') : ");
	if (ft_strrchr("Hello World Walker", 'W') == strrchr("Hello World Walker", 'W'))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_strncmp *\n"));
	printf("ft_strncmp('Hello World!', 'Hello World!', 12) : ");
	if (ft_strncmp("Hello World!", "Hello World!", 12) == strncmp("Hello World!", "Hello World!", 12))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_memchr *\n"));
	printf("ft_memchr('Hello World!', 'W', 12) : ");
	if (ft_memchr("Hello World!", 'W', 12) == memchr("Hello World!", 'W', 12))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_memcmp *\n"));
	printf("ft_memcmp('Hello World!', 'Hello World!', 12) : ");
	if (ft_memcmp("Hello World!", "Hello World!", 12) == memcmp("Hello World!", "Hello World!", 12))
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_strnstr *\n"));
	char *test_strnstr;
	printf("ft_strnstr('Hello', 'Hello', 5) : ");
	test_strnstr = ft_strnstr("Hello", "Hello", 5);
	if (test_strnstr[0] == 'H' && test_strnstr[1] == 'e' && test_strnstr[2] == 'l' && test_strnstr[3] == 'l' && test_strnstr[4] == 'o')
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_strdup *\n"));
	printf("ft_strdup('Hello World!') : ");
	if (ft_strncmp(ft_strdup("Hello World!"), "Hello World!", 12) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n\n");
	
	// Part 2 - Additional Functions
	printf(YELLOW("################################## ") CYAN("- Part 2 -") YELLOW(" ##################################\n"));
	printf(BLUE("\n* Function in test: ft_substr *\n"));
	printf("ft_substr('Hello World!', 6, 5) : ");
	if (ft_strncmp(ft_substr("Hello World!", 6, 5), "World", 5) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_strjoin *\n"));
	printf("ft_strjoin('Hello ', 'World!') : ");
	if (ft_strncmp(ft_strjoin("Hello ", "World!"), "Hello World!", 12) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_strtrim *\n"));
	printf("ft_strtrim('   Hello World!   ', ' ') : ");
	if (ft_strncmp(ft_strtrim("   Hello World!   ", " "), "Hello World!", 12) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_split *\n"));
	printf("ft_split('Hello World!', ' ') : ");
	char **test_split = ft_split("Hello World!", ' ');
	if (ft_strncmp(test_split[0], "Hello", 5) == 0 && ft_strncmp(test_split[1], "World!", 6) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_itoa *\n"));
	printf("ft_itoa(1234567890) : ");
	if (ft_strncmp(ft_itoa(1234567890), "1234567890", 11) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_strmapi *\n"));
	printf("ft_strmapi('Hello World!', test_mapi) : ");
	if (ft_strncmp(ft_strmapi("Hello World!", &test_mapi), "HELLO WORLD!", 12) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_striteri *\n"));
	printf("ft_striteri('Hello World!', test_iteri) : ");
	char test_striteri[] = "Hello World!";
	ft_striteri(test_striteri, &test_iteri);
	if (ft_strncmp(test_striteri, "HELLO WORLD!", 12) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_putchar_fd *\n"));
	ft_putchar_fd('H', 1);
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_putstr_fd *\n"));
	ft_putstr_fd("Hello World!", 1);
	printf("\n");
	
	printf(BLUE("\n* Function in test: ft_putendl_fd *\n"));
	ft_putendl_fd("Hello World!", 1);
	printf("\n");

	printf(BLUE("\n* Function in test: ft_putnbr_fd *\n"));
	ft_putnbr_fd(1234567890, 1);
	printf("\n\n");
	
	// Bonus Part
	printf(YELLOW("################################ ") CYAN("- Bonus Part -") YELLOW(" ################################\n"));

	printf(BLUE("\n* Function in test: ft_lstnew *\n"));
	char	*test_lstnew = "Hello World!";
	t_list	*lstnew = ft_lstnew(test_lstnew);
	printf("ft_lstnew('Hello World!') : ");
	if (ft_strncmp(lstnew->content, "Hello World!", 12) == 0)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstadd_front *\n"));
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*node;
	int		num1 = 523;
	int		num2 = 123;
	int		num3 = 456;

	lst1 = ft_lstnew(&num1);
	lst2 = ft_lstnew(&num2);
	lst1->next = lst2;
	lst3 = ft_lstnew(&num3);
	ft_lstadd_front(&lst1, lst3);
	node = lst1;
	while (node)
	{
		printf("%d\n", *(int *)node->content);
		node = node->next;
	}
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstsize *\n"));
	printf("ft_lstsize(lst1) : ");
	if (ft_lstsize(lst1) == 3)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstlast *\n"));
	printf("ft_lstlast(lst1) : ");
	if (ft_lstlast(lst1)->content == &num2)
		printf(GREEN("[OK]"));
	else
		printf(RED("[KO]"));
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstadd_back *\n"));
	t_list	*lst4;
	int		num4 = 789;
	lst4 = ft_lstnew(&num4);
	ft_lstadd_back(&lst1, lst4);
	node = lst1;
	while (node)
	{
		printf("%d\n", *(int *)node->content);
		node = node->next;
	}
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstdelone *\n"));
	t_list	*lst5;
	int		num5 = 987;
	lst5 = ft_lstnew(&num5);
	printf("lst5->content : %d\n", *(int *)lst5->content);
	printf("ft_lstdelone(lst5, del) : ");
	ft_lstdelone(lst5, del);
	printf("lst5->content : %d\n", *(int *)lst5->content);
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstclear *\n"));
	printf("lst1->content : %d\n", *(int *)lst1->content);
	printf("lst1->next->content : %d\n", *(int *)lst1->next->content);
	printf("lst1->next->next->content : %d\n", *(int *)lst1->next->next->content);
	printf("ft_lstclear(&lst1, del) : ");
	ft_lstclear(&lst1, del);
	printf("lst1->content : %d\n", *(int *)lst1->content);
	printf("lst1->next->content : %d\n", *(int *)lst1->next->content);
	printf("lst1->next->next->content : %d\n", *(int *)lst1->next->next->content);
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstiter *\n"));
	t_list	*lst6;
	t_list	*lst7;
	t_list	*lst8;
	int		num6 = 111;
	int		num7 = 222;
	int		num8 = 333;
	lst6 = ft_lstnew(&num6);
	lst7 = ft_lstnew(&num7);
	lst8 = ft_lstnew(&num8);
	lst6->next = lst7;
	lst7->next = lst8;
	printf("lst6->content : %d\n", *(int *)lst6->content);
	printf("lst6->next->content : %d\n", *(int *)lst6->next->content);
	printf("lst6->next->next->content : %d\n", *(int *)lst6->next->next->content);
	printf("ft_lstiter(lst6, test_lstiter) : ");
	ft_lstiter(lst6, test_lstiter);
	printf("lst6->content : %d\n", *(int *)lst6->content);
	printf("lst6->next->content : %d\n", *(int *)lst6->next->content);
	printf("lst6->next->next->content : %d\n", *(int *)lst6->next->next->content);
	printf("\n");

	printf(BLUE("\n* Function in test: ft_lstmap *\n"));
	t_list	*lst9;
	t_list	*lst10;
	t_list	*lst11;
	int		num9 = 111;
	int		num10 = 222;
	int		num11 = 333;
	lst9 = ft_lstnew(&num9);
	lst10 = ft_lstnew(&num10);
	lst11 = ft_lstnew(&num11);
	lst9->next = lst10;
	lst10->next = lst11;
	printf("lst9->content : %d\n", *(int *)lst9->content);
	printf("lst9->next->content : %d\n", *(int *)lst9->next->content);
	printf("lst9->next->next->content : %d\n", *(int *)lst9->next->next->content);
	printf("ft_lstmap(lst9, test_lstmap, del) : ");
	t_list	*lst12 = ft_lstmap(lst9, test_lstmap, del);
	printf("lst12->content : %d\n", *(int *)lst12->content);
	printf("lst12->next->content : %d\n", *(int *)lst12->next->content);
	printf("lst12->next->next->content : %d\n", *(int *)lst12->next->next->content);
	printf("\n");

	return (0);
}

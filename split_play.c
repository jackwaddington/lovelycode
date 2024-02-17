#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *s)
{
	int i;
	printf("\n--ft_strlen--\n");
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
		printf("len count is %d\n",i);
	}
	return(i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	printf("\n--ft_strlcpy--\n");
	i = 0;
	if (dstsize == 0)
		printf("\ndstsize is 0\n");
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		printf("copy %d\n",i++);
	}
	dst[i] = 0;
	printf("add null terminator\n");
	return (ft_strlen(src));
}

char *ft_strdup(const char *s1)
{
	char *s2;
	size_t len;

	printf("\n--ft_strdup--\n");
	len = ft_strlen(s1)+1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t amount;

	printf("\n--ft_substr--\n");
	if (!s)
		return(NULL);
	amount = ft_strlen(s);
	if (start >= amount || len == 0)
		return  (ft_strdup(""));
	if (start + len > amount)
		len =  amount - start;
	ptr = (char *) malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

static size_t	ft_count_c_in(const char *s, char c)
{
	size_t	i;

	printf("\n--ft_count_c_in--\n");
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
		printf("ft_count_c_in %d\n", i);
	return (i);
}

static size_t	ft_count_strings(char const *s, char c)
{
	size_t	strings;

	printf("\n--ft_count_strings--\n");
	strings = 0;
	while (*s)
	{
		if (*s != c)
		{
			s += ft_count_c_in (s, c);
			strings++;
			printf("ft_count_strings %d\n", strings);
		}
		else
			s++;
	}
	return (strings);
}

static char **ft_free_array(char **array)
{
	int	i;

	printf("\n--ft_free_array--\n");
	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
		printf("ft_free_array %d\n", i);
	}
	free(array);
	return (NULL);
}

static char **ft_write_strings(char **rtn, size_t strings, \
		char const *s, char c)
{
	size_t	string_len;
	size_t	i;

	printf("\n--ft_write_strings--\n");
	i = 0;
	while (*s && i < strings)
	{
		if (*s == c)
		{
			s++;
			printf("c is in s %d times\n", i);
		}
		else
		{
			string_len = ft_count_c_in(s, c);
			printf("c is in s %d times\n", string_len);
			rtn[i] = ft_substr(s, 0, string_len);
			if (rtn[i] == NULL)
				return (ft_free_array(rtn));
			s += string_len;
			printf("string_len %d\n", string_len);
			i++;
		}
	}
	rtn[i] = NULL;
	return (rtn);
}

char **ft_split(char const *s, char c)
{
	size_t	strings;
	char	**rtn;

	printf("\n--ft_split--\n");
	if (!s)
		return (NULL);
	strings = ft_count_strings(s, c);
	rtn = (char **)malloc((strings + 1) * sizeof(*rtn));
	if (!rtn)
		return (NULL);
	return  (ft_write_strings(rtn, strings, s, c));
}

int	main(void)
{
	char string [] = "ac,def,gsshi,s,sj";
	char character = ',';

	ft_split(string,character);
}

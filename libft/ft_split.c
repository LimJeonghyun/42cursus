#include "libft.h"
#include <stdio.h>
static int  wordscount(char const *s, char c)
{
    int i;
    int count;
    int check;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && check == 0)
        {
            check = 1;
            count++;
        }
        else if (s[1] == c)
            check = 0;
        i++;
    }
    return (count);
}

static char *ft_strcpy(int i, char const *s, char c)
{
    char	*str;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
    printf("...");
	if (!str)
		return (NULL);
    printf("여기는?");
	i = 0;
	while (len > 0)
	{
		str[i] = s[i];
		i++;
        len--;
	}
	str[i] = '\0';
    printf("##%s##]\n", str);
	return (str);
}

char	**ft_split(char const *s, char c)
{
    int word_len;
    char **splitted;
    int i;

    word_len = wordscount(s, c);
    splitted = (char **)malloc(sizeof(char *) * (word_len + 1));
    if(!splitted)
        return (0);
    i = 0;
    while (i < word_len)
    {
        while (*s == c && *s)
            s++;
        if (*s != '\0')
        {
            splitted[i] = ft_strcpy(i, s, c);
            printf("**%s**\n", splitted[i]);
            i++;
        }
        while (*s && *s != c)
            s++;
    }
    splitted[i] = 0;
    return (splitted);
}



int	main()
{

    printf("===");
    char **str = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    while(*str)
        printf("%s\n", *str);
        str++;
    printf("\n");
	
	// else if (arg == 2)
	// 	check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	// else if (arg == 3)
	// 	check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	// else if (arg == 4)
	// 	check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	// else if (arg == 5)
	// 	check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	// return (0);
}

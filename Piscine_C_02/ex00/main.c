#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);
int main()
{
  char	dest [] = {};
  char src [] = "blablabla";
   ft_strcpy(dest, src);
  printf("%s\n", dest);
return (0);
}

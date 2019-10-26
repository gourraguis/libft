#include <stdio.h>
#include "../list.h"

int main()
{
  t_list *tmp = ft_lstnew("saaaaaq");
  int *p;
  *p = 12;
  t_list *tmp2 = ft_lstnew(p);

  printf("%s\n%d", (char *)tmp->content, *((int *)tmp2->content));
  return (0);
}
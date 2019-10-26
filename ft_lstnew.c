#include "list.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
  t_list *res = malloc(sizeof(t_list));

  res->content = content;
  res->next = 0;
  return (res);
}
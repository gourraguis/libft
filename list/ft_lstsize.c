#include "list.h"

int ft_lstsize(t_list *lst)
{
  t_list *tmp;
  int res;

  tmp = lst;
  res = 0;
  while (tmp)
  {
    res++;
    tmp = tmp->next;
  }

  return (res);
}
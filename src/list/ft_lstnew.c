#include "list.h"

t_list *ft_lstnew(void *content)
{
  t_list res = {
      content,
      0};

  return (&res);
}
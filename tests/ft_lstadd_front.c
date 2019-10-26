#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main()
{
  t_list **l = malloc(3 * sizeof(t_list));
  *l = ft_lstnew("first");
  *(l + 1) = ft_lstnew("second");
  (*l)->next = *(l + 1);

  print_list(l);
  ft_lstadd_front(l, ft_lstnew("third"));
  print_list(l);
  return (0);
}
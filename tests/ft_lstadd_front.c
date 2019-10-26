#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main()
{
  t_list **l = malloc(1);
  *l = ft_lstnew("first");
  (*l)->next = ft_lstnew("second");

  print_list(l);
  ft_lstadd_front(l, ft_lstnew("third"));
  print_list(l);
  return (0);
}
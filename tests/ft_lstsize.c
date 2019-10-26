#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int ft_lstsize(t_list *lst);

int main()
{
  t_list **l = malloc(1);
  printf("%d\n", ft_lstsize(*l));
  *l = ft_lstnew("first");
  printf("%d\n", ft_lstsize(*l));
  (*l)->next = ft_lstnew("second");

  printf("%d\n", ft_lstsize(*l));
  ft_lstadd_front(l, ft_lstnew("third"));
  printf("%d\n", ft_lstsize(*l));
  return (0);
}
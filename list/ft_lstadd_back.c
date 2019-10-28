#include "list.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
  /* TODO: replace helpers and shit with allowed functions */
  ft_lstlast(*alst)->next = new;
}
#include "../list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
  t_list *res = malloc(sizeof(t_list));

  res->content = content;
  res->next = 0;
  return (res);
}

void print_list(t_list **l)
{
  t_list *tmp = *l;

  while (tmp)
  {
    printf("%s\n", (char *)tmp->content);
    tmp = tmp->next;
  }
}

void ft_lstadd_front(t_list **alst, t_list *new)
{
  new->next = *alst;
  *alst = new;
}
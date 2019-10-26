#include "../list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *create_list()
{
  t_list *l = ft_lstnew("first");
  l->next = ft_lstnew("second");
  l->next->next = ft_lstnew("third");
  l->next->next->next = ft_lstnew("fourth");

  return l;
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

t_list *ft_lstnew(void *content)
{
  t_list *res = malloc(sizeof(t_list));

  res->content = content;
  res->next = 0;
  return (res);
}

void ft_lstadd_front(t_list **alst, t_list *new)
{
  new->next = *alst;
  *alst = new;
}
#include "helpers.h"

t_list *ft_lstlast(t_list *lst);

int main()
{
  t_list *l = create_list();

  printf("%s", (char *)(ft_lstlast(l)->content));
}
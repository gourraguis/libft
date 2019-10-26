typedef struct s_list
{
  void *content;
  struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **alst, t_list *new);
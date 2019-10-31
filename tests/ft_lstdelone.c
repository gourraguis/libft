#include <stdio.h>
#include "../libft.h"

int main()
{
	t_list *l = ft_lstnew("lala");

	ft_putendl_fd(l->content, 1);
	ft_lstdelone(l, free);
	ft_putendl_fd(l->content, 1);
}

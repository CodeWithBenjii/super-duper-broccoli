#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*array;

	array = (t_list *)malloc(sizeof(t_list));
	if (!array)
		return (NULL);
	array->content = content;
	array->next = NULL;
	return (array);
}

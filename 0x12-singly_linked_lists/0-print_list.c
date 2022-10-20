#include "lists.h"                                                                                                               

/**                                                                                                                             
 *print_list-print elements of the linkedlist                                                                                  
 *@h: linked list                                                                                                               
 *@num: number of nodes                                                                                                        
 *                                                                                                                              
 */                                                                                                                             size_t print_list(const list_t *h)
{
  const list_t *cursor = h;
  size_t num_node = 0;

	while (cursor != NULL)
	{	

	if (cursor->str != NULL)

	printf("[%d] %s\n", cursor->len, cursor->str);

	else

	printf("[0] (nil)\n");

	num_node += 1;

	cursor = cursor->next;
	}

  return (num_node);
}

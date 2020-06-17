#include "list.h"

t_list *mx_create_node(void *data){
	t_list *node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return node;
}
// int main(){
// 	t_list *temp = mx_create_node("hello");
// 	printf("%s\n", temp->data);
// }

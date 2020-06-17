#include "list.h"

void mx_push_front(t_list **list, void *data){
	t_list *nex = malloc(sizeof(t_list));
	nex->data = data;
	nex->next = (*list);
	(*list) = nex;
}

// int main(){
// 	t_list *first = mx_create_node("hello");

// 	mx_push_front(&first, "first");
// 	mx_push_front(&first, "second");
// 	mx_push_front(&first, "third");
// 	while(first){
// 		printf("%s\n", first->data);
// 		first = first->next;
// 	}
// }

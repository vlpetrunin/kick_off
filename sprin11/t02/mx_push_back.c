#include "list.h"

void mx_push_back(t_list **list, void *data){
	t_list *hex = *list;
	if (hex){
		while (hex->next)
			hex = hex->next;
		
		hex->next = mx_create_node(data);
	}
	else 
		*list = mx_create_node(data);
}

// int main(){
// 	t_list *first = mx_create_node("hello");

// 	mx_push_back(&first, "first");
// 	mx_push_back(&first, "second");
// 	while(first){
// 		printf("%s\n", first->data);
// 		first = first->next;
// 	}
// }


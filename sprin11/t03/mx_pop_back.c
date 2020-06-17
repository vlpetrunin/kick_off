#include "list.h"

void mx_pop_back(t_list **list){
	t_list *temp = NULL;

	if(head == NULL || *head == NULL)
		return;
	if((*head)-> == NULL){
		free(*head);
		*head = NULL;
	}
	else {
		temp = *head;
		while (temp && temp->next->next != NULL)
			temp = temp->next;
		free(temp->next);
		temp->next = NULL;
	}
}

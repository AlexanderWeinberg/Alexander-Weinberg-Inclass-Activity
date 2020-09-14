#include <stdio.h>

#include "list.h"

int main() {
  printf("\nTests for linked list implementation:\n\n");
  list_t *mylist = list_alloc();
  list_print(mylist);
  
  list_add_to_front(mylist, 100);
  
  list_add_to_back(mylist, 20);
  
  list_add_at_index(mylist, 7, 1);
  
  list_add_at_index(mylist, 2, 0);
  
  list_add_at_index(mylist, 709, 3); //value, index
  
  list_add_at_index(mylist, 2, 19); //out of range
  
  list_add_to_front(mylist, 89);
  
  //89 2 100 7 709 20 //expected list
  
  list_is_in(mylist,709); //should be true
  
  list_is_in(mylist,89); //should be false
  
//   list_get_elem_at(mylist, 0);
  
//   list_get_elem_at(mylist, 1);
  
//   list_get_elem_at(mylist, 3);
  
//   list_get_elem_at(mylist, 20);
  
  
//   list_get_index_of(mylist, 2);
  
//   list_get_index_of(mylist, 7);
  
//   list_get_index_of(mylist, 1000);
  
  list_print(mylist);
  
  printf("List Length: %d\n",list_length(mylist));
  
  list_free(mylist);
  
  list_print(mylist);
  
  printf("List Length: %d\n",list_length(mylist));
  
  list_add_to_front(mylist, 1);
  
  list_add_to_front(mylist, 2);
  
  list_add_to_front(mylist, 3);
   
  list_add_to_front(mylist, 4);
  
  list_add_to_front(mylist, 5);
  
  list_add_to_front(mylist, 6);
  
//   list_remove_from_back(mylist);
  
//   list_remove_from_back(mylist);
  
  ////6 5 4 3 //expected list
  
  list_print(mylist);
  
  printf("List Length: %d\n",list_length(mylist));
  
  return 0;
}


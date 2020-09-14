// list/list.c
// 
// Implementation for linked list.
//
// <Author: Alexander Weinberg>

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int size = 0; 
list_t *list_alloc() { 
list_t *list = malloc(sizeof(list_t));
list -> head =NULL;
  return list; 
}
void list_free(list_t *l) {
 if (!l) {
      return;
    }
    free(l);
 size = 0;
  printf("List Cleared\n");
}

void list_print(list_t *l) {
  node_t *ptr;
  for(ptr = l-> head; ptr != NULL; ptr = ptr -> next ){
    printf("%d \n", ptr-> value);
  }
}

int list_length(list_t *l) { 
  size -=1;
  if (size < 0){
  size=0;
  }
    return size;
  } 

void list_add_to_back(list_t *l, elem value) {
  node_t *tempo = malloc(sizeof(node_t));
  tempo -> value = value;
  tempo -> next = NULL;
  if(l -> head == NULL){
    l -> head = tempo;
  }else{
    node_t *ptr = l -> head;
    while(ptr -> next != NULL ){
      ptr = ptr-> next;
    }
    ptr -> next = tempo;
  }
    size++;
}
void list_add_to_front(list_t *l, elem value) {
  node_t *tempo = malloc(sizeof(node_t));
  tempo -> value = value;
  tempo -> next = l -> head;
  l -> head = tempo;
  size++;
}
void list_add_at_index(list_t *l, elem value, int index) {
  if (index > size || index < 0){
    printf("Index[%d] for insertion is out of bounds \n", index);
    return; 
  }
  if(index == 0){
    list_add_to_front(l, value);
     size++;
  }
  else if(index == size){ 
    list_add_to_back(l, value);
     size++;
  }else{
    node_t *tempo = malloc(sizeof(node_t));
    tempo -> value = value;
    node_t *ptr =l -> head;
    int count = 0;
    while(count < index -1){
      ptr = ptr->next;
      count++;
    }
    node_t *folder = ptr -> next;
    ptr -> next = tempo;
    tempo->next = folder;
    size++;
  }
}

elem list_remove_from_back(list_t *l) {
//    if (!l){
//         return 0; 
//     }
//     node_t *t = l->head;
//     while (t->next != NULL){
//       t = t->next;
//     }
//     elem remov = t->value;
//     free(t);
//     printf("This element was removed: %d", remov);
  
  if (l->head == NULL){
    printf("List is already empty\n");
    return;
  }
  int current_index = 0;
  node_t *current_node = malloc(sizeof(node_t));
  current_node = l->head;
  while (current_node != NULL){
    if (current_index == size - 1){
      node_t *original_next = malloc(sizeof(node_t));
      original_next = current_node->next;
      current_node->next = NULL;
      size--;
      return original_next->value;
    }
    current_node = current_node->next;
    current_index++;
  }
//     size--;
     }

elem list_remove_from_front(list_t *l) { 
//    if (!l)
//     {
//         printf("The list does not exist.");
//         return 0;
//     }
//     elem returnee = l->head->value;
//     node_t *freer = l->head;
//     l->head = l->head->next;
//     free(freer);
//     return returnee;
//   size--;
}


elem list_remove_at_index(list_t *l, int index) {
//   if (!l){
//         printf("The list does not exist.");
//         return 0;
//     }
//     int i = 0;
//     node_t *t = l->head;
//     while (t->next != NULL && i < index)
//     {
//         t = t->next;
//         i++;
//     }
//     node_t *freer = t->next;
//     elem val = t->next->value;
//     t->next = t->next->next;
//     free(freer);
//     return val;
//     size--;
 }

bool list_is_in(list_t *l, elem value) { 
//   int check = value2;
//   node_t *ptr = l -> head;
//    while(ptr -> next != NULL ){
//       if(ptr -> value == check){
//         printf("%d DOES exist in the list\n", check);
// //         return true;
//       }else{
//         printf("%d DOES NOT exist in the list\n", check);
// //         return false;
//       } 
//   }
  
  //////////////////////////////////////////////////
//   if (!l)
//     {
//         printf("%d DOES exist in the list\n", value);
//         return false;
//     }
//     node_t *t = l->head;
//     while (t->next)
//     {
//         t = t->next;
//     }
//     return t->value == value;
}


elem list_get_elem_at(list_t *l, int index) {
  if (index > size || index < 0){
    printf("Index[%d] to get element is out of bounds \n", index);
    return; 
  }
  node_t *ptr = l -> head;
  int counter = 0;
  int val;
  if(index == 0 ){
     val =  ptr -> value ;
  }else{
    while(counter < index){
      ptr = ptr->next;
     val = ptr -> value;
    counter++;}
}
  printf("%d is at index[%d]\n",val, index); 
}

int list_get_index_of(list_t *l, elem value) { 
//   node_t *ptr = l -> head;
//   int counte = 0;
//   int index_valu;
// //   if ( value == null){
// //     printf("The element %d is not in the list.",value);
// //   }
//   while (counte<size){
//     ptr = ptr->next;
//     if (ptr -> value == value){
//       index_valu = counte;
//     }else{printf("The element %d is not in the list.",value);}
//     counte++;
//   }
  
// printf("The element %d is at index[%d]\n",value, index_valu);
}
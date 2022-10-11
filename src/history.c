#include <stdio.h>

#include <stdlib.h>

#include "history.h"

#include "tokenizer.h"



List* init_history()

{

  List *history;

  history = NULL;

  history = malloc(sizeof(List));

  return history;

}


void add_history(List *list, char *str){

  Item * node = (Item*)malloc(sizeof(Item));

  int a = 0;

  while(str[a] != '\0'){

    a++;

  }

  node->str = copy_str(str,a);



  if (list->root == NULL) {

    list->root = node;

    node->id = 1;

  }

  else {

    Item *temp = list->root;



    while(temp->next != NULL){

      node->id += 1;

      temp = temp->next;

    }

    temp->next = node;

    node->id += 1;

  }

}



char *get_history(List *list, int id){

  Item *node = list->root;

  char *i = " ";

  while(list != NULL){

    if(node->id == id){

      i = node->str;

      return i;

    }

    node = node->next;

  }

  return i;

}





void print_history(List *list){

  int i = 1;

  Item *temp = list->root;

  if(list == NULL){

    printf("Its Empty\n");

    return;

  }

  printf("Linked list: \n");

  while(temp != NULL){

    printf("[%d] %s \n",i, temp->str);

    temp = temp->next;

    i++;

  }

  void free_history(List *list){

    Item *temp = list->root;

    while(list != NULL){

      temp = temp ->next;
      free(temp);
    }
    free(list);
  }
}


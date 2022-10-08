#include <stdio.h>

#include <stdlib.h>

#include "history.h"

#include "tokenizer.h"



List* init_history()

{

  List *history;

  history = (List*)  malloc(sizeof(List));

  history ->root = NULL;

  return history;

}



void add_history(List* list,char* str)

{

  Item *new = (Item*) malloc(sizeof(Item));



  if (list->root == NULL){

    new->id = 1;

    list->root = new;

  }

  else {

    Item *currItem = list->root;

    while(currItem->next != NULL)

      {

	currItem = currItem->next;

      }

    new->id = currItem->id + 1;

    currItem->next = new;

  }

  new->str = str;

  new->next = NULL;

}

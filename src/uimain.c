#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
//#include "history.h"



int main(){
  char userInput[100];

  printf("Type string: \n");

  printf("$");

  fgets(userInput, 95, stdin);

  char **strings = tokenize(userInput);

  print_tokens(strings);
}



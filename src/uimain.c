#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#define MAX 400
/*t main(){

  char userInput[100];

  printf("Type string: \n");

  printf("$");

  fgets(userInput, 95 ,stdin);
  
  char **strings = tokenize(userInput);
  
  print_tokens(strings);

  }*/

int main()

{



  char input[MAX];

  char** tokens;

  List *history = init_history();



  printf("Please type a word to tokenize it. Press 'h' to print history. Press '!' to get specific entry in history. Or press 'q' to exit.\n");



  while (input[0] != 'q'){

    putchar('$');

    fgets(input, MAX, stdin);



    printf("You typed: %s", input);



    tokens = tokenize(input);



    printf("Printing tokens---------");



    print_tokens(tokens);



    add_history(history, input);



    if (input[0] == 'h'){

      print_history(history);

    }



    if (input[0] == '!'){

      char *h = get_history(history,atoi(input+1));

      char **tokens = tokenize(h);

      printf("History: %s\n", h);

      printf("History tokenized:\n");

      print_tokens(tokens);
      free_tokens(tokens);


    }

  }

  return 0;

}

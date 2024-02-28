#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void encrypt(char *text, int shift);
void decrypt(char *text, int shift);

//logic bug at inputs
//need to fix shift when it exceeds both upper and lower case z
//using this algo, errors occurs when input text have spaces in them
//inputing a couple of letters produces an ouput more than the inputed letters bug

int main(void){ 

  char direction[32];
  char text[32];
  int shift;
  char encode[] = {"encode"};
  bool run = true;

  while (run){

    printf("Please enter text: ");
    scanf("%s", text);

    printf("Please enter direction (encode or decode): ");
    scanf("%s", direction);

    printf("Please enter shift amount: ");
    scanf("%d", &shift);

    if ((strcmp(direction, encode)) == 0){
        encrypt(text, shift);
    }
    else{
      decrypt(text, shift);
    }

    char shouldRunAgain[32];
    char no[] = {"no"};

    printf("Type 'yes' should you desire to continue, otherwise 'no': ");
    scanf("%s", shouldRunAgain);

    if ((strcmp(shouldRunAgain, no)) == 0){
      printf("Good bye bye\n");
      run = false;
    }
  }
}

void encrypt(char *text, int shift){ 

  int len = strlen(text);
  char end_text[len];

  for (int i = 0; i < len; i++){
    if ((text[i] + shift) > 'z'){
      end_text[i] = ((text[i] + shift) - 26);
    }
    else if (('A' <= text[i] && text[i] <= 'Z') || ('a' <= text[i] && text[i] <= 'z')){
      end_text[i] = text[i] + shift;
    }
    else{
      end_text[i] = text[i];
    }
  }
  
  printf("The Encrypted text is: %s\n", end_text);
}

void decrypt(char *text, int shift){ 

  int len = strlen(text);
  char end_text[len];
  for (int i = 0; i < len; i++){
    if ('a' <= text[i] && text[i] <= 'z'){
      end_text[i] = text[i] - shift;
    }
    else if ('A' <= text[i] && text[i] <= 'Z'){
      end_text[i] = text[i] - shift;
    }
    else{
      end_text[i] = text[i];
    }
  }

  printf("The Decrypted text is: %s\n", end_text);
}

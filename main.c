#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void encrypt(char plaintext[], int shift);

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Usage: ./ceasar key\n");
        return 1;
    }

    for (int key = 0; key < strlen(argv[1]); key++){
        if (isalpha(argv[1][key])){
            printf("Usage: ./ceasar key\n");
            return 1;
        }
    }

    int shift = atoi(argv[1]) % 26;
    char text[50000];

    printf("Plaintext: ");
    fgets(text, 50000, stdin);

    encrypt(text, shift);
}

void encrypt(char plaintext[], int shift){

    int len = strlen(plaintext);
    char ciphertext[len];

    for (int i = 0; i < len; i++){
        if (('A' <= plaintext[i] && plaintext[i] <= 'Z') || ('a' <= plaintext[i] && plaintext[i] <= 'z')){
            if ((plaintext[i] + shift) >= 123){
                ciphertext[i] = (plaintext[i] - 26) + shift;
            }
            else if ((plaintext[i] + shift) <= 96 && (plaintext[i] + shift) >= 91){
                ciphertext[i] = (plaintext[i] - 26) + shift;
            }
            else{
                ciphertext[i] = (plaintext[i] + shift);
            }
        }
        else{
            ciphertext[i] = plaintext[i];
        }
    }

    ciphertext[len] = '\0';

    printf("Ciphertext: ");

    for (int i = 0; i < strlen(ciphertext); i++){
        if (ciphertext[i] != '\0'){
            printf("%c", ciphertext[i]);
        }
    }
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int counter (char text[]);

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  char text[1000];

  printf("Texto: ");
  fgets(text, sizeof(text), stdin);


  return 0;
}

int counter (char text[]) {
  int letters = 0;
  int words = 1;
  int sentences = 0;

  for (int i = 0; text[i] != '\0'; i++) {
    int character = text[i];

    if ( (character >= 65 && character <= 90) || (character >= 97 && character <= 122) ) {
      letters++;
    }
    else if ( character == 32 ) {
      words++;
    }
    else if ( character == 33 || character == 43 || character == 63 ) {}
  }

  return letters, words, sentences;
}
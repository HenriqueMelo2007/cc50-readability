#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void counter (char text[], int *lettersResult, int *wordsResult, int *sentencesResult);

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  char text[1000];

  printf("Texto: ");
  fgets(text, sizeof(text), stdin);

  int lettersResult;
  int wordsResult;
  int sentencesResult;

  counter(text, &lettersResult, &wordsResult, &sentencesResult);
  printf("%i %i %i", lettersResult, wordsResult, sentencesResult);


  return 0;
}

void counter (char text[], int *lettersResult, int *wordsResult, int *sentencesResult) {
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
    else if ( character == 33 || character == 46 || character == 63 ) {
      sentences++;
    }
  }

  *lettersResult = letters;
  *wordsResult = words;
  *sentencesResult = sentences;
}
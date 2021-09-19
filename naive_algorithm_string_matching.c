#include <stdio.h>
#include <string.h>

int match(char [], char []);

int main() {
  char a[100], b[100];
  int position;

  printf("Enter some text: ");
  gets(a);

  printf("\n\nEnter a string to find: ");
  gets(b);

  position = match(a, b);

  if (position != -1) {
    printf("\nFound at location: %d\n", position + 1);
  }
  else {
    printf("\nNot found.\n");
  }

  return 0;
}

int match(char text[], char pattern[]) {
  int c, d, e, text_length, pattern_length, position = -1;

  text_length    = strlen(text);
  pattern_length = strlen(pattern);

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;

    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      return position;
    }
  }

  return -1;
}

/*
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging
 */

#include <stdio.h>

#define MAXLEN 10

int main(void) {
  int c, w = 0;
  int ndigit[MAXLEN] = {0};

  while ((c = getchar()) != EOF) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      w++;
    } else {
      if (w > 0 && w <= MAXLEN) {
        ndigit[w - 1]++;
      }
      w = 0;
    }
  }

  if (w > 0 && w <= MAXLEN)
    ndigit[w - 1]++;

  for (int i = 0; i < MAXLEN; i++) {
    printf("%2d | ", i + 1);
    for (int j = 0; j < ndigit[i]; j++)
      printf("*");
    printf("\n");
  }


  return 0;
}

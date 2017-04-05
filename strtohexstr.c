#include <stdio.h>

/*
This snippet will convert an ascii string to hex encoded string
*/

char *ascii_string = "github.com/greglangford";
char query[255];

/*
strtohexstr: pass string as first arg and pointer to char array to store result as second arg
hex encoded string will be writted to the pointer hexstr
*/
void strtohexstr(char str[], char *hexstr[]) {
  char buf[255];
  int pos = 0;

  while(*str) {
    char c[2];
    sprintf(c, "%02X", *str++);

    for(int i = 0; i < sizeof(c); i++) {
      buf[pos] = c[i];
      pos++;
    }
  }

  // copy buf string to hexstr pointer
  sprintf(*hexstr, "%s", buf);
}

int main(void) {
  // create pointer to query
  char *ptrquery = query;

  printf("Original String: %s\n", ascii_string);
  strtohexstr(ascii_string, &ptrquery);
  printf("Hex Encoded String: %s\n", query);
}

#include <stdio.h>

/*
This snippet will convert the ssid into a HEX string
*/

char *ssid = "github.com/greglangford";
char query[255];

/*
strtohexstr: pass string as first arg and pointer to char array as second arg
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

  printf("Original String: %s\n", ssid);
  strtohexstr(ssid, &ptrquery);
  printf("Hex Encoded String: %s\n", query);
}

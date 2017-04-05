#include <stdio.h>

/*
This snippet will convert the ssid into a HEX string
*/

char *ssid = "this is a long ssid";
char query[255];

int main(void) {
  int pos = 0;

  printf("The string is: %s\n", ssid);

  while(*ssid) {
    char c[2];
    sprintf(c, "%02X", *ssid++);

    for(int i = 0; i < sizeof(c); i++) {
      query[pos] = c[i];
      pos++;
    }
  }

  printf("The HEX string is: %s\n", query);
}

#include <stdio.h>
#include <stdlib.h>

void strtohexstr(char *str, char *hexstr[]) {
  while(*str) {
    char c[2];
    sprintf(c, "%02X", (int) *str);
    for(int i = 0; i < sizeof(c); i++) {
      printf("%c\n", c[i]);
    }

    *str++;
  }
}

int main(void) {
  char *ssid = "BT-Fon-Network";
  char *bssid = "00:11:22:33:44:55";

  char *hexssid;

  strtohexstr(ssid, &hexssid);

  return 0;
}

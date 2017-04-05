#include <stdio.h>

/*
This snippet will change the variable data within change_data
*/

char data[255];

void change_data(char *str[]) {
  // set original data variable to some other string
  sprintf(*str, "some new data\n");
}

int main(void) {
  sprintf(data, "ORIGINAL: This is a string\n");
  printf("%s", data);

  // create pointer to data
  char *ptr = data;

  // change data
  change_data(&ptr);

  // print changes
  printf("CHANGED: %s\n", data);
}

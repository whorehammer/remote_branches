#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fuck(int i){
  return i + 6;
}

void add_string(char *input) {
  for(int ii=0; ii<strlen(input); ii++) {
     input[ii]++;
   }
}

char * alloc_string(void) {
  char *phrase = strdup("i fuck dick");
  printf("C just allocated %p(%ld):  %s\n",
           phrase, (long int)phrase, phrase);
  return phrase;


}

void free_string(char *ptr){
  printf("About to free %p(%ld):  %s\n",
           ptr, (long int)ptr, ptr);
  free(ptr);
}

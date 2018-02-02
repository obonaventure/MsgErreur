#include<stdio.h>
#include<stdlib.h>

#include<string.h>

char *strcpy(const char *src, int len){
  char *dest = malloc(sizeof(char)*len);
  if (!dest)
    return NULL;

  int i;
  for(i = 0; src[i] != '\0'; i++){
    dest[i] = src[i];
  }
  dest[i+1] = '\0';

  return dest;
}

char *strcpy(char *dest, const char *src){
  int i;
  for(i = 0; src[i] != '\0'; i++){
    dest[i] = src[i];
  }
  dest[i+1] = '\0';

  return dest;
}

#include<stdio.h>

#include<string.h>
void main()
{ char name[10]= "isha negi";
  char name1[10];
  strcpy(name1,name);
  printf("Copied name: ");
    puts(name1);
}
#include <stdio.h>
#include "ifttt.h"

int main(int argc, char *argv[])
{
/*
  ifttt("https://maker.ifttt.com/trigger/button_pressed/with/key/dg8tgxUz5PexjUXcXNSWIw", "my1", "my 2", "my 33333");
*/

  printf("Trying to connect to server\n");
  ifttt("http://red.eecs.yorku.ca:8080/trigger/event/with/key/stevens", "my1", "my 2", "my 33333");
  return 0;
}

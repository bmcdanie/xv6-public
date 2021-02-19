#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int *pi = 0;
  printf(1, "should crash: %p\n", *pi);
  exit();
}

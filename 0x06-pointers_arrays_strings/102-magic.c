#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  
  *(p + 5) = 98; // This line modifies memory in a way that affects a[2]
  
  printf("a[2] = %d\n", a[2]); // This should now print "a[2] = 98"
  return (0);
}

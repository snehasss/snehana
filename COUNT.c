#include <stdbool.h>
#include <stdio.h>
#include <string.h>
static int
count_substr(const char *str, const char* substr, bool overlap) 
{
if (strlen(substr) == 0) return -1; // forbid empty substr
int count = 0;
int increment = overlap ? 1 : strlen(substr);
for (char* s = (char*)str; (s = strstr(s, substr)); s += increment)
++count;
  return count;
}
int main() 
{
  char *substrs[] = {"a", "aa", "aaa", "b", "", NULL };
  for (char** s = substrs; *s != NULL; ++s)
    printf("'%s' ->  %d, no overlap: %d\n", *s, count_substr("aaaaa", *s, true),
       count_substr("aaaaa", *s, false));
}

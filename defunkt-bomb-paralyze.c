#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main ()
{
  pid_t child_pid;
  int pnum = 0;
  int last_was_error = 0;

  while((child_pid = fork())) {
    if (child_pid == 0) {
      return 0;
    } else if(child_pid == -1) {
      if(last_was_error == 0) { printf("fork error on %d\n", pnum); }
      last_was_error = 1;
      continue;
    } else {
      last_was_error = 0;
      pnum++;
    }
    printf("%d\n", child_pid);
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main ()
{
  pid_t child_pid;
  int pnum = 0;

  while((child_pid = fork())) {
    if (child_pid == 0) {
      return 0;
    } else if(child_pid == -1) {
      printf("break\n%d\n", pnum);
      sleep(600);
      break;
    } else {
      pnum++;
    }
  }
  return 0;
}

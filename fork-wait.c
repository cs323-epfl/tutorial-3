#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int pid = fork();
  if (pid < 0) {
    // fork failed
    exit(1);
  } else if (pid == 0) {
    // child (new) process
    sleep(1);
  } else {
    // Parent process execution path
    int wc = wait(NULL);
  }
  return 0;
}

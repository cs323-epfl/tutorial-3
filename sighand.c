  #include <stdio.h>
  #include <stdlib.h>
  #include <sys/types.h>
  #include <sys/wait.h>
  #include <unistd.h>
 
  void sig_handler(int signo)
  {
     if (signo == SIGINT) {
           printf("received SIGINT\n");
    }
 }

 int main(int argc, char *argv[])
 {
     signal(SIGINT, sig_handler);
 
     printf("Process is sleeping\n");
     while (1) {
            sleep(1000);
     }
     return 0;
}

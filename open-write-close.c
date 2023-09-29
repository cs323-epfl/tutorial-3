#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {

    char buf[] = "tutorial 3: syscalls\n";

    int fd = open("./file0", O_CREAT | O_RDWR, 0644);
    if(fd == -1) return -1;
    write(fd, buf, sizeof(buf));
    close(fd);
    return 0;
}

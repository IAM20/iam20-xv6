#include "types.h"
#include "stat.h"
#include "user.h"

void
printf(int fd, const char *s, ...)
{
  write(fd, s, strlen(s));
}

int
main(void)
{
  int pid = fork();
  printf(1, "My pid %d\n", getpid());
  if (pid == 0) {
    printf(1, "My pid %d and My ppid %d\n", getpid(), getppid());
    exit();
  }
  return 0;
}
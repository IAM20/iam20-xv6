#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1, "My pid %d\n", getpid());
  printf(1, "My ppid %d\n", getppid());
  return 0;
}

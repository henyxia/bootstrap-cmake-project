#include <stdio.h>
#include "version.h"

int main(void) {
  fprintf(stderr, "bootstrap-cmake-project\n");
  fprintf(stderr, "-----------------------\n\n");
  fprintf(stderr, "built-in variables:\n");
  fprintf(stderr, "    * GIT_BRANCH: %s\n", GIT_BRANCH);
  fprintf(stderr, "    * GIT_TAG   : %s\n", GIT_TAG);
  fprintf(stderr, "    * GIT_REV   : %s\n", GIT_REV);

  return 0;
}

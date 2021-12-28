#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    printf("io count = %d\n", getiocount());
    exit(0);
}

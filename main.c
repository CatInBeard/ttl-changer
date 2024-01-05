#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (geteuid() != 0) {
        printf("This program needs to be run as root\n");
        return 1;
    }

    if (setuid(0) != 0) {
        perror("setuid");
        return 1;
    }

    char *argv[] = { "/usr/sbin/sysctl", "net.ipv4.ip_default_ttl=65", NULL };
    if (execvp(argv[0], argv) == -1) {
        perror("execvp");
        return 1;
    }

    return 0;
}


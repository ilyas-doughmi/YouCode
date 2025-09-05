#include <stdio.h>

int main() {
    for(int i = 1; i <= 6; i++) {
        if(i == 4 || i == 5) {
            printf("* *\n");
        } else {
            printf("*\n");
        }
    }
    return 0;
}

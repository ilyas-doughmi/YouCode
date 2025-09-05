#include <stdio.h>

int max(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int x = 10, y = 25;
    printf("Le plus grand nombre entre %d et %d est : %d\n", x, y, max(x, y));
    return 0;
}

#include <stdio.h>

void stradd(char str1[], char str2[]) {
    int i = 0;
    int j = 0;

    while(str1[i] != '\0'){
        i++;
    }

    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    char name1[300] = "Hello ";
    char name2[300] = "Ilyas";

    stradd(name1, name2);
    printf("%s\n", name1);

    return 0;
}

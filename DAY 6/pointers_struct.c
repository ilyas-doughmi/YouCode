#include <stdio.h>
#include <string.h>

typedef struct {
    char* annes[200];
} livre;

livre lv1;

int main() {
        lv1.annes[0] = "1990";   

    printf("avant : %s\n", lv1.annes[0]); 
    lv1.annes[0] = "2023";   

    printf("apres: %s\n", lv1.annes[0]);  

    return 0;
}

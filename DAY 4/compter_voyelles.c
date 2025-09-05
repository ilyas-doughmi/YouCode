#include <stdio.h>

int main(){
    char name[500] = "Programming";
    int count = 0;
    
    int size = sizeof(name) / sizeof(name[0]);

    for(int i = 0; i < size; i++){
        if(name[i] == 'a' || name[i] == 'e'|| name[i] == 'o'|| name[i] == 'u'|| name[i] == 'y' || name[i] == 'i')
        {
            count ++;
        }
    }

    printf("We have %d voyelles\n",count);
}

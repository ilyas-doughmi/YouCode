#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[500];
    char year[500];
    int prix;
}livre;


int main(){
    int n;
    printf("How many books : ");
    scanf(" %d",&n);

    livre *book = malloc(n *sizeof(livre));
    

    if(book == NULL){
        printf("Memory Allocation Problem\n");
        return 1;
    }

    for(int i = 0 ; i < n ; i++){
        printf("Enter title of %d: ",i + 1);
        scanf("%s",&book[i].name);
            printf("Enter year of %d: ",i + 1);
        scanf("%s",&book[i].year);

    }
    printf("\\ LIBRARY \\\n");
    for(int i = 0 ; i < n ; i++){
        printf("%s %s\n",book[i].name,book[i].year);
    }

    free(book);
}
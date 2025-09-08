#include <stdio.h>
#include <string.h>


int reccurence(int tab[8],int number,int i){
    int count = 0;
    // FIXING THE REPEATATION OF NUMBERS //
    for(int j =0 ; j < i ; j++){
        if(tab[j] == number){
            return 0;
        }
    }

    // calculating Count //
    for(int i = 0; i < 8 ; i++){
        if(number == tab[i]) {
            count ++ ;
        }
    }
    return count;

    
}
int main(){
    int tab[8] = {4,4,3,5,1,1,4,3};
    for(int i = 0 ; i< 8 ; i++){
        {      
            if(reccurence(tab,tab[i],i) != 0){
                printf("%d found %d\n",tab[i],reccurence(tab,tab[i],i));
            }
        }
    }
}
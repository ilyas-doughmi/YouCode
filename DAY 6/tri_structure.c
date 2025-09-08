#include <stdio.h>

typedef struct {
    int year;
} Book;

int main() {
    Book books[5] = {
        {1990},
        {1920},
        {2014},
        {2025},
        {2015}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (books[i].year > books[j].year) {
                int temp = books[i].year;
                books[i].year = books[j].year;
                books[j].year = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", books[i].year);
    }

}

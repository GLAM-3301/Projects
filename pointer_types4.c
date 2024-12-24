#include <stdio.h>

int main() {
    int i;

    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    void *void_pointer;

    void_pointer = (void *) char_array;

    for (i=0; i < 5; i++) {
        printf("[char pointer] указывает на адрес %p, содержащий cumvol '%c'\n", void_pointer, *((char *) void_pointer));
        void_pointer = (void *) ((char *) void_pointer + 1);
    }

    void_pointer = (void *) int_array;

    for (i=0; i < 5; i++) {
        printf("[integer pointer] указывает на адрес %p, содержащий celoe chislo '%d'\n", void_pointer, *((int *) void_pointer));
        void_pointer = (void *) ((int *)void_pointer + 1);
   }

}

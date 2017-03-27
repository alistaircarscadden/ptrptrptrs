#include <stdio.h>
int main(void) {
    long a = 5;
    long* a_ptr = &a;
    long** a_ptr_ptr = &a_ptr;
    long*** a_ptr_ptr_ptr = &a_ptr_ptr;
    long**** a_ptr_ptr_ptr_ptr = &a_ptr_ptr_ptr;

    printf("a: %ld\n", ****a_ptr_ptr_ptr_ptr);
}

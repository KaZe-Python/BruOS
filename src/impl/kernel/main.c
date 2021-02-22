#include "print.h"

void kernel_main(){
    print_clear();
    print_set_color(Y_COLOR, B_COLOR);
    print_str("Hi");
}
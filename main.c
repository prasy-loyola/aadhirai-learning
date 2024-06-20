#include <stdio.h>
#include "add.h"
//standard io input output

/*
 * Function declaration syntax
 * <return type> <function name>(...<parameters>) {
 *   <function body>
 * return <return value>;
 * }
 *
 */


float addFloat(float a, float b) {
    return a + b;
}

void sayHello() {
    printf("Hello World\n");
}

int main() {
    int c = add(2, 30);
    printf("add(2, 30) = %d\n", c);

    float d = addFloat(3.45, 2.23);
    printf("addFloat(3.45, 2.23) = %f\n", d);

    return 0;
}

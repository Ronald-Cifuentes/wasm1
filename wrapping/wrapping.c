#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addNums(int a, int b)
{
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int main(int argc, char const *argv[])
{
    printf("Wrapping application, %d\n", addNums(3, 6));
    return 0;
}

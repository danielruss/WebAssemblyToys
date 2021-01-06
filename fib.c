// more work with emscripten and wasm..
// https://developers.google.com/web/updates/2018/03/emscripting-a-c-library
// compile with emcc -O3 -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]' fib.c -o fib.js

#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int fib(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int i, t, a = 0, b = 1;
    for (i = 1; i < n; i++)
    {
        t = a + b;
        a = b;
        b = t;
    }
    return b;
}

/*  A simple function for testing emscripten..  */
#include <math.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float npi(float n)
{
    return n * M_PI;
}

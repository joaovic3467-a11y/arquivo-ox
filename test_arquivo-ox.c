#include <assert.h>

int validar(char c);

int main()
{
    assert(validar('X') == 1);
    assert(validar('O') == 1);

    assert(validar('A') == 0);
    assert(validar('x') == 0);

    return 0;
}

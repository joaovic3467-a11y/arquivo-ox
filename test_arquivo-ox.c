#include <assert.h>

int main()
{
    /* Casos válidos */
    assert(validar('X') == 1);
    assert(validar('O') == 1);

    /* Casos inválidos */
    assert(validar('A') == 0);
    assert(validar('x') == 0);
    assert(validar('o') == 0);
    assert(validar('1') == 0);
    assert(validar(' ') == 0);
    assert(validar('\n') == 0);
    assert(validar('*') == 0);

    return 0;
}

#include <iostream>
#include <cmath>
int main()
{
    float x;
    float f;
    float fd;
    float vb;
    float h;
    float esp = 0.00001F;
    std::cout << "donnez un x = ";
    std::cin >> x;
    do
    {
        f = std::exp(x * x) + x - 3.0F;
        fd = 2.0F * x * std::exp(x * x) + 1.0F;
        h = -f / fd;
        vb = ((h / x) < 0.0F) ? (-h / x) : (h / x);
        x = x + h;
        std::cout << "x = " << x << "\t f(x) = " << f << std::endl;
    } while (vb > esp);
    return 0;
}



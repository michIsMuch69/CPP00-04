
#include <iostream>


int main(void)
{

    float a = 0.1f, b = 0.2f;
    if ((a + b) == 0.3f) {
        std::cout << "Egal!";
    } else {
        std::cout << "Pas exactement!"; // Ce cas peut arriver !
    }
}
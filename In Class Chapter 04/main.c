#include <stdio.h>

int main()
{

    for (unsigned int counter = 1; counter <= 10; ++counter) {
        if (counter == 7) {
            continue;
        }
        printf("%u ", counter);
    }
    
    return 0;
}

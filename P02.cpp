#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

class Random {
private:

public:
    int getRandom (int low, int high);
};

int Random::getRandom(int low, int high)
{
    srand(time(NULL));
    return rand() % high + low;
}

class World : public Random{

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
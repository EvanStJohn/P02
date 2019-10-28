#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Random {
protected:
    int getRandom(int low, int high);
};

int Random::getRandom(int low, int high)
{
    srand(time(NULL));
    return rand() % high + low;
}

class World : public Random{
private:
    int survivors = 7000000;
    int population = 7000000;
    void earthQuakes();
    void tsunamis();
    void volcanoes();
    void iceAge();
    void meteorite();
    void hunger();
    void fires();
    void zombies();
    void hurricanes();
    void totalSurvivors();
    void newWorld();
public:
    void API();
};

void World::earthQuakes()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::tsunamis()
{
    double percent = getRandom(0, 20);

    survivors = survivors - (population * (percent / 100));
}

void World::volcanoes()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::iceAge()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::meteorite()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::hunger()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::fires()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::zombies()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::hurricanes()
{
    double percent = getRandom(0, 10);

    survivors = survivors - (population * (percent / 100));
}

void World::newWorld()
{
    if (survivors > 0)
    {
        cout << "Happy Ending" << endl;
    }
    else
    {
        cout << "No Happy Ending" << endl;
    }
}

void World::totalSurvivors()
{
    cout << survivors << " people remain" << endl;
}

void World::API()
{
    earthQuakes();
    tsunamis();
    volcanoes();
    iceAge();
    meteorite();
    fires();
    hunger();
    zombies();
    hurricanes();
    newWorld();
    totalSurvivors();
}

int main() {
    World world;
    world.API();
    return 0;
}
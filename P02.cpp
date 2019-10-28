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
    int percent = getRandom(0, 10);

    survivors = survivors - (percent * 70000);
}

void World::tsunamis()
{
    int percent = getRandom(1, 20);

    survivors = survivors - (percent * 70000);
}

void World::volcanoes()
{
    int percent = getRandom(1, 10);

    survivors = survivors - (percent * 70000);
}

void World::iceAge()
{
    int percent = getRandom(1, 10);

    survivors = survivors - (percent * 70000);
}

void World::meteorite()
{
    int percent = getRandom(1, 10);

    survivors = survivors - (percent * 70000);
}

void World::hunger()
{
    int percent = getRandom(1, 10);

    survivors = survivors - (percent * 70000);
}

void World::fires()
{
    int percent = getRandom(1, 10);

    survivors = survivors - (percent * 70000);
}

void World::zombies()
{
    int percent = getRandom(1, 10);

    survivors = survivors - (percent * 70000);
}

void World::hurricanes()
{
    int percent = getRandom(1, 10);

    survivors = survivors - (percent * 70000);
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
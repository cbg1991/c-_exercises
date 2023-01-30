#include <iostream>
using namespace std;

class Pants
{
private:
    int size;
public:
    Pants(int size)
    {
        this->size = size;
    }
};

class WaterResistantPants : public Pants
{
private:
    int duration; // water resistant within this time frame
public:
    WaterResistantPants(int size, int duration) : base(size)
    {
        this->duration = duration;
    }

};


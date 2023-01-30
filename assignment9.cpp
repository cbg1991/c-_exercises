//Christian Gaillard - Assignment 9

#include <iostream>
using namespace std;

class Flower
{
private:
    string color;

public:
    Flower() {}
    Flower(string color)
    {
        this->color = color;
    }
    string getColor()
    {
        return color;
    }
    void printColor()
    {
        cout << "color: " << color;
    }
};

class Rose : public Flower
{
private:
    string name;

public:
    Rose(){};
    Rose(string name, string color) : Flower(color)
    {
        this->name = name;
    }
    void print()
    {
        cout << "name: " << name;
    }
};

int main()
{
    int flowerNum = 3;
    int roseNum = 3;

    Flower *flowers = new Flower[flowerNum];
    flowers[0] = Flower("red");
    flowers[1] = Flower("blue");
    flowers[2] = Flower("green");

    for (int i = 0; i < flowerNum; i++)
    {
        cout << "Flower " << i+1 << " ";
        flowers[i].printColor();
        cout << "\n";
    }

    Rose *roses = new Rose[roseNum];
    roses[0] = Rose("Ruby", "Red");
    roses[1] = Rose("Verde", "Green");
    roses[2] = Rose("Aqua", "blue");

    for (int i = 0; i < roseNum; i++)
    {
        cout << "Rose " << i+1 << " ";
        roses[i].print();
        cout << ", ";
        roses[i].printColor();
        cout << "\n";
    }
    return 0;
}

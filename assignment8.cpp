#include <iostream>
using namespace std;

class Circle{
       private:
              int radius;
       public:
              Circle(int radius);
              double area();

              int getRadius() const;
              void setRadius(int);

              Circle operator + (const Circle& c);
              Circle operator - (const Circle& c);

              friend ostream & operator << (ostream &out, Circle &c);
};

Circle::Circle(int radius) {
       this->radius = radius;
}

int Circle::getRadius() const{
       return this->radius;
}

void Circle::setRadius(int r) {
       this->radius = r;
}

double Circle::area() {
       return 3.14 * (this->radius * this->radius);
}

Circle Circle::operator + (const Circle& c) {
       int newRadius = this->getRadius() + c.getRadius();
       Circle newCircle(newRadius);
       return newCircle;
}

Circle Circle::operator - (const Circle& c) {
       int newRadius = this->getRadius() - c.getRadius();
       Circle newCircle(newRadius);
       return newCircle;
}

ostream & operator << (ostream &out, Circle &c) {
       out << "Radius: " << c.getRadius() << "Area: " << c.area() << "\n";
       return out;
}

int main() {
       Circle c1(15);
       cout << "C1 is " << c1;

       Circle c2(10);
       cout << "C2 is " << c2;

       Circle sub = c1 - c2;
       cout << "c1 - c2 is " << sub;

       Circle add = c1 + c2;
       cout << "c1 + c2 is " << add;

       return 0;
}
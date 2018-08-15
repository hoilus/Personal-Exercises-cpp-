/*
Every object in C++ has access to its own address through an important pointer called this pointer. 
The this pointer is an implicit parameter to all member functions. 
Therefore, inside a member function, this may be used to refer to the invoking object.

Friend functions do not have a this pointer, because friends are not members of a class. 
Only member functions have a this pointer.
*/

#include <iostream>

using namespace std;

class Box {
public:
  // constructor
  Box(double l = 2.0, double b = 2.0, double h = 2.0) {
    cout << "constructor called.\n";
    length = l;
    breadth = b;
    height = h;
  }

  double Volume() {
    return length * breadth * height;
  }

  bool compare(Box box) {
    return this->Volume() > box.Volume();
  }

private:
  double length, breadth, height;
};

int main(int argn, char *argv[]) {
  Box Box1(3.3, 1.2, 1.5);
  Box Box2(8.5, 6.0, 2.0);

  if (Box1.compare(Box2))
    cout << "Box2 is smaller than Box1.\n";
  else
    cout << "Box2 is equal or larger than Box1.\n";

  return 0;
}

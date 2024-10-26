#include <iostream>
using namespace std;

class DefaultConstructor
{
private:
    int x;

public:
    DefaultConstructor()
    {
        cout << "subha bijoya " << endl;
    }
};

class ParamConstructor
{
private:
    int x;

public:
    ParamConstructor(int y)
    {
        cout << y << endl;
        cout << "subha bijoya " << endl;
    }
};

class MultipleConstructors
{
private:
    int x;

public:
    MultipleConstructors()
    {
        x = 0;
        cout << "Default Constructor called" << endl;
    }

    MultipleConstructors(int y)
    {
        cout << y << endl;
        cout << "subha bijoya" << endl;
    }

    MultipleConstructors(const MultipleConstructors &obj)
    {
        cout << "Copy Constructor called" << endl;
    }
};

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l = 10, int w = 5)
    {
        length = l;
        width = w;
    }

    void calculateArea()
    {
        cout << "The area of the rectangle is " << length * width << endl;
    }
};

class DestructorExample
{
public:
    DestructorExample()
    {
        cout << "Constructor called: Object created" << endl;
    }

    ~DestructorExample()
    {
        cout << "Destructor called: Object destroyed" << endl;
    }
};

int main()
{
    cout << "--- Default Constructor Example ---" << endl;
    DefaultConstructor d1, d2, d3;
    cout << endl;

    cout << "--- Parameterized Constructor Example ---" << endl;
    ParamConstructor p1(3), p2(6), p3(2);
    cout << endl;

    cout << "--- Multiple Constructors Example ---" << endl;
    MultipleConstructors m1, m2(6), m3(2);
    MultipleConstructors m4(m2);
    cout << endl;

    cout << "--- Constructor with Default Arguments Example ---" << endl;
    Rectangle r1;
    r1.calculateArea();
    Rectangle r2(9);
    r2.calculateArea();
    Rectangle r3(5, 6);
    r3.calculateArea();
    cout << endl;

    cout << "--- Destructor Example ---" << endl;
    cout << "Entering Destructor Example" << endl;
    DestructorExample obj1;
    cout << "Exiting Destructor Example" << endl;

    return 0;
}

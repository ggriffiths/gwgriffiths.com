/* SLIDE 7 CODE

#include <iostream>
using namespace std;

class CPolygon
{
    protected:
    int width, height;

    public:
    void set_values (int a, int b)
    {
        width=a; height=b;
    }
    virtual int area ()
    {
        return (0);
    }
};

class CRectangle: public CPolygon
{
    public:
    int area ()
    {
        return (width * height);
    }
};

class CTriangle: public CPolygon
{
    public:
    int area()
    {
        return (width * height / 2);
    }
};

int main()
{
    // Initialize 3 objects
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;

    // Create 3 polygon pointers to our 3 different shapes
    CPolygon * ppoly1 = &rect;
    CPolygon * ppoly2 = &trgl;
    CPolygon * ppoly3 = &poly;

    // Set the width/height of our shapes
    ppoly1->set_values (4,5);
    ppoly2->set_values (4,5);
    ppoly3->set_values (4,5);

    // Output the their areas
    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;
    cout << ppoly3->area() << endl;

    return 0;
}*/


/* SLIDE 10 CODE
#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b)
{
    T test;
    if(a>b) return a;
    else return b;
}

int main ()
{

    // Initialize Variables
    int i=5, j=6, k;
    long l=10, m=5, n;
    double o=63.2, p=52.2, q;

    // Get two max values
    k=GetMax<int>(i,j);
    n=GetMax<long>(l,m);
    q=GetMax<double>(o,p);

    // Output our new max values
    cout << k << endl;
    cout << n << endl;
    cout << q << endl;
    return 0;
}*/

/* SLIDE 12 CODE
#include <iostream>
using namespace std;

template <class T>
class MyPair
{
    T a, b;
    public:
    MyPair (T first, T second)
    {
        a=first;
        b=second;
    }
    T getmax ();
};

template <class T>
T MyPair<T>::getmax ()
{
    if (a>b) return a;
    else return b;
}

int main ()
{
  MyPair <int>    firstPair(100,75);
  MyPair <double> secondPair(3.14,79.2);

  cout << firstPair.getmax() << endl;
  cout << secondPair.getmax() << endl;

  return 0;
}*/


/* SLIDE 15 CODE
#include <iostream>
#include <exception>
using namespace std;

int main ()
{
    try
    {
        while(1<0)
        {
            cout << "test";
        }
        cout << "Code worked fine";
    }
    catch (bad_alloc&)
    {
        cout << "Error allocating dynamic memory" << endl;
    }
    return 0;
}*/

/* SLIDE 17 CODE

#include <iostream>
using namespace std;

namespace first
{
    int x = 5;
    int y = 10;
}

namespace second
{
    double x = 3.1416;
    double y = 2.7183;
}

int main ()
{
    using first::x;
    using second::y;
    cout << x << endl;
    cout << y << endl;

    cout << first::y << endl;
    cout << second::x << endl;
    return 0;
}*/


/* ASSIGNMENT 1 SOLUTION
#include <iostream>
#include <string>
using namespace std;

template <class Data>
void print(Data d)
{
    cout << d << endl;
}
int main()
{
    print<int>(5);
    print<string>("Hello World");

    return 0;
}
*/

/* ASSIGNMENT 2 SOLUTION
#include <iostream>
using namespace std;

class Animal
{
    public:
    virtual void talk(){}
};
class Dog : public Animal
{
    void talk()
    {
        cout << "Bark" << endl;
    }
};
class Cat : public Animal
{
    void talk()
    {
        cout << "Meow" << endl;
    }
};

int main()
{
    // Object initialization
    Dog myDog;
    Cat myCat;

    // Pointer declared
    Animal* animalPointer;

    // Set pointer to dog, make dog talk
    animalPointer = &myDog;
    animalPointer->talk();

    // Set pointer to cat, make cat talk
    animalPointer = &myCat;
    animalPointer->talk();

    return 0;
}
*/

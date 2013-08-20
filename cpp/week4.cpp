/* SLIDE 10 CODE
#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car() // default constructor
        {
            name = "No Name";
            year = 0;
        }
        Car(string newName,int newYear) // constructor with two parameters
        {
            name = newName;
            year = newYear;
        }
        void print()
        {
            cout << "Car Name: " << name << endl << "Car Year: " << year << endl;
        }
	private:
        string name;
        int year;
};

int main()
{
    Car myFirstCar;
    Car mySecondCar("BMW",2012);

    myFirstCar.print();
    cout << endl;
    mySecondCar.print();

    return 0;
}
*/

/* SLIDE 14 CODE
#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car() // default constructor
        {
            name = "No Name";
            year = 0;
        }
        Car(string newName,int newYear) // constructor with two parameters
        {
            name = newName;
            year = newYear;
        }
        void print()
        {
            cout << "Car Name: " << name << endl << "Car Year: " << year << endl;
        }
	private:
        string name;
        int year;
};

int main()
{
	Car myFirstCar;
	Car mySecondCar("BMW",2012);
	Car* myCarPtr = &myFirstCar;

    // Print first Car Info
    myCarPtr->print();
    cout << endl;

    // Change address pointed to
    myCarPtr = &mySecondCar;

    // Print second Car Info
    myCarPtr->print();
    cout << endl;

    // Print with different operator
    (*myCarPtr).print();

    return 0;
}*/

/* SLIDE 16 CODE
#include <iostream>
using namespace std;

class CVector
{
    public:
        int x,y;
        CVector(){};
        CVector(int a,int b)
        {
            x=a;
            y=b;
        }
        CVector operator + (CVector sentVec)
        {
            CVector temp(0,0);

            temp.x=x+sentVec.x;
            temp.y=y+sentVec.y;

            return temp;
        }
};

int main()
{
    CVector v(1,2);
    CVector u(3,4);

    CVector total(0,0);

    total = v+u;

    cout << total.x << endl << total.y;
}
*/

/* SLIDE 23 CODE
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
    int area ()
    {
        return (width * height / 2);
    }
};

int main ()
{
    // Create Objects
    CRectangle rect;
    CTriangle tri;

    // Give Objects Values with setters
    rect.set_values (4,5);
    tri.set_values (4,5);

    // Print out areas of our objects
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    return 0;
}*/

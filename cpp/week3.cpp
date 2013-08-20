/* SLIDE 3 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInt = 5;
    cout << &myInt;
    return 0;
}
*/

/* SLIDE 4 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInt = 5;
    cout << *(&myInt);
    return 0;
}
*/


/* SLIDE 5 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInt = 5;
    int* myPtr = &myInt;

    cout <<  myPtr;
    cout << "\n";
    cout << *myPtr;
    return 0;
}
*/

/* SLIDE 6 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInt = 5;
    int* myPtr = &myInt;

    cout <<  &myPtr;
    return 0;
}*/

/* SLIDE 8 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInt = 5;
    int* myPtr = &myInt;
    int** myPtrPtr = &myPtr;


    // myInt
    cout << "Memory address of myInt --------------------------------------- " << &myInt << endl;
    cout << "Value of myInt ------------------------------------------------ " << myInt << endl;

    cout << endl;

    // myPtr
    cout << "Memory address of myPtr --------------------------------------- " << &myPtr << endl;
    cout << "addres myPtr points to ---------------------------------------- " << &(*myPtr) << endl;
    cout << "Value myPtr points to ----------------------------------------- " << *myPtr << endl;

    cout << endl;

    // myPtrPtr
    cout << "Memory address of myPtrPtr ------------------------------------ " << &myPtrPtr    << endl;
    cout << "Address myPtrPtr points to ------------------------------------ " << *myPtrPtr    << endl;
    cout << "Value of the address that myPtrPtr points to ------------------ " << **myPtrPtr   << endl;

    return 0;
}*/

/* SLIDE 12 CODE
#include <iostream>
using namespace std;

int main(){
    int a=1,b=2,c=3;
    int* myPointer;



    cout << "Value of a: " << a << " - Memory value of a: " << &a;
    cout << "\nValue of b: " << b << " - Memory value of b: " << &b;
    cout << "\nValue of c: " << c << " - Memory value of c: " << &c;

    cout << "\n\nSET POINTER TO A >>>";
    myPointer = &a;
    cout << "\n\tMemory value of pointer: " << myPointer;
    cout << "\n\tFirst value of pointer: " << *myPointer;

    cout << "\n\nSET POINTER TO B >>>";
    myPointer = &b;
    cout << "\n\tMemory value of pointer: " << myPointer;
    cout << "\n\tSecond value of pointer: " << *myPointer;

    cout << "\n\nSET POINTER TO C >>>";
    myPointer = &c;
    cout << "\n\tMemory value of pointer: " << myPointer;
    cout << "\n\tThird value of pointer: " << *myPointer;


    cin.get();
}
*/

/* SLIDE 13 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInts[]={5,6,7,8,9};

    cout << "Array Address: " << &myInts << "   Memory Size: " << sizeof(myInts) << "B" << "\n\n";

    cout << "Address: " << &myInts[0] << "   Value: " << myInts[0] << "   Memory Size: "  << sizeof( myInts[0]) << "B"<< endl;
    cout << "Address: " << &myInts[1] << "   Value: " << myInts[1] << "   Memory Size: "  << sizeof( myInts[1]) << "B"<< endl;
    cout << "Address: " << &myInts[2] << "   Value: " << myInts[2] << "   Memory Size: "  << sizeof( myInts[2]) << "B"<< endl;
    cout << "Address: " << &myInts[3] << "   Value: " << myInts[3] << "   Memory Size: "  << sizeof( myInts[3]) << "B"<< endl;
    cout << "Address: " << &myInts[4] << "   Value: " << myInts[4] << "   Memory Size: "  << sizeof( myInts[4]) << "B"<< endl;

    return 0;
}
*/

/* SLIDE 15 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInts[]={5,6,7,8,9};

    int* myPtr = myInts;

    cout << myPtr << endl;
    cout << &myInts;

    return 0;
}
*/

/* SLIDE 16 CODE

#include <iostream>
using namespace std;

int* incrementArray(int array[],int l)
{
    for(int i=0;i<l;i++)
    {
        array[i]=array[i]++;
    }
    return array;
}

int main()
{
    int myInts[] = {5,6,7,8,9};
    int length = sizeof(myInts)/sizeof(int);
    int* myPtr = incrementArray(myInts,length);

    for(int i=0;i<length;i++)
    {
        cout << myPtr[i] << endl;
    }
    return 0;
}
*/

/* SLIDE 17 CODE
#include <iostream>
using namespace std;

void update(int& a,int& b)
{
    a=a+1;
    b=b+1;
}

int main()
{
    int a=1;
    int b=5;

    update(a,b);

    cout << a << endl;
    cout << b;
    return 0;
}
*/

/* SLIDE 18 CODE
#include <iostream>
using namespace std;

void update(int* a,int* b)
{
    *a=*a+1;
    *b=*b+1;
}

int main()
{
    int a=1;
    int b=5;

    update(&a,&b);

    cout << a << endl;
    cout << b;
    return 0;
}
*/

/* SLIDE 19 CODE
#include <iostream>
using namespace std;

int main()
{
    int myInt = 5;
    void* voidPtr;

    voidPtr = &myInt;

    return 0;
}
*/

/* SLIDE 20 CODE
#include <iostream>
using namespace std;

void increase(void* data, int psize)
{
    if(psize == sizeof(char))
    {
        char* charPtr;
        charPtr=(char*)data;
        ++(*charPtr);
    }
    else if(psize == sizeof(int))
    {
        int* intPtr;
        intPtr=(int*)data;
        ++(*intPtr);
    }
}

int main ()
{
  char a = 'x';
  int b = 1602;
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  cout << a << ", " << b << endl;
  return 0;
}
*/

/* SLIDE 23 CODE (
#include <iostream>
using namespace std;

int main()
{
    // Initialization
    int* myArray;
    int length=0;
    // User Input
    cin >> length;

    // Allocate space for dynamic Array
    myArray = new int[length];

    // Delete array once we're done using it
    delete[] myArray;

    return 0;
}
*/

/* ASSIGNMENT 1 SOLUTION
#include <iostream>
using namespace std;

void timesTwo(int &myInt)
{
    myInt = myInt * 2;
}

int main()
{
    int newInt = 4;

    timesTwo(newInt);
    cout << newInt;

    return 0;
}
 */

/* ASSIGNMENT 2 SOLUTION
#include <iostream>
using namespace std;

int* square(int array[],int length)
{
    for(int i=0;i<length;i++)
    {
        array[i]=array[i]*array[i];
    }
    return array;
}
int main()
{
    int myInts[] = {1,2,3,4,5};
    int myLength = sizeof(myInts)/sizeof(int);
    int* myPtr=myInts;

    myPtr = square(myInts,myLength);

    for(int i=0;i<myLength;i++)
    {
        cout << myPtr[i] << endl;
    }
    return 0;
}
 */

/* ASSIGNMENT 3 SOLUTION
#include <iostream>
using namespace std;

int main()
{
    //initialize
    int n=0;
    int* myPtr;

    //input
    cout << "Enter a length n: ";
    cin >> n;

    //create array
    myPtr = new int[n];

    //initialize array
    for(int i=0;i<n;i++)
    {
        myPtr[i]=i+1;
    }


    // output array (could be done in above loop)
    for(int i=0;i<n;i++)
    {
        cout << myPtr[i] << endl;
    }
    cout << "This array only took "<< sizeof(myPtr)*n << " Bytes";
    delete[] myPtr;
    return 0;
}
*/

/* ASSIGNMENT 4 SOLUTION
#include <iostream>
using namespace std;

int foobar(void* value,int psize)
{
    if(psize==sizeof(int))
    {
        int* myInt;
        myInt=(int*)value;
        cout << "Your integer is " << *myInt;
    }
    else if(psize==sizeof(double))
    {
        double* myDouble;
        myDouble=(double*)value;
        cout << "Your double is " << *myDouble;
    }
    else if(psize==sizeof(char))
    {
        char* myChar;
        myChar=(char*)value;
        cout << "Your char is " << *myChar;
    }
    else
    {
        cout << "I don't know that type.";
    }
}

int main()
{
    int tInt=51;
    double tDouble=3.14;
    char tChar='A';
    short tShort=1;

    foobar(&tInt,sizeof(tInt));
    cout << "\n";
    foobar(&tDouble,sizeof(tDouble));
    cout << "\n";
    foobar(&tChar,sizeof(tChar));
    cout << "\n";
    foobar(&tShort,sizeof(tShort));
    return 0;
}*/

/* SLIDE 4 CODE
#include <iostream>
using namespace std;

void printString(string myString="empty string")
{
    cout << "Your string is " << myString << ".";
}

int main ()
{
    printString(); // This world normally create an error
    cout << endl;
    printString("Hello world");
    return 0;
}
*/

/* SLIDE 6 CODE
#include <iostream>
using namespace std;

int add(int x,int y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
int main()
{
    cout << add(3,5);
    cout << "\n";
    cout << add(2,3,5);

    return 0;
}

/* SLIDE 7 CODE
#include <iostream>
using namespace std;


void print(int x)
{
    cout << x;
}
void print(string x)
{
    cout << x;
}

int main()
{
    test("hello");
    cout << endl;
    test(5);
    return 0;
}
*/

/* SLIDE 8 CODE
#include <iostream>
using namespace std;

void print(int x)
{
    cout << x;
}
void print(string x)
{
    cout << x;
}
int add(int x,int y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
void printInfo()
{
	print("Here is the info:\n");
	print(add(3,4,5));
	print("\n");
	print(add(1,2));
}
int main()
{
    printInfo();
    return 0;
}
*/

/* SLIDE 10 CODE
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1) return 1; // to account for the base case and 0!
    else return n*factorial(n-1);
}
int main()
{
    cout << "5! = " << factorial(5) << "\n";
    cout << "3! = " << factorial(3) << "\n";
    cout << "1! = " << factorial(1) << "\n";
    cout << "0! = " << factorial(0) << "\n";
    return 0;
}
*/

/* SLIDE 13 CODE
#include <iostream>
using namespace std;

int main()
{
    int grades[] = {92,78,64,98,100,55,84};
    for(int i=0;i<7;i++)
    {
        cout << "Grade " << i+1 << ": " << grades[i] << endl;

    }
    return 0;
}
*/

/* SLIDE 18 CODE
#include <iostream>
using namespace std;

int main()
{
	typedef unsigned short IP[4];

    IP localhost = {127,0,0,1};
    for(int i=0;i<(sizeof(localhost)/2);i++)
    {
        cout << localhost[i];
        if(((sizeof(localhost)/2)-1)!=i) cout << "."; // puts periods inbetween numbers
    }
    return 0;
}
*/

/* SLIDE 20 CODE
#include <iostream>
using namespace std;

int main()
{
    enum months_t { january=1, february, march, april,
                    may, june, july, august,
                    september, october, november, december}currentMonth;


    cout << january << endl;
    cout << april << endl;

    currentMonth = november;
    cout << currentMonth;
    return 0;
}
*/

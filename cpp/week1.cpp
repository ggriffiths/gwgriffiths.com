/*
* This is the code from the C++ Essentials Workshop
* Remove the comment markers to run each code section.
*/

/* SLIDE 5 CODE
#include <iostream>
using namespace std;



int main ()
{
    std::cout << "Hello World!";

    cin.get();
 	return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 7 CODE
#include <iostream>
using namespace std;

int main ()
{
	int myNum=0;

	cin >> myNum;

    cout << myNum+1;
    cin.get();
 	return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 10 CODE
// operating with variables

#include <iostream>
using namespace std;

int main ()
{
  // declaring variables:
  int a, b;
  int result;

  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result:
  cout << result;

  //pause the program
  cin.get();

  // terminate the program:
  return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 12 CODE
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	const double e = (1.6 * pow(10,-16));
	cout << e;
    cin.get();
	return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 13 CODE
#include <iostream>
#define PI 3.14159265359
#define SYSDIR "C:\\Windows\\System32"
using namespace std;

int main(){
	cout << "The value of PI is " << PI;
	cout << "\n" << SYSDIR;
    cin.get();
	return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 17 CODE
// compound assignment operators

#include <iostream>
using namespace std;

int main ()
{
  int a, b=3;		    // two integers allocated in memory
  a = b;			    // the value of b is passed to a
  a+=2;                 // equivalent to a=a+2
  cout << a;			// a is sent to the console
  cin.get();            // pause the program
  return 0;			    // return 0, exit program
}
*/

// <--------------- x ----------------- >

/* SLIDE 17 CODE

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x>0)
    {
        cout << "x is positive";
    }
    else if(x<0)
    {
        cout << "x is negative";
    }
    else
    {
        cout << "x is 0";
    }
    cin.get();
    return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 23 CODE
#include <iostream>
using namespace std;

int main()
{
    int year=0;
    cin >> year;
    switch(year)
    {
        case 1:
            cout << "Freshman";
            break;
        case 2:
            cout << "Sophomore";
            break;
        case 3:
            cout << "Junior";
            break;
        case 4:
            cout << "Senior";
            break;
        default:
            cout << "Not an undergrad.";
            break;
    }
    cin.get();
    return 0;
}*/

// <--------------- x ----------------- >

/* SLIDE 25 CODE
#include <iostream>
using namespace std;
int main()
{
    int n=0;
    while(n<10)
    {
            cout << "n value: " << n << "\n";
            n++;
    }
    cout << "\nFinal n value: " << n; // output will be 10
    cin.get();
    return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 29 CODE
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0;i<10;i++)
    {
        cout << "Value of i: " << i << "\n";
    }
    cin.get();
    return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 32 CODE
// function example
#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int s;
  sum=a+b;
  return (sum);
}

int main ()
{
  int sum;
  sum = addition (5,3);
  cout << "The result is " << sum;
  return 0;
}
*/

// <--------------- x ----------------- >

/* SLIDE 36 CODE

#include <iostream>
using namespace std;

void printStr(string myStr)
{
  	cout << myStr;
}

int main ()
{
    string test="Hello World";
    printStr(test);
 	return 0;
}
*/

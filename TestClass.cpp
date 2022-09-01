#include <iostream>
#include "DoubleList.h"
using namespace std;

int main()
{
  DoubleList* dl = new DoubleList();

  /*
  Testing 12 values to the array
  */
  dl->addDouble(1.5);
  dl->addDouble(2.5);
  dl->addDouble(3.5);
  dl->addDouble(4.5);
  dl->addDouble(5.5);
  dl->addDouble(6.5);
  dl->addDouble(7.5);
  dl->addDouble(8.5);
  dl->addDouble(9.5);
  dl->addDouble(10.5);
  dl->addDouble(11.5);
  dl->addDouble(12.5);

  /*
  Testing the number of values in the array
  */
  cout << "There are " << dl->getNumDoubles() << " in the array" << endl;

  /*
  Testing to find the value at a given index
  */
  cout << "The value at index 5 is " << dl->getDouble(5) << "." << endl;

  /*
  Testing to remove last double put into the array
  */
  dl->removeDouble();

  /*
  Using destructor
  */
  dl->~DoubleList();

  return 0;
}

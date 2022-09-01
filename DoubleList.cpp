#include <iostream>
#include "DoubleList.h"
using namespace std;

/*
Constructor
*/
DoubleList::DoubleList()
{
  int currentIndex = 0;
  int size = 0;
  double *doubList = new double[10];
}

/*
Copy Constructor
*/
DoubleList::DoubleList(const DoubleList &doubleL)
{
  copy(doubleL);
}

/*
Copy method to help copy constructor and operator
*/
void DoubleList::copy(const DoubleList& doubleL)
{
  this->size = doubleL.size;
  this->currentIndex = doubleL.currentIndex;
  this->doubList = doubleL.doubList;
}

/*
Adds a new double to the end of the array doubList
*/
void DoubleList::addDouble(const double& value)
{
  if(currentIndex == size)
  {
    int tempSize = size + 10;
    double *tempList = new double[tempSize];
    tempList = doubList;
    size += 10;
    clear();
    for(int i = 0; i < tempSize; i++) {
      doubList[i] = tempList[i];
    }
  }
  doubList[currentIndex] = value;
  currentIndex++;
}

/*
Removes last double in the array
*/
void DoubleList::removeDouble()
{
  currentIndex--;
}

/*
Returns the double in the array at the position of the specified index
*/
double DoubleList::getDouble(int &index)
{
  if(index < currentIndex) {
    return doubList[index];
  }
  else
  {
    return 0;
  }
}

/*
Returns the number of doubles within the array
*/
int DoubleList::getNumDoubles()
{
 return currentIndex;
}

/*
Operator
*/
DoubleList& DoubleList::operator=(const DoubleList& obj)
{
  if(this!=&obj)
  {
    clear();
    copy(obj);
  }
  return *this;
}

/*
Clears the double array used in this class
*/
void DoubleList::clear()
{
  delete []doubList;
}

/*
Destructor
*/
DoubleList::~DoubleList()
{
  clear();
}

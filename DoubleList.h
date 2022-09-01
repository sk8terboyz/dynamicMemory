
#define DOUBLE_LIST_H

/*

Shane Kennedy
Header Class for DoubleList

*/
class DoubleList
{
public:
  //Constructor
  DoubleList();
  //Destructor
  ~DoubleList();
  //Copy Constructor
  DoubleList(const DoubleList &doubleL);
  //Assignment Operator
  DoubleList& operator = (const DoubleList& obj);
  //Add a new double to the aray
  void addDouble(const double &value);
  //Remove the last double from the array
  void removeDouble();
  //Find a double within the array at given index
  double getDouble(int &index);
  //Return how many doubles are within the array
  int getNumDoubles();
  //Delete array
  void clear();
  //Copy array
  void copy(const DoubleList& doubleL);

private:
  double *doubList;
  int currentIndex = 0;
  int size = 0;
};

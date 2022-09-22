#include <iostream>

using namespace std;

class Base
{
public:
  Base ()
  {
    cout << "Non-Param Base" << endl;
  }
  Base (int x)
  {
    cout << "Param Base: " << x << endl;
  }
};

class Derived:public Base
{
public:
  Derived ()
  {
    cout << "Non-Param Derived" << endl;
  }

  Derived (int y)
  {
    cout << "Param Derived" << endl;
  }

Derived (int x, int y):Base (x)
    {
        cout<<"Param Derived: "<<y<<endl;
    }
};

int
main ()
{
  Derived (5, 10);

  return 0;
}

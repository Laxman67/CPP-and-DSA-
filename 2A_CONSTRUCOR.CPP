#include <iostream>
using namespace std;

// types of constructor in cpp
// 1)Default constructor
// 2) Parameterised onstructor
// 3) Copy Constructor

class Constructor

{

    int x, y;

public:
    // 1)Default constructor
    Constructor()
    {
        cout << "This is Default Constructor called automatically when object is created";
    }

    // 2) Parameterised onstructor
    Constructor(int x, int y)
    {

        this->x = x;
        this->y = y;
    }

    int getXandY_SUM()
    {
        return (x + y);
    }

    // 3) Copy Constructor

    Constructor(Constructor &obj)
    {
    }
};

int main()
{

    Constructor C, B(90,90) ;
     C = Constructor(90, 90); // explicit constructor call

    // Parameteriaed called from B(90,10) Object

     cout << "\n Sum is :" << C.getXandY_SUM();

    cout << "\n Sum is :" << B.getXandY_SUM();


    return 0;
}
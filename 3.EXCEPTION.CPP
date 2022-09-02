#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    double x, y;
    cin >> x >> y;

    try
    {
        if (x == 0.0)
            throw 0;
        if (y == 0.0)
            throw string("Y is zero");

        if (x + y < 0.0)
            throw(x + y);
    }
    catch (int em)
    {
        cout << em;
    }

    catch (string &e1)
    {
        cout << e1;
    }

    catch(...){
        cout<<"x+y is less then 0";
    }
    return 0;
}

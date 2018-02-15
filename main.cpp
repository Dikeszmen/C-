#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, this is the fruits project!" << endl;
    fruits FruitObj;
    process ProcessObj;
    int i=0;
    while(i++<10)
    {
        FruitObj.apple=i;
        FruitObj.banana=i*i;
        FruitObj.mellon=FruitObj.banana-i;
        FruitObj.pear=FruitObj.apple+FruitObj.banana+FruitObj.mellon;
    }

    return 0;
}

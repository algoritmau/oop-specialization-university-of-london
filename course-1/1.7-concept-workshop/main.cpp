#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello, World!" << endl;
}

float calculateAverage(float x, float y)
{
    float sum = x + y;
    float average = sum / 2;

    return average;
}

int main()
{
    printHello();
    float z = calculateAverage(5, 10);
    cout << "The average of 5 and 10 is: " << z << endl;
    return 0;
}

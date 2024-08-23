#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    float calculateAverage;
    cout << "Enter Grade 1: ";
    cin >>a;
     cout << "Enter Grade 2: ";
    cin >>b;
     cout << "Enter Grade 3: ";
    cin >>c;
     cout << "Enter Grade 4: ";
    cin >>d;
     cout << "Enter Grade 5: ";
    cin >>e;
    
    calculateAverage = (a+b+c+d+e) / 5.0;
    
    cout << "The Average grade is: "<<calculateAverage;


    return 0;
}

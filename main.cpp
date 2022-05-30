#include <iostream>
#include<iocmath>
#include<iomanip>

using namespace std;

int main()
{
    float a,b, answer;
    float average;
    cout << "Enter first number" << endl;
    cin>> a;
    cout<< "Enter second number";
    cin>> b;
    answer = a+b;
    average= answer/2;
    cout<<"sum of the two numbers"<<answer;
    cout<<std::setprecision(6);
    cout<<"average of the two numbers"<<average;

    return 0;
}

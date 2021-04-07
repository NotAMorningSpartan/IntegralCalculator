//Tyler Kness-Miller
//HW7
//13 April 2021

using namespace std;
#include <iostream>

//TODO: Modify functions to accept function as parameter.
double trap_int(double a, double b, int n){

}

double simp_int(double a, double b, int n){

}

int main(){
    double a;
    double b;
    int n;

    cout << "Please input the start of the range you wish to integrate on:" << endl;
    cin >> a;
    cout << "Please input the end of the range you wish to integrate on:" << endl;
    cin >> b;
    cout << "Please input the number of sections in the range of the integration:" << endl;
    cin >> n;
    cout << "Please input the function you wish to be numerically integrated:" << endl;
    //TODO: Implement passing in a function.

    cout << "Result using the trapezoid method: " << to_string(trap_int(a, b, n)) << endl;
    cout << "Result using Simpson's method of integration: " << to_string(simp_int(a, b, n)) << endl;
    return 0;
}
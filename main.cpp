//Tyler Kness-Miller
//HW7
//13 April 2021

using namespace std;
#include <iostream>
#include <functional>

//Function that will be passed in.
void f(){

}

/// Method that integrates a given function over a given range using the Trapezoid method.
/// \param a The start of the range.
/// \param b The end of the range.
/// \param n The number of sections.
/// \param f The function to be numerically integrated.
/// \return The calculated value from the integration.
double trap_int(double a, double b, int n, function<void()> f){

}

/// Method that integrates a given function over a given range using Simpson's method.
/// \param a The start of the range.
/// \param b The end of the range.
/// \param n The number of sections.
/// \param f The function to be numerically integrated.
/// \return The calculated value from the integration.
double simp_int(double a, double b, int n, function<void()> f){

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

    cout << "Result using the trapezoid method: " << to_string(trap_int(a, b, n, f)) << endl;
    cout << "Result using Simpson's method of integration: " << to_string(simp_int(a, b, n, f)) << endl;
    return 0;
}
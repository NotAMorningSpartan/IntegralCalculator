//Tyler Kness-Miller
//HW7
//13 April 2021

//Articles that assisted me:
//https://www.codesansar.com/numerical-methods/integration-simpson-1-3-method-algorithm.htm
//http://theflyingkeyboard.net/algorithms/trapezoidal-rule-algorithm/


//Include statements.
using namespace std;
#include <iostream>
#include <functional>
#include <math.h>

//Function that will be passed in.
//Function: f(x) = x^2 + 1
double f(double x){
    return pow(x, 2) + 1.0;
}

/// Method that integrates a given function over a given range using the Trapezoid method.
/// \param a The start of the range.
/// \param b The end of the range.
/// \param n The number of sections.
/// \param f The function to be numerically integrated.
/// \return The calculated value from the integration.
double trap_int(double a, double b, int n, function<double(double x)> f){
    //Grid spacing/segment size
    double h = (b - a) / n;

    double s = f(a) + f(b);
    for(int i = 0; i < n; i++){
        s += 2 * f(a + i * h);
    }
    return (h / 2) * s;
}

/// Method that integrates a given function over a given range using Simpson's 1/3 rule.
/// \param a The start of the range.
/// \param b The end of the range.
/// \param n The number of sections.
/// \param f The function to be numerically integrated.
/// \return The calculated value from the integration.
double simp_int(double a, double b, int n, function<double(double x)> f){
    double h = (b - a) / n;
    //Store values.
    double x[n+1], y[n+1];
    for(int i = 0; i <= n; i++){
        x[i] = a + i * h;
        y[i] = f(x[i]);
    }

    //Variable to hold resulting value;
    double result = 0;
    for(int i = 0; i <= n; i++){
        //Handle beginning and end of segments.
        if(i == 0 || i == n){
            result += y[i];
        }
        else if(i % 2 != 0){
            result += 4 * y[i];
        }
        else{
            result += 2 * y[i];
        }
    }
    result = result * (h / 3);
    return result;
}

//Main function.
int main(){
    //Define inputs.
    double a;
    double b;
    int n;

    cout << "Please input the start of the range you wish to integrate on:" << endl;
    cin >> a;
    cout << "Please input the end of the range you wish to integrate on:" << endl;
    cin >> b;
    cout << "Please input the number of sections in the range of the integration:" << endl;
    cin >> n;
    cout << "Calculating value of integration using equation x^2 + 1..." << endl;
    cout << "Result using the trapezoid method: " << to_string(trap_int(a, b, n, f)) << endl;
    cout << "Result using Simpson's method of integration: " << to_string(simp_int(a, b, n, f)) << endl;
    return 0;
}
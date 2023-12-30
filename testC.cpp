#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "Calculator.h"
#include "Calculator.cpp"
using namespace std;


int main()
{
  // std::cout << "Hello World!" << std::endl;
  // printf("Heoo");

//  int n,a,b,c;
     

//     std::cin >> n >> a >> b >> c;
    
//     n = n + c;
//     a = a + b;
    
//     std::cout << n << a << std::endl;
    
//     //  std::cin.clear();

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
         << endl;

    Calculator c;
    while (x < 100)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Attempted to divide by zero!" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
    }

    return 0;
}
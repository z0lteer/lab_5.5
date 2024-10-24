#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int FibonacciSum(int n)
{
    if (n == 0)
        return 0;
    else
        return Fibonacci(n) + FibonacciSum(n - 1);
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int nthFibonacci = Fibonacci(n);
    int sumOfFibonacci = FibonacciSum(n);

    cout << "n-th Fibonacci number: " << nthFibonacci << endl;
    cout << "Sum of the first n Fibonacci numbers: " << sumOfFibonacci << endl;

    return 0;
}

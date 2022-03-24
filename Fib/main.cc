#include <iostream>

int fib(int n);

int main()
{
    int n;
    std::cout << "Какое кол-во чисел вывести: ";
    std::cin >> n;
    for (int i=0; i < n; i++)
    {
        std::cout << fib(i) << " ";
    }
    std::cout << std::endl;
}

int fib(int n)
{
    if (n < 0) exit(1);
    else if (n == 0) return 0;
    else if (n == 1 || n == 2) return 1;
    else return fib(n-1) + fib(n-2);
}

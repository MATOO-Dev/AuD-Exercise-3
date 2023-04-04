#include <cstdio>
#include <iostream>
#include <ostream>

//8-a
float hn_r(int n)
{
    if(n == 1)
        return (float)1/n;

    return (float)1/n + hn_r(n - 1);
}

//8-b
float hn_i(int n)
{
    float result = 0;

    for(int i = 1; i <= n; i++)
    {
        result += (float)1/i;
    }

    return result;
}

//take result * 2 when calling initially
double piRecursive(int steps, int maxSteps)
{
    if(steps == maxSteps)
        return 1;

    double division = (double)steps / double(steps * 2 + 1);
    double bracketMult = division * piRecursive(steps + 1, maxSteps);
    return 1 + bracketMult;
}

int main()
{
    //8
    //depth 5 should return ~2.28
    std::cout << "starting exercise 8)" << std::endl << "a)" << std::endl;
    //a
    std::cout << hn_r(5) << std::endl;
    //b
    std::cout << "b) " << std::endl;
    std::cout << hn_i(5) << std::endl;

    //9
    //a
    //für jeden schritt n wird der bruch wie folgt defininiert:
    //zähler = n
    //nenner = n * 2 + 1
    //zum bruch ergebnis dann 1 dazu zählen

    //b
    double pi = 2 * piRecursive(1, 10000);
    std::cout << "starting exercise 9)" << std::endl;
    printf("Die ersten Stellen von Pi: %.10lf", pi);
    std::cout << std::endl;
    return 0;

    //10 -> see paper
    //11 -> see paper
    //12 -> see paper
}
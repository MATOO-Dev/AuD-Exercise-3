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

double piRecursive(int remainingDepth)
{
    if(remainingDepth == 0)
    return 1;

    double division = (double)remainingDepth / double(remainingDepth * 2 + 1);
    double currentStep = 1 + division;
    std::cout << "current step for depth " << remainingDepth << " is " << currentStep << std::endl;
    return currentStep * piRecursive(remainingDepth - 1);
}

double piRecursiveV2(int remainingDepth)
{
    if(remainingDepth == 0)
    return 1;

    double division = (double)remainingDepth / double(remainingDepth * 2 + 1);
    double currentStep = division;
    std::cout << "current step for depth " << remainingDepth << " is " << currentStep << std::endl;
    return currentStep * piRecursive(remainingDepth - 1);
}

int main()
{
    //8
    //depth 5 should return ~2.28
    //a
    std::cout << hn_r(5) << std::endl;
    //b
    std::cout << hn_i(5) << std::endl;

    //9
    //a
    //für jeden schritt n wird der bruch wie folgt defininiert:
    //zähler = n
    //nenner = n * 2 + 1
    //zum bruch ergebnis dann 1 dazu zählen

    //b
    double pi2 = 2 * piRecursive(9);
    std::cout << "Die ersten Stellen von Pi: " << pi2 << std::endl;

    //just a test
    double step1 = double(1)/double(3) + 1;
    double step2 = double(2)/double(5) + 1;
    double step3 = double(3)/double(7) + 1;
    double step4 = double(4)/double(9) + 1;
    double step5 = double(5)/double(11) + 1;
    double step6 = double(6)/double(13) + 1;
    double step7 = double(7)/double(15) + 1;
    double step8 = double(8)/double(17) + 1;
    double step9 = double(9)/double(19) + 1;

    double test = 2 * step1 * step2 * step3 * step4 * step5 * step6 * step7 * step8 * step9;

    std::cout << "result is " << test << std::endl;
    return 0;


    //10 -> see paper
    //11 -> see paper
    //12 -> see paper
}
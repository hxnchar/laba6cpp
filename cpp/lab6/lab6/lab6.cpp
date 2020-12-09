#include <iostream>
using namespace std;

int main()
{
    int getsumOfDenominators(int);
    int n, sumOfDenominators;
    cout << "Input n\n";
    cin >> n;
    for (int i = 1; i < n; i++) {
        sumOfDenominators = getsumOfDenominators(i);
        if (sumOfDenominators == i) {
            cout << "Number " << i << " is perfect!\n";
        }
    }
    system("pause");
}

int getsumOfDenominators(int num)
{   
    int denominator = 1;
    int sum = 0;
    for (int i = 1; i < num; i++) {
        while (denominator < i)
        {
            if (num % denominator == 0) {
                sum += denominator;
            }
            denominator += 1;
        }
    }
    return sum;
}

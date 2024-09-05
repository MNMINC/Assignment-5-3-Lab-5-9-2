#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum = 0;
    do
    {
        cin >> num1 >> num2;
    } while (num1 > num2);

    num1 += num1 % 2;
    for (int i = num1; i <= num2; i += 2)
    {
        sum += i;
    }
    cout << sum << endl;
}
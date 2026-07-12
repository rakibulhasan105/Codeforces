#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;

    cin >> a >> b;

    int next_prime_number;
    while (1)
    {
        if (isPrime(a + 1))
        {
            next_prime_number = a + 1;
            break;
        }
        else
            a++;
    }
    if (next_prime_number == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

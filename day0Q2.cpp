#include <iostream>
using namespace std;
void checkYear(int n)
{
    if (n % 400 == 0 || n % 4 == 0)
    {
        cout << n << " is a leap year" << endl;
    }
    else if (n % 100 == 0 || n % 400 != 0 || n % 4 != 0)
    {
        cout << n << " is not a leap year" << endl;
    }
    else
    {
        cout << "Invalid Year" << endl;
    }
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n >= 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return -1;
    }
}

void factor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}
bool perfectNum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int cube(int n)
{
    return n * n * n;
}
void amstrogeNum(int n)
{
    int temp, sum = 0, r;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + cube(r);
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << temp << " is an Amstrong Number" << endl;
    }
    else
    {
        cout << temp << " is not an Amstrong Number" << endl;
    }
}

void primeNum(int n)
{
    int m = n / 2, flag = 0;
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << n << "is not a prime Number" << endl;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << n << "is prime number" << endl;
    }
}
void sumDigits(int n)
{
    int r, sum = 0;
    ;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout << "Sum of Digits of a number is " << sum;
}
void pallindromNum(int n)
{
    int num, r, rev = 0;
    num = n;
    while (n>0)
    {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    } 
    if (num == rev)
    {
        cout << num << " is a pallindrom Number" << endl;
    }
    else
    {
        cout << num << " is not a pallindrom Number" << endl;
    }
}
int main()
{
    int year, num;
    //cin >> year;
    //checkYear(year);
    //cin>>num;
    //cout<<"factorial of "<<num<<" is "<<factorial(num)<<endl;
    cin >> num;
    //factor(num);
    //check whether perfect number or not
    /* if(perfectNum(num) == true){
        cout<<num<<" is a perfect Number"<<endl;
    }
    else{
        cout<<num<<" is not a perfect Number"<<endl;
    }*/
    //amstrogeNum(num);
    //primeNum(num);
    //sumDigits(num);
    //pallindromNum(num);
    
    return 0;
}
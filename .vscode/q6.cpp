#include <iostream>
using namespace std ;
int main()
{
    int n;
    cout <<"Enter the value of n : ";
    cin >> n;
    for(int a = 1; a <= n; a++)
    {
        for(int b = 1; b <= n; b++)
          for(int c = 1; c <= a; c++)
             cout << b ;
        cout << endl ;
    }
}
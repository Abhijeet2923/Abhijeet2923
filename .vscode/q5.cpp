#include <iostream>
#include <cmath>
using namespace std ;
bool checPer(int n)
{
    int k = (int)sqrt(n);
    for(int i = k + 1; i >= k ; i--)
       if(n == (int)pow(i, 2))
         return true;
    return false;
} 
int main()
{
    int n;
    cout <<"Enter a no. : ";
    cin >> n;
    if(checPer(n))
      cout << n << " is a perfect square ";
    else 
      cout << n << " is not a perfect square ";
}
#include <iostream>
using namespace std ;
int main()
{
    int n;
    cout <<"Enter the value of n : ";
    cin >> n;
    for(int a = 1; a <= n; a++)
    {
        for(int b = 1; b <= a; b++)
           cout << b ;
        
        for(int s1 = n-a; s1 >= 1; s1--)
           cout <<" ";
        
        for(int s2 = 1; s2 <= n-a; s2++)
           cout <<" ";
        
        for(int c = a; c >= 1; c--)
           cout << c;
        
        cout << endl ;
    }
}
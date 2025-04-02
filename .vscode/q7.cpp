#include <iostream>
using namespace std ;
int main()
{
    int n, t=1;
    cout <<"Enter the value of n : ";
    cin >> n;
    for(int a = 1; a <= 3; a++)
    {
        for(int b = 1; b <= n; b++)
        {
            cout << t++ ;
            if(b != n)
            cout << "*" ;
        }  
        cout << endl ;
    }
}
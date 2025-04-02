#include <iostream>
using namespace std ;
int convert(int n, int b)
{
    int d = 0, p = 1;
    while(n > 0)
    {
        d +=  p * (n % b);
        n /= b;
        p *= 10;
    }
    return d;
}
int main()
{
    cout <<"Enter a no. : ";
    int n, ch;
    cin >> n;
    cout <<"Enter : \n 1 to convert it to binary \n 2 to convert it to octal : ";
    cin >> ch;
    switch(ch)
    {
        case 1 :
          cout <<"The binary equivalent of "<< n<<" is =" << convert(n, 2);
          break;
         
        case 2 : 
          cout <<"The octal equivalent of "<< n <<" is =" << convert(n, 8);
          break;

        default : 
          cout << "Invalid Input " ;
    }
}
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n , k , n1 ;
    cin >> n >>k>>n1;

    //dien tich san
    int a = n*n ;
    //dientich k tham
    int b = k*(n1*n1);
    if(b>a)
    {
        cout << " Yes " << endl;
    }
    else
    {
        cout<<" No " <<endl ;
    }
    return 0 ;
}

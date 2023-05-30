#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n , m , a ;
    cout<<"nhap chieu dai cua san van dong ";
    cin >> n  ;
    cout<<"nhap chieu rong cua san van dong ";
    cin >> m ;
    cout<<"nhap do dai vien gach " ;
    cin >> a ;
    float b = float(n);
    float c = float(m);
    float d = float(a);
    float f = b/d;
    float e = c/d;
    int q = ceil(f);
    int p = ceil(e);
    int j = 0 ;
    j = q*p;
    cout<<"vay can "<<j<<" vien gach " <<endl;
    return 0 ;

}

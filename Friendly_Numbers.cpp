#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int n ;
    cout <<"so phan tu : " ;
    cin >> n;
    int* a = new int[n];
    for(int i =  0; i < n ; i++)
    {
        cout<<"nhap phan tu thu "<< i+1  <<": " ;
        cin>>a[i];
    }
    for(int i =  0; i < n ; i++)
    {
        cout<<a[i] <<" ";
    }
    int maxn = a[0];
    cout<<"\nso lon nhat trong mang so la : ";
    for(int i = 0; i < n ; i++)
    {
        if(a[i]> maxn )
        {
            maxn = a[i];
        }

    }
    cout<<maxn <<endl;
    for(int i = 0; i < n ; i++)
    {
        if(maxn %a[i] ==0 )
            {
                cout<<"Friends"<<endl;

            }
            else
            {
                cout<<"Not Friends"<<endl;


            }
    }
    return 0 ;
}

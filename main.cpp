#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"**********PROGRAM MENENTUKAN KUADRAN X,Y*********\n";
    cout<<"=================================================\n";
    cout<<"\nMasukkan Nilai X   : ";
    cin>>x;
    cout<<"\nMasukkan Nilai Y   : ";
    cin>>y;
    cout<<"=========================\n";
    if (x>0 && y>0)
        cout<<"Kuadran 1    : ";
    else if (x<0 && y>0)
        cout<<"Kuadran 2    : ";
    else if (x<0 && y<0)
        cout<<"Kuadran 3    : ";
    else
        cout<<"Kuadran 4    : ";
    return 0;
}

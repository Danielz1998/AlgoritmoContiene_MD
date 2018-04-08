#include <iostream>


using namespace std;

int main (int argc, char **argv)
{

    int x,y;

    string respuesta= "A_C_B";

    cout<<"A: \n";
    cin>>x;

    cout<<"B: \n";
    cin>>y;

    int X[x];
    int Y[y];


    for(int i=x; i>=1; i--)
    {
        X[i]=i;
    }

    cout<<"\n";

    for(int j=y; j>=1; j--)
    {
        Y[j]=j;
    }

    int num1, num2, found;
    num1=1;

    while(num1<=x)
    {
        num2=1;
        found=0;
        while(num2<=y)
        {
            if ( X[num1]=Y[num2])
            {
                found=1;
            }
        }
    }
}

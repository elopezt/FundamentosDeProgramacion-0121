/*Muestre la cantidad de bytes que reservan en memoria los tipos enteros (char, int,
long) y los tipos reales (float, double, long double).*/

#include <iostream>
using namespace std;

int main(){
    int b;
    char c;
    long f;

    float y;
    double u;
    long double o;

    cout<<sizeof(b)<<endl;
    cout<<sizeof(int)<<endl;

    cout<<sizeof(c)<<endl;
    cout<<sizeof(char)<<endl;

    cout<<sizeof(f)<<endl;
    cout<<sizeof(long)<<endl;

    cout<<sizeof(y)<<endl;
    cout<<sizeof(float)<<endl;

    cout<<sizeof(u)<<endl;
    cout<<sizeof(double)<<endl;

    cout<<sizeof(o)<<endl;
    cout<<sizeof(long double);


    return 0;
}
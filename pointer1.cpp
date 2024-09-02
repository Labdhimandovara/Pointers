#include <iostream>
using namespace std;
int main() 
{
    int a=10;
    char ch;
    float f;
     char *chptr=&ch;
     float *fptr=&f;
    int*aptr =&a;
    cout<<aptr<<endl;
    cout<<chptr<<endl;
    cout<<fptr<<endl;
    aptr++;

    return 0;
}
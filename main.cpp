//------------DEVELOPED BY:Ighit Faysal-------------
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,i,d;
    cout<<"------------By:F4Y5AL-------------\n";
    while(1){
    cout<<"Le reste de la division de A^n sur B:\n";
    cout<<"A:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    for (i=1;i<100;i++) {
        d=pow(a,i);
        c=fmod (d,b);
        //cout<<"c:"<<c<<"  d:"<<d<<"  i:"<<i<<endl;
        d=i;
        if(c==1 or c==0) {break;}
                       }
    if(c==0) {
            cout<<"Error :(\n####################\n\n";
             }
    else {
            cout<<"--------------------\n";
            for (i=0;i<d;i++) {
                  cout<<"n="<<d<<"k+"<<i<<" --> Rest="<<fmod(pow(a,i),b)<<endl;
                              }
                  cout<<"####################\n\n";
         }
    }
    return 0;
}

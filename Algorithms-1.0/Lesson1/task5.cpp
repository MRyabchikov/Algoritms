#include <iostream>
using namespace std;

int main(void){
    long long a1, b1, a2, b2;
    cin>>a1>>b1>>a2>>b2;
    long long s1 = max(b1, b2) * (a1+a2), s2 = max(b1, a2) * (a1+b2), s3 = max(a1, a2) * (b1+b2), s4 = max(a1, b2) * (a2+b1);
    if(s1 <= min(s2, min(s3, s4)))
        cout<<max(b1, b2)<<" "<<a1+a2;
    else if(s2 <= min(s1, min(s3, s4)))
        cout<<max(b1, a2)<<" "<<a1+b2;
    else if(s3 <= min(s1, min(s2, s4)))
        cout<<max(a1, a2)<<" "<<(b1+b2);
    else
        cout<<max(a1, b2)<<" "<<(a2+b1);
    return 0;
}

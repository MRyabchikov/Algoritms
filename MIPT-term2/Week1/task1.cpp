#include <iostream>
using namespace std;

int main(void){
    int ctr5 = 0;
    int n; cin>>n;
    for(int i=5; i<=n; i++){
        int tmp = i;
        while(tmp%5 == 0){
            tmp/=5;
            ctr5++;}}
    cout<<ctr5;
    return 0;
}

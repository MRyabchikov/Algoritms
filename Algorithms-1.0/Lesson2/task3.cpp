#include <vector>
#include <iostream>
using namespace std;
int main(void){
    int n, target;
    cin>>n;
    vector <int> v(n);
    for(size_t i=0; i<v.size(); i++)
        cin>>v[i];
    cin>>target;
    int ans = v[0];
    for(size_t i=0; i<v.size(); i++)
        ans = abs(v[i]-target)<abs(ans-target)?v[i]:ans;
    cout<<ans;

    return 0;
}

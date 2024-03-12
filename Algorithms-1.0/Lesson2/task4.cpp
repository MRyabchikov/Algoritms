#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n, ctr = 0;
    vector <int> v;
    while(cin>>n)
        v.push_back(n);
    for(size_t i=1; i<v.size()-1; i++)
        if(v[i] > v[i-1] && v[i] > v[i+1])
            ctr++;
    cout<<ctr;
    return 0;
}

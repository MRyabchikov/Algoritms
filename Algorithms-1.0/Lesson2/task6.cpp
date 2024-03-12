#include <iostream>
#include <vector>
using namespace std;

bool isSymmetric(const vector<int> &v){
    for(size_t i=0; i<=v.size()/2; i++)
        if(v[i] != v[v.size()-i-1])
            return false;
    return true;
}

int main(void){
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int ctr = 0;
    for(int i=0; i<n; i++)
        if(isSymmetric(vector<int>(v.begin()+i, v.end()))){
            ctr = i;
            break;}
    cout<<ctr<<endl;
    for(int i=0; i<ctr; i++)
        cout<<v[ctr-i-1]<<" ";

    return 0;
}

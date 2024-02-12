#include <iostream>
#include <vector>
using namespace std;

vector <long long> factorize(long long n){
    vector <long long> ans;
    long long tmp = n;
    for(long long i = 2; i*i <= tmp; i++)
        while(n%i == 0){
            ans.push_back(i);
            n/=i;}
    if(n > 1)
        ans.push_back(n);
    return ans;
}

int main(void){
    long long n; cin>>n;
    vector <long long> v= factorize(n);
    for(auto it : v)
        cout<<it<<" ";
    for(int i=2; i<=1000; i++){
        vector <long long> v= factorize(i);
        cout<<endl<<i<<": ";
        for(auto it : v)
            cout<<it<<" ";}

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    long long curr;
    vector <long long> v;
    while(cin>>curr)
        v.push_back(curr);
    long long max1 = max(v[0], v[1]), max2 = min(v[0], v[1]), min1 = min(v[0], v[1]), min2 = max(v[0], v[1]);
    for(size_t i=2; i<v.size(); i++){
        if(v[i] > max1){
            max2 = max1;
            max1 = v[i];}
        else if(v[i] > max2)
            max2 = v[i];
        if(v[i] < min1){
            min2 = min1;
            min1 = v[i];}
        else if(v[i] < min2)
            min2 = v[i];}
    if(max1 * max2 > min1 * min2)
        cout<<max2<<" "<<max1;
    else
        cout<<min1<<" "<<min2;
    return 0;
}

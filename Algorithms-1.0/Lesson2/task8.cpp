#include <iostream>
#include <vector>
using namespace std;

int main(void){
    long long curr;
    vector <long long> v;
    while(cin>>curr)
        v.push_back(curr);
    long long max1 = max(v[0], max(v[1], v[2])), max3 = min(v[0], min(v[1], v[2])), max2 = v[0]+v[1]+v[2] - max1 - max3,
            min1 = max3, min2 = max2, min3 = max1;
    for(size_t i=3; i<v.size(); i++){
        if(v[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = v[i];}
        else if(v[i] > max2){
            max3 = max2;
            max2 = v[i];}
        else if(v[i] > max3)
            max3 = v[i];
        if(v[i] < min1){
            min3 = min2;
            min2 = min1;
            min1 = v[i];}
        else if(v[i] < min2){
            min3 = min2;
            min2 = v[i];}
        else if(v[i] < min3)
            min3 = v[i];
        }
    if(max1*max2*max3 > max1*min1*min2)
        cout<<max3<<" "<<max2<<" "<<max1;
    else
        cout<<min1<<" "<<min2<<" "<<max1;
    return 0;
}

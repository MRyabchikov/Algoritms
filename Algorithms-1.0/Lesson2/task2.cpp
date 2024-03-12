#include <iostream>
#include <vector>
using namespace std;

bool isConstant(const vector <int> &v){
    for(size_t i=1; i<v.size(); i++)
        if(v[i] != v[i-1])
            return false;
    return true;
}

bool isAscending(const vector<int> &v){
    for(size_t i=1; i<v.size(); i++)
        if(v[i] <= v[i-1])
            return false;
    return true;}

bool isWeaklyAscending(const vector<int> &v){
    for(size_t i=1; i<v.size(); i++)
        if(v[i] < v[i-1])
            return false;
    return true;
}

bool isDescending(const vector<int> &v){
    for(size_t i=1; i<v.size(); i++)
        if(v[i] >= v[i-1])
            return false;
    return true;
}

bool isWeaklyDescending(const vector<int> &v){
    for(size_t i=1; i<v.size(); i++)
        if(v[i] > v[i-1])
            return false;
    return true;
}


int main(void){
    vector<int> v;
    int curr; cin>>curr;
    while(curr != -2000000000){
        v.push_back(curr);
        cin>>curr;}
    if(isConstant(v))
        cout<<"CONSTANT";
    else if(isAscending(v))
        cout<<"ASCENDING";
    else if(isWeaklyAscending(v))
        cout<<"WEAKLY ASCENDING";
    else if(isDescending(v))
        cout<<"DESCENDING";
    else if(isWeaklyDescending(v))
        cout<<"WEAKLY DESCENDING";
    else
        cout<<"RANDOM";
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

bool isIncresing(vector <int> &v){
    for(size_t i=0; i<v.size()-1; i++)
        if(v[i] >= v[i+1])
            return false;
    return true;
}

int main(void){
    vector <int> v;
    int tmp;
    while(cin>>tmp)
        v.push_back(tmp);
    if(isIncresing(v))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

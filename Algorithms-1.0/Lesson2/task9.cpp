#include <iostream>
#include <vector>
using namespace std;

int countBombs(vector <vector<int>> field, int i, int j){
    int ctr = 0;
    if(field[i-1][j-1] == -1)
        ctr++;
    if(field[i+1][j+1] == -1)
        ctr++;
    if(field[i+1][j] == -1)
        ctr++;
    if(field[i+1][j-1] == -1)
        ctr++;
    if(field[i][j+1] == -1)
        ctr++;
    if(field[i][j-1] == -1)
        ctr++;
    if(field[i-1][j+1] == -1)
        ctr++;
    if(field[i-1][j] == -1)
        ctr++;
    return ctr;
}

int main(void){
    int n, m, k; cin>>n>>m>>k;
    vector <vector<int>> field(n+2, vector<int>(m+2));
    for(int i=0; i<k; i++){
        int x, y; cin>>x>>y;
        field[x][y] = -1;}
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(field[i][j] != -1)
                field[i][j] = countBombs(field, i, j);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            if(field[i][j] == -1)
                cout<<"* ";
            else
                cout<<field[i][j]<<" ";
        cout<<endl;}
}

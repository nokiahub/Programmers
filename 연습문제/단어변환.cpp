#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

pair<int, int> student[1000];

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}


int main(){
    int t;
    cin >> t;
    
    for(int i = 0 ; i<t ; i++){
        int n, m;
        cin >> n >> m;
        
        for(int j = 0 ; j<m ; j++){
            cin >> student[i].first >> student[i].second;
        }
        
        sort(student, student+m, compare);
        
        for(int j = 1 ; j<=n ; j++){
            
        }
       
    }
    
    
    return 0;
}

#include <iostream>
using namespace std;

int find(string s){
    int index = 0;
    
    for(int i = 4 ; i>0; i--){
        if(s[i]!='5'){
            index = i;
            break;
        }
    }
    return index;
}

int solution(string s){
    int count = 0;
    
    string start = "";
    
    for(int i = 0 ; i<s.size(); i++){
        if(s[i]=='A') s[i] = '1';
        else if(s[i]=='E') s[i] = '2';
        else if(s[i]=='I') s[i] = '3';
        else if(s[i]=='O') s[i] = '4';
        else s[i] = '5';
    }

    while(start!="55555"){

        if(start.size()<5){
            
            start = start + '1';
            
            
        }else if(start.size()== 5){
            
            if (start[4]=='1') {
                start[4] = '2';
            }else if(start[4]=='2'){
                start[4] = '3';
            }else if(start[4]=='3'){
                start[4] = '4';
            }else if(start[4]=='4'){
                start[4] = '5';
            }else{
                int index = find(start);
                start = start.substr(0, index+1);
                
                if(start[index]=='1'){
                    start[index] = '2';
                }else if(start[index]=='2'){
                    start[index] = '3';
                }else if(start[index]=='3'){
                    start[index] = '4';
                }else if(start[index]=='4'){
                    start[index] = '5';
                }
                
            }
            
            
        }
        count = count+1;
        if(start==s) break;
    }
    
    
    return count;
}



int main(){
        
    int num = solution("UUUUUU");
    printf("%d", num);
    
    return 0;
}

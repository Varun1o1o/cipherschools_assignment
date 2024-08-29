#include<iostream>
using namespace std;

int main(){
    
    string ch;
    getline(cin,ch);
    
    for(int i = ch.size() ;i>=0;i--){
        cout<<ch[i];
    }
    
    return 0;
}

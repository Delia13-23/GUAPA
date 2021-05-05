#include <iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int count = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] >= 65 and s[i] <= 90){
                count++;
            }
        }
        cout<<count+1<<"\n";
    }
    return 0;
}

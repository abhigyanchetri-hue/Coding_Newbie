#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 1;
    for (int i=0; i<4; i++){
        for (int j=0; j<=i; j++){
            cout<<" "<<num++<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
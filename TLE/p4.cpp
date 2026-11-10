#include<bits/stdc++.h>
using namespace std;

int main(){
    for (int i=0; i<4; i++){
        for (int k = 4; k>k-i; k--){
            cout<<" ";

        for (int j=0; j<=i; j++){
            cout<<" * ";
        }
        cout<<"\n";
        }
    }
    return 0;
}
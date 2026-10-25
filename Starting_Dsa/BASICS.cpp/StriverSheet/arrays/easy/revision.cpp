//Largest element

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    cout<<arr.back();
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int lar = arr[0];
//     for (int i=0; i<n; i++){
//         if (arr[i]>lar){
//             lar = arr[i];
//         }
//     }
//     cout<<lar;
//     return 0;
// }
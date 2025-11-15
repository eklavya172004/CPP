#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while (t-->0)
    {
        /* code */
        long long n ;
        cin >> n;

        vector<long long> arr(n);

        for(long long i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        long long ans = 0 ;

        for(int i = n-2  ; i >= 0 ; i--){
            while(arr[i] >=arr[i+1]){
                arr[i] = arr[i]/2;
                ans++;
                
                if(arr[i] == 0){
                    break;
                }
            }
            if(arr[i] == 0 && arr[i+1] == 0){
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    
}
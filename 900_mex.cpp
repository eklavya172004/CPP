#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t-- > 0){
        long long n;
        cin >> n;

        long long k;
        cin  >> k;

        vector<long long> arr(n);
        map<long,long> freq;

        for(long long i = 0 ; i < n ; i++){
            cin >> arr[i];

            freq[arr[i]]++;
        }

        long long c0 = 0 ; long long c1 = freq[k];

        for(int i = 0 ; i < k; i++){
            if(freq[i] == 0){
                c0++;
            }
        }

        long long ans = max(c0,c1);

        cout << ans << endl;
    }
}
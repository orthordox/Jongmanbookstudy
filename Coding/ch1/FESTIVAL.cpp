#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int i = 0; i<t; i++){

        int n, l;
        cin>>n>>l;

        vector<int> arr(n+1);
        arr[0] = 0;
        
        for(int j = 1; j <= n; j++){
            int tmp;
            cin>>tmp;
            arr[j] = tmp+arr[j-1];  // 누적합,  n부터 m이면 arr[m]-arr[n];
        }
        double mn = 1000000000;
        for(int j = l; j<=n; j++){
            for(int k = 0; k <= n-j; k++){
                double tmp = arr[k+j] - arr[k];
                tmp /= (float)(j);
                if(mn>=tmp){
                    mn = tmp;
                }
            }
        }
        cout<<fixed;
        cout.precision(10);

        cout<<mn<<'\n';

    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        int sum1=0,sum2=0;
        bool asc = true;
        bool des = true;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int  des_a[n];
        for(int i=0;i<n;i++){
            des_a[n-1-i]=a[i];
        }
        for(int i=0;i<n;i++){
            sum1 += a[i];
            if(sum1==0){
                asc = false;
            }
        }
          for(int i=0;i<n;i++){
            sum2 += des_a[i];
            if(sum2==0){
                des = false;
            }
        }
        if(asc){
            cout << "YES" << endl;
            for(int i=0;i<n;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else if(des){
            cout << "YES" << endl;
            for(int i=0;i<n;i++){
                cout << des_a[i]<< " ";
            }
            cout << endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
    return 0;
}
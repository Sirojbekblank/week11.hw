//
// Created by Sirojbek on 11/5/2024.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t];
    int result;
    for(int i=0;i<t;i++) {
        cin>>a[i];
    }
    for(int k=0;k<t;k++) {
        for(int l=0;l<t;l++) {
            if(a[l]!=a[k] && a[l]!=0 && a[k]!=0) {
                result=a[k];
            }
            else if(a[l]!=a[k] && a[l]==0 || a[k]==0) {
                result=0;
            }
        }

    }
    cout<<result;
    return 0;
}

//
// Created by Sirojbek on 11/5/2024.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t];
    int max=0,result;
    for(int i=0;i<t;i++) {
        cin>>a[i];
    }
    for(int k=0;k<t;k++) {
        for(int j=k+1;j<t;j++) {
            result=a[j]-a[k];
            if(result>max) {
                max=result;
            }

        }

    }
    cout<<max<<endl;
    return 0;
}
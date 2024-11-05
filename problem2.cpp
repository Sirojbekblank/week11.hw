//
// Created by Sirojbek on 11/5/2024.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t];
    bool answer=true;
    int result=-1;
    for(int i=0;i<t;i++) {
        cin>>a[i];
    }
    while(answer) {
        for(int k=0;k<t;k++) {
            bool divisible=true;
            for(int l=0;l<t;l++) {
                if(a[l]%a[k]!=0) {
                    divisible = false;
                    break;
                }
            }
            if(divisible) {
                result=a[k];
                answer=false;
                break;
            }

        }
    }
    cout<<result;

    return 0;
}
//
// Created by Sirojbek on 11/5/2024.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t],result;
    for(int i=0;i<t;i++) {
        cin>>a[i];
    }
    for(int k=0;k<t;k++) {
        bool single=true;
        for(int l=0;l<t;l++) {
            if(a[l]==a[k] && l!=k) {
                single=false;
                break;
            }
        }
        if(single) {
            result=a[k];
            break;
        }

    }
    cout<<result;
    return 0;
}

//
// Created by Sirojbek on 11/5/2024.
//
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int a[t];
    int b[t];
    int sum=0;
    for(int i=0;i<t;i++) {
        cin>>a[i];
    }
    for(int k=0;k<t;k++) {
        cin>>b[k];
    }
    for(int m=0;m<t;m++) {
        sum+=a[m]*b[m];
    }
    cout << sum << endl;
    return 0;
}

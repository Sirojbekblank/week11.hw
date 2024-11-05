//
// Created by Sirojbek on 11/5/2024.
//
#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;
    int sumU=0,sumL=0;
    string U=" ",L=" ";
    for (int i = 0; i < name.size(); i++) {
        if (name.at(i) <='Z' ) {
            sumU++;
            U += name.at(i);
            U+= " ";
        }
        else {
            sumL++;
            L+=name.at(i);
            L+=" ";
        }

    }
    cout<<sumU<<U<<endl;
    cout<<sumL<<L<<endl;
    return 0;
}
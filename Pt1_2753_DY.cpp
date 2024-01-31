/*
https://www.acmicpc.net/problem/2753
*/

#include <iostream>
using namespace std;

int main(){

    int a;
    cin >> a;

    if((a%100) && !(a%4)) cout << "0";
    else if(a%400) cout <<"0";
    else cout << "1";
    return 0;
}
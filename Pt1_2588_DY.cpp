/*
https://www.acmicpc.net/problem/2588
*/

#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int n3 = n1 * (n2%10);
    int n4 = n1 * ((n2/10)%10);
    int n5 = n1 * (n2/100);
    int n6 = n3 + n4*10 + n5*100;
    cout << n3 << "\n" << n4 << "\n" << n5 <<"\n" << n6;
    return 0;
}
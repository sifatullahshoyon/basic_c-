// #include<iostream>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a > b){
        cout << a << endl;
    }else{
        cout << b << endl;
    }

    // shorter version in c++;
    cout << max(a,b) << endl;
    // অনেক গুলো সংখ্যা থেকে ও সবচেয়ে বড় টা বের করে দিতে পারে
    cout << max({30,5,54,61,21}) << endl;

    return 0;
}
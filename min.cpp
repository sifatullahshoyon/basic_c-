#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a < b){
        cout << a << endl;
    }else{
        cout << b << endl;
    }

    // shorter version in c++;
    cout << min(a,b) << endl;
    // অনেক গুলো সংখ্যা থেকে ও সবচেয়ে ছোট্ট টা বের করে দিতে পারে
    cout << min({30,5,54,61,21}) << endl;

    return 0;
}
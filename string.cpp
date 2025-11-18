#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }

    // TODO String
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    // input
    //? cin >> s; // scanf() এর মতো সি++ এ ও cin space সহ ইনপুট নিতে পারে না। সমাধান হিসাবে আমরা fgets() ব্যবহার করতাম।
    // fgets(s, 100, stdin);

    // c++ এ আছে
    cin.getline(s, 100);
    // print
    cout << x << endl << s << endl;

    //! Built in func
    string f; // with space not working
    cin >> f;
    cout << f << endl;

    return 0;
}
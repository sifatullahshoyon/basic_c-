#include<iostream>
using namespace std;
int main(){
    int x;
    char c;
    double d;
    // TODO take input from user
    // std:: cin >> x;
    // TODO print
    // std:: cout << x << std:: endl;

    cin >> x >> c >> d;
    cout << x << endl << c << endl << d << endl;

    char s = 'S';
    int ascii = s;
    cout << ascii << endl;
    // Typecasting
    cout << (int)c << endl;
    int y = 65;
    cout << (char)y << endl;

    return 0;
}
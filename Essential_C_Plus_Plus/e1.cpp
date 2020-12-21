#include <iostream>
#include <string>
using namespace std;
int main(){
    string user_name;
    cout << "Please enter your name?\n";
    cin >> user_name;
    cout << "\n"
         << "hello,"
         << user_name
         <<"... and googbye!\n";
    return 0;
}
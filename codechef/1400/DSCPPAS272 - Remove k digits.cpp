#include <iostream>
#include <string>
#include <deque>

using namespace std;

string removeKdigits(string num, int k) {
    deque<char>dq;
    for(char c: num){
        while(k>0 && !dq.empty() && dq.back()>c){
            dq.pop_back();
            k--;
        }
        dq.push_back(c);
    }
    while(k > 0){
            dq.pop_back();
            k--;
        }
    while(!dq.empty() && dq.front()=='0'){
        dq.pop_front();
    }
    return dq.empty()?"0":string(dq.begin(),dq.end());
}

int main() {
    int n, k;
    string num;

    // Take input for the length of the number (n), number of digits to remove (k), and the number itself
    cin >> n >> k;
    cin >> num;

    // Call the function and print the result
    cout << removeKdigits(num, k) << endl;

    return 0;
}

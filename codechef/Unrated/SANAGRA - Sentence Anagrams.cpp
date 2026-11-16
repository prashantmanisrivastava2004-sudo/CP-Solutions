#include <bits/stdc++.h>
using namespace std;
map<string,int>get_freq(string& s){
    map<string,int>freq;
    string M ="";
    for(char c: s){
        if(isalpha(c)){
             M += tolower(c);
        }else{
            if(!M.empty()){
                freq[M]++;
                M.clear();
            }
        }
    }
    if(!M.empty()){
        freq[M]++;
    }
    return freq;
}

int main() {
    string s,r;
    getline(cin,s);
    getline(cin,r);
    map<string,int>f1 = get_freq(s);
    map<string,int>f2 = get_freq(r);
    if(f1==f2){
        cout<<"The sentences are anagrams."<<endl;
    }else{
        cout<<"The sentences are not anagrams."<<endl;
    }

}

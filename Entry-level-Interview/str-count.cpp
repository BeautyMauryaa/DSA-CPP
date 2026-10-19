#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void vowelconsonants(string str){
    int vowel=0;
    int consonants=0;
    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z'){
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        vowel++;
      }else{
        consonants++;
      }
    }
    
    }
    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonants << endl;
}

int main(){
    string s;
    getline(cin,s);
    vowelconsonants(s);
    return 0;
}

#include<vector>
#include<iostream>
using namespace std;

//max occuring char
char getMaxChar(string str){
    vector<char>chars;
    //check the validity and convert the upper into lower
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        //check validity
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            //if char is captical then convert into lower
            if(ch>='A'&&ch<='Z'){
                   ch=ch-'A'+'a';//convert intolower case
            }
             //now push the all char into chars array
             chars.push_back(ch);
        }
    }

    // step2:- compare each character to count frequency like inarray 
    int maxcount=0;
    char maxchar=' ';
    for(int i=0;i<chars.size();i++){
        int count=0;
        for(int j=0;j<chars.size();j++){
            if(chars[i]==chars[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maxchar=chars[i];
        }
    }
    return maxchar;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Maximum occurring character is: " << getMaxChar(input) << endl;
    return 0;
}
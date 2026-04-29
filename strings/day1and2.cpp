//momday and tuesday-28th and 29th july
#include<iostream>
using namespace std;
// int main(){
//     char name[20];
//     cout<<"enter your name: ";
//     cin>>name;
//     cout<<"your name is "<<name<<endl;
//     name[2]='\0';
//     cout<<"the meaning of null pointer : "<<name;
//     return 0;
// }


//length
int length(char name[]){
    int length=0;
    for(int i=0;name[i]!='\0';i++){
        length++;
    }
    return length;
}

//reverse 
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}


//uper to lower
char tolowercase(char name){
  if(name>='a' && name<='z'){
        return name;
    }else{
        char temp=name-'A' + 'a';
        return temp;
    }
}

bool palindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(tolowercase(name[s])!=tolowercase(name[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

char getMaxOccChar(string s)
{
    int arr[26]={0};
    //create an array of count of character
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        //lowercase
        if(ch>='a'&&ch<='z'){
             number=ch-'a';
            }else{//upercase
                number=ch-'A';
            }

            arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
       if(maxi<arr[i]){
        ans=i;
       maxi=arr[i];       }
    }
    char finalans='a'+ans;
    return finalans;
}
int main(){
    char name[20];
    cout<<"enter your name: ";
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"length is "<<length(name)<<endl;
    reverse(name,length(name));
    cout<<"after reverse: "<<endl;
    cout<<"your name is "<<name<<endl;
    cout<<palindrome(name,length(name))<<endl;
    cout<<"convert upper to lower "<<tolowercase('A')<<endl;
    cout<<"max occuring: ";
    string s;
    cin>>s;
    cout<<getMaxOccChar(s)<<endl;
    return 0;
}
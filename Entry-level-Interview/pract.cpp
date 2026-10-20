// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int result=0;
//     while(num!=0){
//         int remainder=num%10;
//         result=result*10+remainder;
//         num/=10;
//     }

//     cout<<result;
//     return 0;
// }


//palindrome
// int main(){
//     int num;
//     cin>>num;
//     int originalnum=num;
//     int remainder;
//     int result=0;
//     while(num!=0){
//         remainder=num%10;
//         result=result*10+remainder;
//         num/=10;
//     }
//     if(originalnum==result){
//         cout<<"palindrome";
//     }else{
//         cout<<"not palindrome";
//     }
//     return 0;
// }

//prime num:
// int main(){
//     int num;
//     cin>>num;
//     if(num<2){
//         cout<<"can't be prime num";
//         return 0;
//     }
//     bool isprime=true;
//     for(int i=2;i<=num/i;i++){
//         if(num%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<"prime number";
//     }else{
//         cout<<"not prime num";
//     }
//     cout<<
//     return 0;
// }

//print prime btw range
// bool isprime(int num){
//     if(num<2){
//         cout<<"not prime num";
//         return false;
//     }

//     for(int i=2;i<=num/i;i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int start;
//     cin>>start;
//     cout<<endl;
//     int end;
//     cin>>end;
//     bool found=false;
//     for(int i=start;i <=end;i++){
//      if(isprime(i)){
//         cout<<i<<" ";
//         found =true; 
//      }
//     }
//     if(!found){
//         cout<<"no prime num";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

// bool isprime(int num){
    
//     if(num<2){
//         return false;
//     }

//     for(int i=2;i<=num/i;i++){
//         if(num%i==0){
//             return false;
//         }
//     }

//     return true;
// }

// int main(){
//     int start;
//     cin>>start;
//     int end;
//     cin>>end;
//     int count=0;
//     bool found=false;
//     for(int i=start;i<=end;i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//             count++;
//             found=true;
//         }

//     }
//     cout<<count;
//     if(!found){
//         cout<<"no prime num in this range.";
//     }
//     return 0;
// }
//factorial
// int main(){
//     int num;
//     cin>>num;
//     if(num<0){
//         cout<<"zero and negative can't be fact";
//         return 0;
//     }
//     long long fact=1;
//    for(int i=1;i<=num;i++){
//     fact=fact*i;
//    }
//    cout<<fact;
//    return 0;

// }


//fibonacci
// void fibonacci(int num){
//     if(num<0){
//         cout<<"-ve num";
//         return;
//     }
//     long long t1=0,t2=1;
//     for(int i=t1;i<=num;i++){
//         cout<<t1<<" ";
//         long long nexterm=t1+t2;
//         t1=t2;
//         t2=nexterm;
//     }
//     cout<<endl;
// }

// int main(){
//     int num;
//     cin>>num;
//     fibonacci(num);
//     return 0;
// }

//armstrong
// #include<cmath>
// bool armstrong(int num){
//     if(num<0){
//         cout<<"negative num";
//         return false;
//     }

//     int count=0;
//     int temp=num;
//     int org=num;
//     while(temp>0){
//         count++;
//         temp/=10;
//     }

//     int remainder;
//     int sum=0;
//     while(temp>0){
//         remainder=temp%10;
//         sum+=round(pow(remainder,count));
//         temp/=10;
//     }
//     return (sum==org);
// }

// int main(){
//     int num;
//     cin>>num;
//     if(armstrong(num)){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }
//     return 0;
// }

//string palindrome
// int main(){
//     string str;
//     cin>>str;
//     int left=0;
//     int right=str.length()-1;
//     while(left<right){
//         if(str[left]!=str[right]){
//             cout<<"not palindrome";
//         }else{
//             cout<<"palindrome";
//         }
//         left++;
//         right--;
//     }
//     return 0;

// }


//reverse string;

// void reverse(string &s){
//     int left=0;
//     int right=s.length()-1;
//     while(left<right){
//         char temp=s[left];
//         s[left]=s[right];
//         s[right]=temp;
//         left++;
//         right--;
//     }
//     return;
// }

// int main(){
//     string str;
//     cin>>str;
//     reverse(str);
//     cout<<str;
//     return 0;

// }


// bool palidrome(string str){
//     int left=0;
//     int right=str.length()-1;
//     while(left<right){
//         if(str[left]!=str[right]){
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// int main(){
//     string str;
//     cin>>str;
//     if(palidrome(str)){
//         cout<<"yess";
//     }else{
//         cout<<"not palindrome";
//     }
//     return 0;

// }

//vowel and consonant count

// #include<cctype>
// void consonantvowel(string str){
//     int vowel=0;
//     int consonant=0;
//     for(int i=0;i<str.length();i++){
//        char ch=tolower(str[i]);
//        if(ch>='a' && ch<='z'){
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//             vowel++;
//         }else{
//             consonant++;
//         }
//        }
//     }
//     cout<<vowel;
//     cout<<consonant;
// }

// int main(){
//     string s;
//     cin>>s;
//     consonantvowel(s);
//     return 0;
// }

//ewmovw duplicate char
// int main(){
//     string str;
//     cin>>str;

//     string result="";
//     for(int i=0;i<=str.length();i++){
//         bool duplicates=false;
//         for(int j=0;j<=result.length();j++){
//             if(str[i]==result[j]){
//                 duplicates=true;
//                 break;
//             }
//         }
//         if(!duplicates){
//             result+=str[i];
//         }
//     }
//     cout<<result;
//     return 0;
// }

//coutn word
int main(){
    string sen;
    cin>>sen;
     int word=0;
     bool inword=false;

     for(char ch : sen){
        if(ch !=' '&&ch!='/t'&&ch!='/n'){
            word++;
            inword=true;
        }else{
            inword=false;
        }
     }
     cout<<word;
     return 0;
}
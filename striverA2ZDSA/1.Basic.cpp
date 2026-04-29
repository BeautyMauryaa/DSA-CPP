// // // // #include <iostream>
// // // // using namespace std;

// // // // const int SIZE = 7;   // size of hash table
// // // // int hashTable[SIZE];

// // // // // initialize table with -1 (empty)
// // // // void init() {
// // // //     for (int i = 0; i < SIZE; i++) {
// // // //         hashTable[i] = -1;
// // // //     }
// // // // }

// // // // // simple hash function
// // // // int hashFunction(int key) {
// // // //     return key % SIZE;
// // // // }

// // // // // insert using linear probing
// // // // void insert(int key) {
// // // //     int index = hashFunction(key);

// // // //     // if occupied, move forward
// // // //     while (hashTable[index] != -1) {
// // // //         index = (index + 1) % SIZE;  
// // // //     }
// // // //     hashTable[index] = key;
// // // // }

// // // // // display table
// // // // void display() {
// // // //     for (int i = 0; i < SIZE; i++) {
// // // //         cout << i << " --> " << hashTable[i] << endl;
// // // //     }
// // // // }

// // // // int main() {
// // // //     init();

// // // //     int arr[] = {15, 11, 27, 8, 12};
// // // //     for (int x : arr) {
// // // //         insert(x);
// // // //     }

// // // //     display();
// // // //     return 0;
// // // // }


// // // #include<iostream>
// // // using namespace std;
// // // // int main(){
// // // //     int n;
// // // //     cin>>n;
// // // //     int arr[n];
// // // //     for(int i=0;i<=n;i++){
// // // //         cin>>arr[i];
// // // //     }

// // // //     //precompute
// // // //     int hash[13]={0};
// // // //     for(int i=0;i<n;i++){
// // // //         hash[arr[i]]+=i;
// // // //     }

// // // //     int q;
// // // //     cin>>q;
// // // //     while(q--){
// // // //         int number;
// // // //         cin>>number;
// // // //         //fetch
// // // //         cout<<hash[number]<<endl;
// // // //     }
// // // //     return 0;
// // // // }


// // // int main{
// // //     string s;
// // //     cin>>s;
    
// // // }


// // //count digit
// // #include<iostream>
// // #include<string>
// // #include<cmath>
// // #include<algorithm>
// // using namespace std;
// // int countdigit(int n){
// //     int count=0;
// //     while(n!=0){
// //         n=n/10;
// //         count++;
// //     }
// //     return count;
// // }


// // //2.reverse a number
// // int reversenum(int n){
// //     //1.convert number into sring 
// //     string str=to_string(n);
// //     //2.now reverse
// //     reverse(str.begin(),str.end());
// //     //3.convert back into integer using stio function
// //     int num=stoi(str);
// //     return num;
// // }

// // //3.palindrome
// // bool palindrome(int n){
// //     if(n<0)
// //     return false;
// //     string str=to_string(n);
// //     string reversestr="";
// //     for(int i=str.length()-1;i>=0;i--){
// //         reversestr+=str[i];
// //     }
// //     return str==reversestr;
// // }

// // //4. GCD from the array
// // int GCD(int n1,int n2){
// //     int gcd=1;
// //     for(int i=1;i<=min(n1,n2);i++){
// //         if(n1%i==0&&n2%i==0){
// //             gcd=i;
// //         }
// //     }
// //     return gcd;

// // }

// // //5.check ifthe number is armstrong
// //  bool isArmstrong(int n) {
// //         int original = n;
// //         int count = 0;

// //         // Count digits
// //         int temp = n;
// //         while (temp != 0) {
// //             count++;
// //             temp /= 10;
// //         }

// //         // Calculate sum of powered digits
// //         int sum = 0;
// //         temp = n;
// //         while (temp != 0) {
// //             int lastdigit = temp % 10;
// //             sum += pow(lastdigit, count);
// //             temp /= 10;
// //         }

// //         // Check if Armstrong
// //         return sum == original;
// //     }


// //     //devisior
// //     // vector<int> divisors;

// //     //     for (int i = 1; i <= n; i++) {
// //     //         if (n % i == 0) {
// //     //             divisors.push_back(i);
// //     //         }
// //     //     }

// //     //     return divisors;
// //     // }

// //     //isprime
// //      bool isPrime(int n) {
// //        if(n<1)
// //        return false;
// //        for(int i=2;i<n;i++){
// //         if(n%i==0){
// //             return false;
// //         }
// //        }
// //        return true;
// //     }

// // int main(){
// //     int n;
// //     cin>>n;
// //     int n1;
// //     cin>>n1;
    
// //     int n2;
// //     cin>>n2;
// //     cout<<"the number of digits in n is: "<<countdigit(n)<<endl;
// //     cout<<"reverse of this number is: "<<reversenum(n)<<endl;
// //     cout<<"check palindrom: "<<palindrome(n)<<endl;
// //     cout<<"gcd: "<<GCD(n1,n2)<<endl;
// //     cout<<"annagram: "<<isArmstrong(n)<<endl;
// //     cout<<"check prime num: "<<isPrime(n);
// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// //print something n times
// // void printNTimes(int n) {
// //     if (n == 0) {
// //         return;
// //     }
// //     cout << "Hello" << endl;
// //     printNTimes(n - 1);
// // }

// // //print name n times using recusrion
// // void names(string name,int n1){
// //     //base case
// //     if(n1==0){
// //         return;
// //     }

// //     cout<<name<<endl;
// //     names(name,n1-1);
// // }


// //print 1 to n or accending order
// void printonetoN(int n){
//     if(n==0)
//     return;
// printonetoN(n-1);
// cout<<n<<endl;
// }

// //print n to 1 or descending order
// void desc(int n){
//     if(n==0)
//     return;
//     cout<<n<<endl;
//     desc(n-1);
// }

// int Nsum(int n){
//     if(n==0)
//     return 0;
//     return n + Nsum(n-1);
// }

// //factorial of n number
// long long factorial(int n){
//     if(n==0)
//     return 1;
// return n*factorial(n-1);
// }


// //reverse a number
// int reversenum(int n,int rev=0){
//     if(n==0){
//         return rev;
//     }

//     rev=rev*10+(n%10);
//     return reversenum(n/10,rev);
// }

// //palindrome
// bool ispalindrome(string s){
//     int left=0,right=s.size()-1;
//     while(left<right){
//         while(left<right&&isalnum(s[left]))
//         left++;
//         while(left<right&&isalnum(s[right]))
//         right--;
//      left++;
//      right--;
//     }
//     return true;
// }

// int main() {
//     // int n;
//     // cout << "Enter how many times to print: ";
//     // cin >> n;
//     // printNTimes(n); 
//     //  int n1;
//     //  cout << "Enter how many times to print: ";
//     // cin >> n1;
//     // string name;
//     // cin>>name;
//     // names(name,n1);
//     // int n;
//     // cin>>n;
//     // printonetoN(n);
//     // desc(n);
//     int n;
//     cin>>n;
//     cout<<"sum:";
//     cout<<Nsum(n)<<endl;
//     cout<<"factorial: "<<factorial(n);
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Reversed number is: " << reversenum(num) << endl;
//     string s = "A man, a plan, a canal: Panama";
//     if (ispalindrome(s)) {
//         cout << "true\n";
//     } else {
//         cout << "false\n";
//     }



//     return 0;
// }


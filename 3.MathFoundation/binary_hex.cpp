// numbers have diff lang:
// decimal,binary,octal,hexa

// comp use binary because electronic circuits have only two easy states
// 1 (ON) and 0(OFF)
// comp undersatnd only these two digits 0 and 1 which is called binary

// decimal(base)
// comp use 0 and 1 bcoz circuits only have two reliable states thats called base2(binary)

// base means: how many digits we have in a number
// or how many symbol are available before we move to the next position

// in decimal: 345 =3*100+4*10+5 or 3*10²+4*10+5 (so base is 10)
// in binary: 1011 means 1*2³+0*2²+1*2+1 = 8+0+2+1=11
// so 1011₂ = 11₁₀

// 2⁰	1
// 2¹	2
// 2²	4
// 2³	8
// 2⁴	16
// 2⁵	32
// 2⁶	64
// 2⁷	128
// 2⁸	256
// 2⁹	512
// 2¹⁰	1024

// decimal->binary
// 13 so to convert use repeated division by 2
// 13/2=6 remainder=1
// 6/2=3 remainder=0
// 3/2=1 remainder 1
// 1/2=0 remainder 1
// read bottom-up
// 1101
// ans: 13₁₀ = 1101₂

// why binary in dsa:
// bcoz every integer in memory is stored as binary
// int x=13 but stored as 1101 in memory and in 8 bit ex= 00001101

// what is bit: one position(smallest fundamental unit of data used by comp)
// 0 or 1

// byte: 8 bits ex: 10110010 contains 8 bits therefor 1 byte
// kb: 1024 bytes
// mb: 1024 kb
// gb: 1024 mb
// tb: 1024 gb

// hexadecimal:
// imagine 32 bit number: 11110110101011001100101011101011
// terrible to read
// use hexa(base 16) 0-9 and a-f
// ex: 1a1b1c1d1e1f1g1h1i1j1k1l1m1n1o1p1q1r1s1t1u1v1w1x1y1z1
// hexa is used in memory and in network

// in binary: 1111 vallue 15 but in hexa 15=f so 1111₂ = F₁₆

// binary to hex (shortcut)
// 11010110 = 1101(13=D) and 0110(6) so ans willbe D6

// color in css: #ff0000(red)

// Bits and bytes and number storage:
// formula : 2^n where n=number of bits

// how many value can 8 bits store: 2^8=256

// when we write char x;
//  so system allocate 8 bits which is 255(maximum assigned value)

// when we write int x;
//  so system allocate 32 bits which is 4,294,967,295(maximum assigned value)

// when we write float x;
//  so system allocate 32 bits which is 4,294,967,295(maximum assigned value)

// when we write double x;
//  so system allocate 64 bits which is 18,446,744,073,709,551,615(maximum assigned value)

// when we write long x;
//  so system allocate 64 bits which is 18,446,744,073,709,551,615(maximum assigned value)

// the leftmost bit is the sign bit
// the rightmost bit is called the least significant bit

// for n bit the unsigned range is - 0 to (2^n-1)
// signed range : -2^(n-1) to 2^(n-1)-1

// BIT MANIPULATION: AND, OR, XOR, NOT, LEFT SHIFT, RIGHT SHIFT

// XOR(most important):
// exclusive OR
// Result is 1 only when both bits are different
// 0 0 = 0
// 0 1 = 1
// 1 0 = 1
// 1 1 = 0

// same=0 and diff=1
// Xor on the number: xor is binary representation
//  so to find the xor of number we have to convert the number into binary form first
// for ex: 5 xor 3
// so binary form of 5 is 5/2=2 remainder 1 and 2/2=1 remainder 0 ,remainder 1/2=0 remainder 1
// binary form of 3 is 3/2=1 remainder 1 and 1/2=0 remainder 1

// 5=101 and 3=011
// 101 xor 011=110

// array unique number
//[2,3,2,4,4]= xor everything 2 ^ 3 ^ 2 ^ 4 ^ 4= (2 ^ 2) ^ (4 ^ 4) ^ 3 =0 ^ 0 ^ 3=3 (unique number)
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &arr)
{
    int ans = 0;
    for (int num : arr)
    {
        ans ^= num;
    }
    return ans;
}

int main()
{
    vector<int> arr = {8, 3, 5, 3, 8};
    cout << "Unique element: " << singleNumber(arr) << endl;
    return 0;
}
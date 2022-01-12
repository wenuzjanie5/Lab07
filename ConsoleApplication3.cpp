// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//zadanie 1
string toBinary(int num);
//zadanie 2
int NWD(int a, int b);
//zadanie 3
int fibSeq(int n);
//zadanie 4
int fac(int num);
//zadanie 5
float seq1(float n);

int main()
{
    //zadanie 1 
    int a = 24;
    int b = 56;
    cout << "64(10) = " << toBinary(a) << "(2)\n63(10) = " << toBinary(b) << "(2)\n";

    //zadanie 2
    cout << "NWD(63,64) = " << NWD(a, b) << endl;

    //zadanie 3
    cout << "trzeci wyraz ciagu Fibonacciego to " << fibSeq(3) << ",\ndziesiaty to " << fibSeq(10) << endl;

    //zadanie 4
    cout << "5! = " << fac(5) << "\n7! = " << fac(7) << endl;

    //zadanie 5
    cout << "dla 4 to " << seq1(4) << ", dla 5: " << seq1(5);
}

//zadanie 1
string toBinary(int num) {
    if (num == 0) return "0";
    else if (num == 1) return "1";
    else {
        return (toBinary(num / 2) + toBinary(num % 2));
    }
}

//zadanie 2
int NWD(int a, int b) {
    if (b != 0) return NWD(b, a % b);
    return a;
}

//zadanie 3
int fibSeq(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibSeq(n - 1) + fibSeq(n - 2);
}

//zadanie 4
int fac(int num) {
    if (num == 0) return 0;
    else if (num == 1) return 1;
    else return num * fac(num - 1);
}

//zadanie 5
float seq1(float n) {
    if (n == 1) return 0;
    else if (n == 2) return 0.5;
    else return (0 - seq1(n - 1)) * seq1(n - 2);
}
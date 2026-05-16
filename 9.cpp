#include <iostream>
using namespace std;

bool isPalindrome(long long x) {
    if (x < 0) return false;

    long long rem;
    long long ans = 0;
    long long y = x;

    while (x > 0) {
        rem = x % 10;     
        x = x / 10;     
        ans = ans * 10 + rem; 
    }

    return (y == ans);
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}

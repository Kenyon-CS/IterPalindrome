#include <iostream>
#include <string>

bool isPalindrome(const std::string& s) {
    int len = s.size();
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


int main() {
    std::string testStr = "racecar";
    if (isPalindrome(testStr)) {
        std::cout << testStr << " is a palindrome." << std::endl;
    } else {
        std::cout << testStr << " is not a palindrome." << std::endl;
    }
    return 0;
}

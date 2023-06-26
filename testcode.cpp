#include <iostream>
#include <string>

std::string ConcatRemove(const std::string& s, const std::string& t, int k) {
    int sLength = s.length();
    int tLength = t.length();

    // Calculate the length of the common prefix between s and t
    int commonPrefix = 0;
    while (commonPrefix < sLength && commonPrefix < tLength && s[commonPrefix] == t[commonPrefix]) {
        ++commonPrefix;
    }

    // Calculate the number of operations required
    int minOperations = (sLength - commonPrefix) + (tLength - commonPrefix);

    // Check if it's possible to achieve t within k operations
    if (k >= minOperations) {
        return "yes";
    } else {
        return "no";
    }
}

int main() {
    std::string s, t;
    int k;

    std::cout << "Enter the starting string (s): ";
    std::cin >> s;

    std::cout << "Enter the desired string (t): ";
    std::cin >> t;

    std::cout << "Enter the maximum number of operations (k): ";
    std::cin >> k;

    if (s.length() >= 1 && s.length() <= 100 && t.length() >= 1 && t.length() <= 100 && k >= 1 && k <= 100) {
        std::string result = ConcatRemove(s, t, k);

        std::cout << "s: " << s << std::endl;
        std::cout << "t: " << t << std::endl;
        std::cout << "k: " << k << std::endl;
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cout << "Invalid input. Please ensure s has a length between 1 and 100, t has a length between 1 and 100, and k is between 1 and 100." << std::endl;
    }

    return 0;
}

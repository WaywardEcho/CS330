//print/cout nvr works without this
#include <iostream>
using namespace std;
#include <string>

//takes 2 nums, multiplies them, then returns the product
int multiply(int x, int y) {
    int product = x * y;
    return product;
}

// int sum(int k) {
//   if (k > 0) {
//     return k + sum(k - 1);
//   } else {
//     return 0;
//   }
// }

//majority of this function is reworked from the code provided here --> https://www.programiz.com/cpp-programming/examples/factorial
int factorial(int n){
    int factorial = 1;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        return factorial;  
    }

}

pair<string, string> split(const string &str){
    int len = str.length();
    int loc = len/2;
    string first = str.substr(0,loc);
    string last = str.substr(loc);

    return make_pair(first, last);
}

int referenceTest(int z){
    z = 5000000000;
    return z;
}

int main() {
    int product = multiply(13, 24);
    int factor = factorial(4);

    pair<string,string> twoStrings = split("We hold these truths to be self-evident, that all men are created equal, that they are endowed by their Creator with certain unalienable rights, that among these are life, liberty, and the pursuit of happiness.");
    string pt1 = twoStrings.first;
    string pt2 = twoStrings.second;

    int x = 5;
    cout << "Pre-test x: " << x;
    referenceTest(x);
    cout << "Post-test x: " << x;

    return 0;
}

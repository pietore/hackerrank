#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

//Write your code here
class Calculator : public AdvancedArithmetic {
    public:
        virtual int divisorSum(int n) {
            int squareRoot = (int)floor(sqrt(n));
            int sum = 0;
            for (int i = 1; i <= squareRoot; i++) {
                if(n % i == 0){
                    sum += i;
                    if(n/i != i) {
                        sum += (n/i);
                    }
                }
            }
            return sum;
        }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}

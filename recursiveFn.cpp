#include<iostream>

using namespace std;

void even(int L, int R) {
    // Base case 
    if (R < L)
        return;

    // Recurrence relation
    R % 2 == 0 ? even(L, R - 2) : even(L, R - 1);

    // Check if R is even
    if (R % 2 == 0)
        cout << R << " ";
}

void odd(int L, int R) {
    // Base case
    if (R < L)
        return;

    // Recurrence relation
    R % 2 == 1 ? odd(L, R - 2) : odd(L, R - 1);

    // Check if R is even
    if (R % 2 == 1)
        cout << R << " ";
}

int evenCSInfo(int L, int R){ //This function's problem is -> set L = 11 and R = 25 You will get 11 13 15 ... which is wrong
	if(L > R)
		return 0;
	cout << L << " ";
	return evenCSInfo(L+2, R);
}

int countDigits(int num)
{
    static int count = 0;

    if (num > 0)
    {
        count++;
        countDigits(num / 10);
    }
    else
        return count;
}

int count_digit(int num)
{
    static int count = 0;
    if (num != 0)
    {
        count++;
        count_digit(num / 10);
    }
    return count;
}

int sumDigit(int num) {
    int sum = 0;
    if (num != 0) {
        sum += num%10 + sumDigit(num / 10);
    }
    return sum;
}
int sum_Digit(int num) {
    if (num == 0)
        return 0;
    return (num % 10 + sum_Digit(num / 10));
}

int decToBin(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 2 + 10 * decToBin(num / 2));
}
void decimalToBinary(int n)
{
    // Base case
    if (n == 0) {
        cout << "0";
        return;
    }
 
    // Recursive call
    decimalToBinary(n / 2);
    cout << n % 2;
}
bool isPrime(int n, int i = 2){
    // Base cases
    if(n <= 2)
        return (n == 2) ? true : false;
    if(n % i == 0)
        return false;
    if(i * i > n)
        return true;
    
    // Check for next divisor
    return isPrime(n, i+1);
}

int checkPrime(int i, int num){
    if(num == 1)
        return 0;
    else
        if(num % i == 0)
            return 1;
    else
        return checkPrime(i+1, num);
}

int main() {

    // int L = 0, R = 25;
    // cout << "Even numbers:";
    // even(L, R);
    // cout << endl;

    // cout << "Odd numbers:";
    // odd(L, R);
    // evenCSInfo(L, R);

	// cout << count_digit(12) << endl;

    //check for prime number
    int n = 7;
    if(checkPrime(2, 3) == 0)
        cout << "Yes";
    else 
        cout << "No";

    return 0;
}

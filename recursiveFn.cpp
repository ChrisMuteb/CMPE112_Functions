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

int main() {

    // int L = 0, R = 25;
    // cout << "Even numbers:";
    // even(L, R);
    // cout << endl;

    // cout << "Odd numbers:";
    // odd(L, R);
    // evenCSInfo(L, R);

	cout << count_digit(12) << endl;

    return 0;
}

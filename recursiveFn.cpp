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


int main() {

    int L = 0, R = 25;
    cout << "Even numbers:";
    even(L, R);
    cout << endl;

    cout << "Odd numbers:";
    odd(L, R);
    // evenCSInfo(L, R);

    return 0;
}

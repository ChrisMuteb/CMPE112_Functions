#include<iostream>
#include<math.h>

using namespace std;

//11- get the ages of 10 students and display the total
void totalAges();
//12- get a number from the user and display the multiplication table
void multiplicationTable();
//13- send character to a function and display the rest of the characters of alphabet.
void showAlphabet(char character);
//14- get the base and exponent from the user and calculate the power of the base
int raiseToPower(int base, int exponent);
//15- get x, y & z from the user then find the maximum number
int maximumNumber(int a, int b, int c);
//16- Menu
float calculateExponent(int x, int y);
int calculatePower(int x, int y);
float calculateAbsolute(int x, int y);
float calculateSquareRoot(int x, int y);
//17- 
int totalHours(int totalMoney);
float average(int totalMoney);


int main(){

    char aCharacter;
    int base, exponent;

    //totalAges();
//    multiplicationTable();
//    showAlphabet('G');

//	cout << raiseToPower(2, 5);
	cout << maximumNumber(5, 2, 9);


    return 0;
}

void totalAges(){
    int total = 0;
    int age;

    for(int i = 0; i < 5; i++){
        cout << "Please enter student " << i+1 << " age: ";
        cin >> age;
        total = total + age;
    }
    cout << "The total is: " << total << endl;
}

void multiplicationTable(){

    int number = 0;
    int product = 0;
    cout << "Please enter a number: ";
    cin >> number;

    for(int i = 0; i < 10; i++){
        product = number * i;
        cout << number << " x " << i << " : " << product << endl;
    }
}

void showAlphabet(char character){
    char lastAlphabet;
    ++character;
    if(character >= 65 && character < 91){
        lastAlphabet = 'Z';
    }
    else{
        lastAlphabet = 'z';
    }
    
    cout << "Rest of the character(s) are: ";
    for(char c = character; c < lastAlphabet; c++){
        cout << c;
        
    }
}

int raiseToPower(int base, int exponent){
    int result = 1;

    if(exponent == 0){
        return 1;
    }

    while(exponent > 0){
        result = result * base;
        exponent--;
    }
    return result;
}

int maximumNumber(int a, int b, int c){
    int max = a;
    if(max < b){
        max = b;
    }
    else if(max < c ){
        max = c;
    }
    return max;
}

float calculateExponent(int x, int y){
    return exp(x) + y;
}
int calculatePower(int x, int y){
    return pow(x, y) + x + pow(y, 2);
}
float calculateAbsolute(int x, int y){
    return pow(-y, 2) + x;
}
float calculateSquareRoot(int x, int y){
    return sqrt(x + pow(y, 2));
}

int totalHours(int totalMoney){
    return totalMoney / 20;
}
float average(int totalMoney){
    return totalMoney / 10;
}
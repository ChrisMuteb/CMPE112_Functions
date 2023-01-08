#include<iostream>

using namespace std;

void getNumbers();
void getMinMaxNumbers();

const int sz = 3;

int main(){

    
    // getNumbers();
    getMinMaxNumbers();

    return 0;
}

void getNumbers(){
    int x[sz];
    for(int index = 0; index < sz; index++){
        cout << "Enter the element: " << index << " : ";
        cin >> x[index];
    }
    cout << "\n------------------------------\n";
    for(int index = 0; index < sz; index++){
        cout << "element: " << x[index] << endl;
    }
}

void getMinMaxNumbers(){
    int x[sz];
    for(int index = 0; index < sz; index++){
        cout << "Enter the element: " << index << " : ";
        cin >> x[index];
    }
    // Find min
    int min = x[0], max = x[0];
    int i = 0;
    while (i < sz)
    {
        if(min > x[i])
            min = x[i];
        i++;
    }
    // Find max
    int j = 0;
    while (j < sz)
    {
        if(max < x[j])
            max = x[j];
        j++;
    }
    
    cout << "\n------------------------------\n";
    cout << "Min: " << min << "\nMax: " << max << endl;
}

void exampleFromTheNotes(){
    int numbers[] = {58,2,8,100,7};
    double rate[3] = {0.075, 0.080};
    cout << rate[2] << endl;

    int myArray[3] = {5,2,3};
    int array_size = sizeof(myArray)/sizeof(myArray[0]);
    cout << sizeof(myArray) << " " << sizeof(myArray[0]) << endl;
    for(int x = 0; x < array_size; x++)
        cout << "\n" << myArray[x];

    int x[sz];
    for(int index = 0; index < sz; index++){
        cout << "Enter the element: " << index << " : ";
        cin >> x[index];
    }
    cout << "\n------------------------------\n";
    for(int index = 0; index < sz; index++){
        cout << "element: " << x[index] << endl;
    }
}
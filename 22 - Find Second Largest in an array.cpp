#include <iostream>
using namespace std;

int main()
{
    int arry[6] = {1, 2, 44, 33, 5, 36};
    int FirstLarg = arry[0], SecondLarg = arry[0];

    for (int i = 1; i <6; i++) { 
        if (arry[i] > FirstLarg) {
            SecondLarg = FirstLarg;
            FirstLarg = arry[i];
        } else if (arry[i] > SecondLarg && arry[i] != FirstLarg) {
            SecondLarg = arry[i];
        }
    }

    cout << "First Largest: " << FirstLarg << endl;
    cout << "Second Largest: " << SecondLarg << endl; 

    return 0;
}

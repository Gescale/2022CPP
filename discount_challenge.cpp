// Sololearn Challenge where, 5 ages are entered
// Find the youngest person and make their age the doclount rate over hundred
// Apply the dicount of the five people all together


#include <iostream>
using namespace std;

int main() {
    int ages[5];
    double small = 100000000;
    double total = 0;

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
        if(small > ages[i])
        {
            small = ages[i];
        }
    }
    //your code goes here
    total = 50 - ((small/100) * 50);
    cout << total << endl;
    cout << "Smmall :" << small << endl;
    
    return 0;
}
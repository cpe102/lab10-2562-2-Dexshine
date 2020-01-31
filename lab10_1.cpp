// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();

    srand(time(0));
    int i = rand()%8;
    cout << "You will get " << grade[i] << " in this 261102.";
    return 0;
}


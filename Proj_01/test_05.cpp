#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.getline(name, ArSize);
    cout << strlen(name) << endl;
    cout << name << endl;
    for (int i = 0; i < strlen(name); i++)
    {
        cout << int(name[i]) << endl;
    }
    // cout << "Enter your favorite dessert: " << endl;
    // cin.getline(dessert, ArSize);
    // cout << "I have some delicious " << dessert;
    // cout << " for you. " << name << ".\n";
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int index(vector<int> pos, int i, int val)
{
    int right = 2*pos.size();
    while (i < right)
    {
        if (pos[i] == val)
        {
            return i;
        }
        i++;
    }
    //return -1;
}


int main()
{
    int n;
    cin >> n;
    vector<int> pos(2*n);

    for (int i = 0; i < 2*n; i++)
    {
        cin >> pos[i];
    }
    int nums = 0, item, loc;
    int i = 0;
    while (i < 2*n){
        if (pos[i] == pos[i+1]){
            i += 2;
        }else{
            item = pos[i];
            loc = index(pos, i + 1, item);
            cout << "loc" << loc << endl;
            pos.pop_back(loc);
            pos.insert(i + 1, item);
            nums += loc - i - 1;
            i += 2;
        }
    }
    cout << nums << endl;
    return 0;
}
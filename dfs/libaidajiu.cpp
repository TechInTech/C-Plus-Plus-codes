#include <iostream>

using namespace std;
int count = 0, na = 0, nb = 0, nc = 2;
char a[20];


void dfs(int cur)
{
    if(na > 5 || nb > 10)
        return;
    if(cur == 15)
    {
        if(na == 5 && nb == 10 && a[cur-1] == 'b' && nc == 0)
        {
            for(int i = 0; i <= 14; i++)
                cout << a[i] << " ";
            cout << endl;
            count++;
        }
        return;
    }
    a[cur] = 'a';
    nc = nc * 2;
    na++;
    dfs(cur+1);
    nc =(int) nc/2;
    na--;
    a[cur]= 'b';
    nc = nc - 1;
    nb++;
    dfs(cur + 1);
    nc = nc + 1;
    nb--;
}

int main()
{
    dfs(0);
    cout << count << endl;
    return 0;
}
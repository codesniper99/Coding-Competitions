#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i,j;
        int num, result = 0;
        for(i = 0; i < n; i++)
        {
            cin >> num;
            if(i % 2 == 0)
            result = result ^ num;
        }
        if(n % 2 == 0)
        cout << "0" << endl;
        else
        cout << result << endl;
    }
    return 0;
}

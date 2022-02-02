#include <iostream>
using namespace std;
int main()
{
    
// D
// CD
// BCD
// ABCD
    int i, j, n;
    // char ch = 74;
    cout << "Enter the number" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {  
        char k='A'+n-i;
        for (j= 1; j<=i; j++)
        {
            cout<<k;
            k++;
        
        }
            
        cout<<endl;
    }

}

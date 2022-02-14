#include <iostream>
using namespace std;
int main()
{
    
    int i,j,n;
    // char ch = 74;
    cout << "Enter the number" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {  
        // for spaces
        for (j= 1; j<=i-1; j++)
        {
            cout<<"*";
        
        }
            // for  numbers
            for (j= 1; j<=n-i+1; j++)
            {
                cout<<j;
            }
            
        cout<<endl;
    }
}
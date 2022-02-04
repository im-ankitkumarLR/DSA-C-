#include <iostream>
using namespace std;
int main()
{
    
//    *
//   **
//  ***
// ****
    int i,j,n;
    // char ch = 74;
    cout << "Enter the number" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {  
        // char spaces=n-i;
        for (j= 1; j<=n-i; j++)
        {
            cout<<" ";
        
            // k++;
        }
            // for stars
            for (j= 1; j<=i; j++)
            {
                cout<<"*";
            }
            
        cout<<endl;
    }

}
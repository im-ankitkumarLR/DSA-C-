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
        // for stars
        for (j= 1; j<=n-i+1; j++)
        {
            cout<<"*";
        
            // k++;
        }
            // for spaces
            for (j= 1; j<=i-1; j++)
            {
                cout<<" ";
            }
            
        cout<<endl;
    }

}
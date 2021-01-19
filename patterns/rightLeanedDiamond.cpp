#include <iostream>

using namespace std;

int main()
{
    
    int num;
    cin >> num;
    
    for(int i=1; i<=2*num; i++){
    
        if(i==num+1)
                continue;
        for(int j=1; j<= num; j++){
            
            if(j<=i && i+j<= 2*num+1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    return 0;
}

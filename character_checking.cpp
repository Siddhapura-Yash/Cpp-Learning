#include <iostream>
using namespace std;

int main(){
    char c;
    int state;
    
    cout << "Enter character : ";
    cin >> c;
    
    state = c;
    cout << state <<endl;
    
    if(state >= 48 && state <= 57)
    {
        cout << "Charcter is numeric" << endl;
    }
    else if(state >= 65 && state <= 90)
    {
        cout << "Charcter is captial" << endl;
    }
    else if(state >= 97 && state <=122)
    {
        cout << "Character is small" << endl;
    }
    else
    {
        cout << "Character is symbolic" << endl;
    }
      
      
      
      
    // Second method 
      
       
    if(c >= '0' && c <= '1')
    {
        cout << "Numeric";
    }
    else if(c >= 'a' && c <= 'z')
    {
        cout << "Smaller";
    }
    else if(c >= 'A' && c <= 'Z')
    {
        cout << "Capital";
    }
    else
    {
        cout << "Symbolic";
    }
    
    
    
}
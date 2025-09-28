// PATTERN
// ***
// ***
// ***

// #include <iostream>
// using namespace std;

// int main()
// {   int n;
//     int i = 1;      //row
    
//     cout << "Enter number : ";
//     cin >> n;
    
//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }





// PATTERN
// 111
// 222
// 333

// #include <iostream>
// using namespace std;

// int main()
// {   int n;
//     int i = 1;
    
//     cout << "Enter number : ";
//     cin >> n;
    
//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             cout << i;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
    
// }





// 123
// 123
// 123

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
    
//     cout << "Enter number : ";
//     cin >> n;
    
//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             cout << j;
//             // cout << n - j + 1;  //using this we can print reverse like 321
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }



// 123
// 456
// 789

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int num = 1;
//     int n;
    
//     cout << "Enter number : ";
//     cin >> n;
    
//     while(i <= n)
//     {   int j = 1;
//         while(j <= n)
//         {
//             cout << num << " ";
//             num = num + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// *
// **
// ***
// ****
// *****

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
    
//     cout << "Enter number : ";
//     cin >> n;
     
//     while(i <= n)
//     {   int j = 1;
//         while(j <= i)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }





// 1
// 22
// 333
// 4444
// 55555

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
    
//     cout << "Enter number : ";
//     cin >> n;
    
//     while(i <= n)
//     {
//         int j = 1;
//         while(j <= i)
//         {
//             cout << i;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }


// 1
// 23 
// 456
// 78910

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     int num = 1;
    
//     cout << "Enter number : ";
//     cin >> n;
    
//     while(i <= n)
//     {
//         int j = 1;
//         while(j<=i)
//         {
//             cout << num << " ";
//             j = j + 1;
//             num = num + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }



// 1
// 23
// 345
// 4567

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     int num;

//     cout << "Enter number : ";
//     cin >> n;

//     while(i <= n)
//     {   num = i;
//         int j = 1;
//         while(j <= i)
//         {
//             cout << num;
//             j = j + 1;
//             num = num + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }
                                                // WITHOUT TAKING ANOTHER VARIABLE
// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;

//     cout << "Enter number : ";
//     cin >> n;

//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=i)
//         {
//             cout << i + j - 1 << " ";
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }



// 1
// 21
// 321
// 4321
// 54321

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     int num;

//     cout << "Enter number : ";
//     cin >> n;

//     while(i <= n)
//     {   int num = i;
//         int j = 1;
//         while(j <= i)
//         {
//             cout << num;
//             j = j + 1;
//             num = num - 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }


// AAA
// BBB
// CCC

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     char letter = 'A';

//     cout << "Enter number : ";
//     cin >> n;

//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             cout << letter;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//         letter = letter + 1;
//     }
// }



// ABC 
// ABC 
// ABC 

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     // char letter = 'A';
    
//     cout << "Enter number : ";
//     cin >> n;

//     while(i <= n)
//     {
//         int j = 1;
//         char letter = 'A';
//         while(j<=n)
//         {
//             cout << letter;
//             letter = letter + 1;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }


// ABCD
// EFGH
// IJKL
// MNOP

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     char letter = 'A';

//     cout << "Enter number : ";
//     cin >> n;

//     while(i <= n)
//     { 
//         int j = 1;
//         while(j<=n)
//         {
//             cout << letter;
//             j = j + 1;
//             letter = letter + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }



// ABC 
// BCD
// CDE 

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     char num = 'A';

//     cout << "Enter number : ";
//     cin >> n;

//     while(i<=n)
//     {   
//         int j = 1;
//         while(j<=n)
//         {
//             cout << num;
//             j = j + 1;
//             num = num + 1;
//         }
//         i = i + 1;
//         num = num - 2;
//         cout << endl;
//     }
// }



// 123
// 234
// 345

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;

//     cout << "Enter number : ";
//     cin >> n;

//     while(i <= n)
//     {   int num = i;
//         int j = 1;
//         while(j <= n)
//         {
//             cout << num;
//             j = j + 1;
//             num = num + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }


// A
// BB 
// CCC 

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     char letter = 'A';
//     int n;

//     cout << "Enter number : ";
//     cin >> n;

//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=i)
//         {
//             cout << letter;
//             j = j + 1;
//         }
//         letter = letter + 1;
//         i = i + 1;
//         cout << endl;
//     }
// }


// A
// BC 
// DEF 
// GHIJ

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     char letter = 'A';
//     int n;

//     cout << "Enter number : ";
//     cin >> n;

//     while(i <= n)
//     {
//         int j = 1;
//         while(j <= i)
//         {
//             cout << letter;
//             letter = letter + 1;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }




// A 
// BC
// CDE 
// DEFG 

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     char letter = 'A';
//     char temp;

//     cout << "Enter number : ";
//     cin >> n;


//     while(i <= n)
//     {   temp = letter;
//         int j = 1;
//         while(j<=i)
//         {
//          cout << temp;
//          j = j + 1;
//          temp = temp + 1;   
//         }
//         cout << endl;
//         letter = letter + 1;
//         i = i + 1;
//     }
// }



// D 
// CD 
// BCD 
// ABCD 

// #include<iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;
//     char letter = 'A';

//     cout << "Enter number : ";
//     cin >> n;

//     int count = n;

//     while(i<=n)
//     {   char start = 'A' + n - i;
//         int j = 1;
//         while(j<=i)
//         {
//             cout << start;
//             start = start + 1;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
// }



//    *
//   **
//  ***
// ****

// #include <iostream>
// using namespace std;

// int main()
// {   int i = 1;
//     int n;

//     cout << "Enter number : ";
//     cin >> n;

//     while(i <= n)
//     {   
//         //space logic
//         int space = n - i;
//         while(space)
//         {
//             cout << " ";
//             space = space - 1;
//         }

//         //star logic
//         int j = 1;
//         while(j <= i)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }



// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main()
{   int i = 1;
    int n;

    cout << "Enter number : ";
    cin >> n;
    int temp = n ;

    while(i <= n)
    {   
        while(temp)
        {
            cout << "*";
            temp = temp - 1;
        }
        cout << endl;
        temp = n - i;
        i = i + 1;
    }
}

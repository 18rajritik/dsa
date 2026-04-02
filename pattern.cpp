// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5; i++){
//         cout << i << ":";
//         for(int j=5;j>=0;j--){
//             cout << j << ",";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// TO FIND THE SIZE OF THE VARAIABLE

// #include<iostream>
// using namespace std;
// int main(){
//    float a = 5.0;
//     cout << sizeof(a) << endl;
//     return 0;
// }


// DECLARATION OF THE FUNCTION OF CONVERTING THE LOWERCASE CHARACTER TO UPPERCASE CHARACTER

// #include<iostream>
// using namespace std;
// int main(){
//     char converttoUppercase(char l);
//     return 0;
// }

// FUNCTION TO PRINT THE NAME

// #include<iostream>
// using namespace std;
//   void Name(){
//         cout << "ritik raj" << endl;
//     }
// int main(){
//    Name();
//    return 0;
// }

// FUNCTION TO FIND THE AVERAGE OF THE NUMBERS

// #include<iostream>
// using namespace std;
// int findAverage(int a, int b, int c){
//     return (a+b+c)/3;
// }
// int main(){
//     int answer = findAverage(5,10,15);
//     cout << "the average of the numbers is :" << answer << endl;
//     return 0;

// }

// PRINTING OF THE SQUARE PATTERN

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=4;i++){
//         for(int j=1;j<=4;j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// PRINTING OF THE RIGHT ANGLED TRIANGLE

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// NUMBER TRIANGLE

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// PRINTING OF THE REVERSE TRIANGLE

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=4;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//PRINTING OF THE FOLYDS TRIANGLE

// #include<iostream>
// using namespace std;
// int main(){
//     int count = 1;
//     for(int i=1;i<=10;i++){
//         for(int j=1;j<=i;j++){
//             cout << count << " ";
//             count ++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// PRINTING OF A SOLID RECTANGULAR PATTERN WHEN N=3 AND M=5
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3,m=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << i << " ";

//         }
//         cout << endl;

//         }
//     }

// diamond printing pattern

#include<iostream>
using namespace std;
int main(){
    int n=3;
        // Implement the pattern printing logic here
        for(int i=1;i<=n+1;i++){
            if(i<=(n+1)/2){
                for(int j=1;j<=(2*i-1);j++){
                    cout << "*";
                }
            }
            else if (i>(n+1)/2){
                int k =2*i-3;
                while(k>=1){
                    cout << "*";
                    k=k-2;

                }              
            
            }
            cout << endl;
            
        }
    

return 0;
}


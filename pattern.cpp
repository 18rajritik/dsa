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
#include<iostream>
using namespace std;
int findAverage(int a, int b, int c){
    return (a+b+c)/3;
}
int main(){
    int answer = findAverage(5,10,15);
    cout << "the average of the numbers is :" << answer << endl;
    return 0;

}

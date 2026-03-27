#include<iostream>
using namespace std;
void convertToUppercase(char j ){
    char ans = j - 'a'+'A';
    cout << "the uppercase character is :" << ans << endl;
};
int main(){
    convertToUppercase('t');
    return 0;
}
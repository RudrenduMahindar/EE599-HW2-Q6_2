#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    string s="A man, a plan, a canal, Panama!";
    string s1="Was it a car or a cat I saw?";
    //cout<<"before transform = "<< s <<endl;
    bool flag=solution.StringPalinCheck(s1);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    //cout<<"after transform = "<< s <<endl;
    if(flag==true)
        cout<<"palindrome"<<endl;
    else 
        cout<<"not palindrome"<<endl;   

    return EXIT_SUCCESS;
}
#include "solution.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool Solution::StringPalinCheck(string& s) { 
  
  for (int i = 0, len = s.size(); i < len; i++) 
    { 
        if (ispunct(s[i])) 
        { 
            s.erase(i--, 1); 
            len = s.size(); 
        } 
    } 
  s.erase(remove(s.begin(), s.end(), ' '), s.end());
  transform(s.begin(),s.end(),s.begin(),::tolower);  
  if (s == string(s.rbegin(), s.rend())) 
    return true;
  else
    return false;

}

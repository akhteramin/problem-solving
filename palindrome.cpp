#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word)
{
  // Please write your code here.
  int len=word.length();
  for(int i=0;i<len/2;i++){
    if(word[i]!=word[len-i-1])
      return false;
  }
  return true;
}
int main()
{
  string word;
  cin >> word;
  cout << isPalindrome(word) << endl;
}

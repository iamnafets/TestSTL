#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  string data = "The quick brown fox jumped over the lazy dog.";
  for(int x=0;x<10000000;x++)
    transform(data.begin(), data.end(), data.begin(), ::tolower);
}

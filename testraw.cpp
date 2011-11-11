#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main(){
  const char* data = "The quick brown fox jumped over the lazy dog.";
  char buf[60];
  strcpy(buf,data);

  for(int x=0;x<10000000;x++)
    for(char* it=buf;*it;it++)
      *it=tolower(*it);
}

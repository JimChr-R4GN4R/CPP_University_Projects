#include <iostream>	
#include <fstream>	

using namespace std;
		
int main(){

  int numLines = 0;
  ifstream in("file.txt"); // our file name is file.txt
  std::string unused;
  while ( std::getline(in, unused) )
    ++numLines;

  cout << numLines;
}

// https://www.cprogramming.com/challenges/count.html

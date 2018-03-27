#include <iostream>
#include <string>
#include "lib/testlib.h"

using namespace std;

int main(int argc, char** argv) {
  cout << "begin testing" << endl;

  string s1 = *test1();
  cout << s1 << endl;

  string s2 = test2();
  cout << s2 << endl;

  string s3 = *test3();
  cout << s3 << endl;

  string s4 = test4();
  cout << s4 << endl;
  
  cout << "end testing" << endl;

  return 0;
}

#include <iostream>
#include <string>
#include "lib/testlib.h"

using namespace std;

int main(int argc, char** argv) {
  cout << "hello" << endl;

  string s1 = *test1();
  cout << s1 << endl;

  return 0;
}

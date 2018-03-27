#include <iostream>
#include <string>
#include <time.h>
#include "lib/testlib.h"

using namespace std;

int main(int argc, char** argv) {
  cout << "begin testing" << endl;
  srand (time(NULL));

  string s1 = *test1();
  cout << s1 << endl;

  string s2 = test2();
  cout << s2 << endl;

  string s3 = *test3();
  cout << s3 << endl;

  string s4 = test4();
  cout << s4 << endl;
  
  string s5 = test5();
  cout << s5 << endl;

  int index = 3;
  string s6 = test6(index);
  cout << s6 << endl;
  
  index = rand()%8;
  string s7 = test7(index);
  cout << s7 << endl;
  
  string s8 = test8(index%5);
  cout << s8 << endl;

  cout << test9() << endl;

  cout << test10(rand()) << endl;

  cout << test11(1) << endl;

  cout << test12() << endl;

  cout << test13() << endl;

  cout << test14() << endl;
  
  cout << test13() << endl;

  cout << "end testing" << endl;

  return 0;
}

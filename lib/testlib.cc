#include "lib/testlib.h"
#include "lib/test.pb.h"

string *test1() {
	string s = "test1";
	return &s;
}

string test2() {
	demo::TestMsg msg;
	msg.set_str("test2");
	return *msg.mutable_str();
}

demo::TestMsg msg_test3;
const string *test3() {
	msg_test3.set_str("test3");
	auto &r = msg_test3.str();
	return &r;
}

string test4() {
	vector<char> v;
	v.push_back('1');
	char *s = "test4";
	memcpy(&v[0], s, strlen(s));
	string str(v.begin(), v.end());
	return str;
}

string test5() {
	vector<char> v;
	v.push_back('x');
	v.push_back('x');
	v.push_back('x');
	v.push_back('x');
	v.push_back('x');
	char *s = "test5";
	memcpy(&v[0], s, strlen(s));
	string str(v.begin(), v.end());
	return str;
}

vector<string> v_str;
string test6(int index) {
	v_str.push_back("xxx");
	v_str.push_back("yyy");
	v_str.push_back("zzz");
	v_str.push_back("test6");
	return v_str[index];
}

string test7(int index) {
	v_str.push_back("test7");
	return v_str[index];
}

vector<int> v_index;
string test8(int index) {
	v_index.push_back(1);
	v_index.push_back(2);
	v_index.push_back(4);
	v_index.push_back(3);
	v_index.push_back(0);
	return v_str[v_index[index]];
}

string test9() {
	auto *p = &v_str[0];
	auto *q = &v_str[1];
	p = q + 1;
	memcpy(p, "test9", strlen("test9"));
	return *p;
}

string test10(int i) {
	int j=1;
	while(i>0){
		j = i*5+3;
		if(j==43)
			return v_str[90];
		i--;
	}
	return "test10";
}

string test11(int i) {
	int j=1;
	while(i>0){
		j = i*5+3;
		if(j==43)
			return v_str[90];
		i--;
	}
	return "test11";
}

string test12() {
	vector<int> v;
	v.push_back(1);
	auto &item = v.back();
	v.push_back(2);
	item = v.back();
	return "test12";
}

class mbzylqn {
public:
    mbzylqn();
    int a;
    int b;
    int c;
};

mbzylqn::mbzylqn(){
    memset(&a,
           1,
           static_cast<size_t>(
               reinterpret_cast<char*>(&b) -
                   reinterpret_cast<char*>(&a) +
                   sizeof(b))
          );
}

string test13(){
    mbzylqn yy;
    return v_str[yy.a%0xFF];
}

string s_test14;
void foo(){
	for(int i=0; i<1000; i++)
		s_test14 = "test14";
}
void bar(int x){
	if(x%2==0)
		for(int i=0; i<1000; i++)
			s_test14 = "test14_r";
}
string test14() {
	thread a(foo);
	thread b(bar, rand());
	a.join();
	b.join();
	return s_test14;
}

void initVector(vector<demo::LaneWaypoint> vec, int num) {
  for (int i = 0; i < num; i++) {
    if (i != num-1) {
      demo::LaneWaypoint lane;
      lane.set_name("lane");
      lane.set_id("id");
      vec.push_back(lane);
    } else {
      vec.push_back(demo::LaneWaypoint()); 
    }
  }
}

string test15() {
  vector<demo::LaneWaypoint> vec;
  initVector(vec, 10);	
  demo::LaneWaypoint lane = vec.back(); 
  cout << lane.id() << endl; 
  return "test13";
}


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
	char *s = "test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4test4";
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

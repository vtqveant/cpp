#include <complex>
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // 'find' is defined here

using namespace std;


template<class C, class T> int my_count(const C& v, T val)
{
	typename C::const_iterator i = find(v.begin(), v.end(), val);
	int n =0;

	while (i != v.end()) {
		++n;
		++i; // пропустить только что найденный элемент
		i = find(i, v.end(), val);
	}
	return n;
}

int main() {
	list<complex<double> > lc;
	lc.push_front(complex<double>(1, 1));
	lc.push_front(complex<double>(1, 2));
	lc.push_front(complex<double>(1, 3));

	vector<string> vs = vector<string>(2);
	vs[0] = "Laertes";
    vs[1] = "Aeneus";
    vs.push_back("Chrysippus"); // лучше использовать push_back() для векторов, чем realloc() для встроенных массивов
    cout << vs.size() << endl << endl;

	string s = "abc xyz";

	cout << "user-defined count" << endl;
	cout << my_count(lc, complex<double>(1, 3)) << endl;
	cout << my_count(vs, "Chrysippus") << endl;
	cout << my_count(s, 'x') << endl;
	cout << endl;
	cout << "std::count" << endl;
	cout << count(lc.begin(), lc.end(), complex<double>(1, 3)) << endl;
}
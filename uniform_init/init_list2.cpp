#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

template <typename T>
void print_vec(const vector<T>& vec) {
  cout << "[";
  for (const auto& e : vec) {
    cout << e << " ";
  }
  cout << "]" << endl;
}

template <typename K, typename V>
void print_map(const map<K, V>& m) {
  for (const auto& kv : m) {
    cout << kv.first << " : " << kv.second << endl;
  }
}

int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  print_vec(v);

  cout << "----------------------" << endl;
  map<string, int> m = {
    {"abc", 1}, {"hi", 3}, {"hello", 5}, {"c++", 2}, {"java", 6}};
  print_map(m);
}
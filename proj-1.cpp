#include <iostream>
#include <ctime>
#include <queue>
#include <deque>
#include <limits>
#include "aqueue.hpp"
#include "LLQueue.hpp"
using namespace std;

inline double mark_diff(const clock_t &c1, const clock_t &c2) {
  double d = c2 - c1;
  d /= CLOCKS_PER_SEC / 1000;
  return d;
}

int main() {
  int TEST_SIZE = numeric_limits<int>::max() / 100;

  AQueue<int> aq(TEST_SIZE);
  cout << "Testing insertion of " << TEST_SIZE << " elements into AQueue." << endl;
  clock_t start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    aq.enqueue(i);
  }
  clock_t end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  LLQueue ll;
  cout << "Testing insertion of " << TEST_SIZE << " elements into LLQueue." << endl;
  start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    ll.enqueue(i);
  }
  end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  cout << "Testing insertion of " << TEST_SIZE << " elements into C++ std queue." << endl;
  queue<int> q;
  start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    q.push(i);
  }
  end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  cout << "Testing insertion of " << TEST_SIZE << " elements into C++ std deque." << endl;
  deque<int> d;
  start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    d.push_back(i);
  }
  end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  int num;
  cout << "Testing removal of " << TEST_SIZE << " elements from AQueue." << endl;
  start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    aq.dequeue(num);
  }
  end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  cout << "Testing removal of " << TEST_SIZE << " elements from LLQueue." << endl;
  start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    ll.dequeue(num);
  }
  end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  cout << "Testing removal of " << TEST_SIZE << " elements from C++ std queue." << endl;
  start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    num = q.front();
    q.pop();
  }
  end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  cout << "Testing removal of " << TEST_SIZE << " elements from C++ std deque." << endl;
  start = clock();
  for (int i = 0; i < TEST_SIZE; ++i) {
    num = d.front();
    d.pop_front();
  }
  end = clock();
  cout << mark_diff(start, end) << " ms" << endl;

  return 0;
}

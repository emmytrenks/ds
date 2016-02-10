#include "test.hpp"


void testResizeEasy(){
  AQueue<int> q(3);
  int i = 0;
  while (i < 6)
  {
      q.enqueue(i);
      ++i;
  }
  while (i < 6)
  {
      assert(q[i] == i);
      ++i;
  }

}

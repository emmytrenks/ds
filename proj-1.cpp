#include <iostream>
#include "aqueue.hpp"
using namespace std;

int main() {
  cout << "hellohello" << endl;
<<<<<<< Updated upstream
=======
  AQueue<int> q(5);

  for(int i = 1; i < 6; i++) {
      q.enqueue(i);
      cout << "start: " << q.start << "\t count: " << q.count << endl;
  }

  for(int i = 0; i < 5; i++) {
      cout << q[i] << endl;
  }

  cout << endl;
  
>>>>>>> Stashed changes
  return 0;
}

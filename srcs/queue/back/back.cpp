// queue::back
#include <iostream>       // std::cout
#include <queue>          // ft::queue
#include "queue.hpp"

int main ()
{
  ft::queue<int> myqueue;

  myqueue.push(12);
  myqueue.push(75);   // this is now the back

  myqueue.back() -= myqueue.front();

  std::cout << "myqueue.back() is now " << myqueue.back() << '\n';

  return 0;
}

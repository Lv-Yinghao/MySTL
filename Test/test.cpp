#ifdef _MSC_VER
#define _SCL_SECURE_NO_WARNINGS
#endif

#if defined(_MSC_VER) && defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h>
#include <crtdbg.h>
#endif // check memory leaks

#include "algorithm_performance_test.h"
#include "algorithm_test.h"
#include "vector_test.h"
#include "list_test.h"
#include "deque_test.h"
#include "unordered_map_test.h"

int main()
{
  std::vector<int> v;
  using namespace mystl::test;

  std::cout.sync_with_stdio(false);

  RUN_ALL_TESTS();
  algorithm_performance_test::algorithm_performance_test();
  vector_test::vector_test();
  list_test::list_test();
  deque_test::deque_test();
  unordered_map_test::unordered_map_test();

#if defined(_MSC_VER) && defined(_DEBUG)
  _CrtDumpMemoryLeaks();
#endif // check memory leaks

}

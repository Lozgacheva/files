#include <iostream>
//using namespace std;

//Compiler version g++ 6.3.0




template<typename type>
size_t hash_summarizer(type *array)
{
  size_t super_hash = 0;
  std::hash<type> hash;
  for (int i=0; i < (sizeof(array)/sizeof(*array)); ++i)
  {
    super_hash+=((size_t)(0.15*hash(array[i])));
  }
  return hash(super_hash);
  
}



int main()
{
  
  int a[4] = {1,2,3,4};
  std::cout << hash_summarizer(a);
}
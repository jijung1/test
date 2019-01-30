#include <iostream>
using namespace std;

template <class T>
  class TestClass{

  public:
      TestClass(T input)
      {
        cout << input << " is not a char!" << endl;
      }
};

template<>  //template specialization for datatype char
  class TestClass<char>{
    public:
        TestClass(char input)
        {
          cout << input << " is indeed a char!" << endl;
        }
  };

int main()
{
  TestClass<int> testobject(1.1);
  TestClass<char> testobject2('a');
  getchar();
  return 0;
}

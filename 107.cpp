#include<iostream>
template < typename t>

   t func(t a, t b)
    {
        return a+b;
    }


int main()
{
    
  std::cout<< func (10,2)<<std::endl;
   std::cout<< func(-2,-4)<<std::endl;
   std::cout<<func(2.8,9.9)<<std::endl;

    return 0;
}
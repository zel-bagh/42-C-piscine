#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<stack>
template<typename _Tp, typename _Container = std::deque<_Tp> > class MutantStack;

template<typename _Tp, typename _Container>
class MutantStack : public std::stack<_Tp, _Container>
{
    public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(const MutantStack& src)
    {
        *this = src;
    }
    MutantStack&  operator=(const MutantStack& src)
    {
        this->c = src.c;
    }
    typedef typename _Container::iterator iterator;
    iterator begin(void)
    {
        return (this->c.begin());
    }
    iterator end(void)
    {
        return (this->c.end());
    }
};

#endif
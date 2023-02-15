#include "Span.hpp"

Span::Span(unsigned int N) : _max(N)
{
    std::cout << "unsigned int constructor was called" << std::endl;
    Added_elements = 0;
}
Span::Span(const Span &obj)
{
    std::cout << "copy constructor was called" << std::endl;
    *this = obj;
}
Span& Span::operator=(const Span &obj)
{
    std::cout << "copy assignement operator constructor was called" << std::endl;
    tab = obj.tab;
    _max = obj._max;
    Added_elements = obj.Added_elements;
    return (*this);
}
Span::~Span()
{
    std::cout << "destructor was called" << std::endl;
}
void	Span::randomFill(void)
{
	std::cout << "randomFill function called" << std::endl;
    int i = -1;
    srand(time(0));
    int l = _max - Added_elements;
	while (++i < l)
		addNumber(rand());
}
void    Span::addNumber(int i)
{
    if (Added_elements == _max)
        throw std::exception();
    tab.push_back(i);
    Added_elements++;
}
int Span::shortestSpan(void)
{
    if (Added_elements <= 1)
    {
        std::cout << "no span can be found" << std::endl;
        throw std::exception();
    }
    std::sort(tab.begin(), tab.end());
    std::vector<int>::iterator it = tab.begin();
    std::vector<int>::iterator itl = tab.end();
    int distance;
    int result;
    int i = -1;
    while (it + ++i + 1 != itl)
    {
        distance = *(it + i + 1) - *(it + i);
        if (i == 0 || result > distance)
            result = distance;
    }
    return (result);
}
int Span::longestSpan(void)
{
    if (Added_elements <= 1)
    {
        std::cout << "no span can be found" << std::endl;
        throw std::exception();
    }
    return (*(std::max_element(tab.begin(), tab.end())) - *(std::min_element(tab.begin(), tab.end())));
}
void	Span::addByIteratorRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>	tmp(begin, end);
    std::cout << "addByIteratorRange function called" << std::endl;
    if (tmp.size() == 0)
    {
        std::cout << "nothing to be added" << std::endl;
        return ;
    }
	if ((int)tmp.size() > (_max - Added_elements))
		throw std::exception();
	copy(tmp.begin(), tmp.end(), add_space(tmp.size()));
}
std::vector<int>::iterator Span::add_space(int k)
{
    int i = -1;
    while (++i < k)
        tab.push_back(0);
    Added_elements += k;
    return (tab.end() - k);
}
void    Span::show_elements(void)
{
    int size = tab.size();
    if (size)
    {
        int i = -1;
        while(++i < size)
            std::cout << tab[i] << std::endl;
        return ;
    }
    std::cout << "no element in span" << std::endl;
}


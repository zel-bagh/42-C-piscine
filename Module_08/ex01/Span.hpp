#ifndef Span_HPP
#define Span_HPP
#include<exception>
#include<vector>
#include<iostream>
#include<time.h>

class Span
{
    private:
        int _max;
        std::vector<int>   tab;
        int Added_elements;
    public:
        Span(unsigned int N = 1);
        Span(const Span &obj);
        Span& operator=(const Span &obj);
        ~Span();
        void	randomFill(void);
        void    addNumber(int i);
        int shortestSpan(void);
        int longestSpan(void);
        void	addByIteratorRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void    show_elements(void);
        std::vector<int>::iterator add_space(int k);
};

#endif
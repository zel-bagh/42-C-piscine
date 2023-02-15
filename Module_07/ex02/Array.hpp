#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template<typename T>
class Array
{
    private:
        int _size;
        T   *tab;
    public:
        Array(void) : _size(0), tab(NULL)
        {
            std::cout << "empty constructor was called" << std::endl;
        }
        Array(unsigned int s) : _size(s)
        {
            if (_size < 0)
                throw std::overflow_error("error: invalid _size");
            std::cout << "unsigned int constructor was called" << std::endl;
            if (_size == 0)
                tab = NULL;
            else
                tab = new T[_size];
        }
        Array(const Array &obj) : _size(obj._size)
        {
            std::cout << "copy constructor was called" << std::endl;
            tab = NULL;
            _size = obj._size;
            if (!_size)
                return ;
            tab = new T[_size];
            int i = -1;
            while (++i < _size)
               tab[i] = obj.tab[i];
        }
        Array& operator=(const Array &obj)
        {
            std::cout << "copy assignement operator constructor was called" << std::endl;
            if (this == &obj)
                return (*this);
            if (_size && (_size != obj._size))
            {
                delete tab;
                tab = NULL;
            }
            if(obj._size)
            {
                if (obj._size != _size)
                    tab = new T[obj._size];
                int i = -1;
                while (++i < obj._size)
                    tab[i] = obj.tab[i];
                _size = obj._size;
            }
            return (*this);
        }
        ~Array()
        {
            std::cout << "destructor was called" << std::endl;
            if (_size)
               delete [] tab;
        }
        T &operator[](int index) const
        {
            if (index < 0 || index >= _size)
                throw std::overflow_error("error: index out of bound");
            return (tab[index]);
        }
        int size(void) const
        {
            return (_size);
        }
};

#endif
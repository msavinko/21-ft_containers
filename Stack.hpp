#pragma once
#include "Vector.hpp"

namespace ft {

    template <class T, class Container = ft::vector<T> > class stack {
    public:
        typedef T           value_type;
        typedef Container   container_type;
        typedef typename    Container::size_type size_type;

    protected:
        container_type c;

    public:

        /// CONSTRUCTOR
        explicit stack(const container_type& cntr = container_type()) : c(cntr) {}
        stack(const stack& other) : c(other.c) {}

        /// MEMBER FUNCTIONS
        bool empty() const {
            return c.empty();
        }

        size_type size() const {
            return c.size();
        }

        value_type& top() {
            return c.back();
        }

        const value_type& top() const {
            return c.back();
        }

        void push (const value_type& val) {
            c.push_back(val);
        }

        void pop() {
            c.pop_back();
        }

        /// RELATIONAL OPERATORS
        friend bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
            return lhs.c == rhs.c;
        }

        friend bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
            return lhs.c != rhs.c;
        }

        friend bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
            return lhs.c < rhs.c;
        }

        friend bool operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
            return lhs.c <= rhs.c;
        }

        friend bool operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
            return lhs.c > rhs.c;
        }

        friend bool operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
            return lhs.c >= rhs.c;
        }
    };
}
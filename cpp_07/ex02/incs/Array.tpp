// #ifndef ARRAY_TPP
// #define ARRAY_TPP

#include <iostream>

template <typename T>
class Array{
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array(){
			this->_array = new T();
			this->_size = 0;
		};
		Array(unsigned int n){
			this->_array = new T[n];
			this->_size = n;
		};
		Array(const Array& src){
			this->_array = new T[src._size];
			this->_size = src._size;
			for (unsigned int i = 0; i < src._size; i++){
				this->_array[i] = src._array[i];
			}
		};
		Array& operator=(const Array& src){
			delete [](this->_array);
			this->_array = new T[src._size];
			this->_size = src._size;
			for (unsigned int i = 0; i < src._size; i++){
				this->_array[i] = src._array[i];
			}
			return (*this);
		};
		~Array(){
			delete []this->_array;
		};

		T& operator[](unsigned int i) const{
			if (i < this->_size)
				return (this->_array[i]);
			throw (OutOfBoundsException());
		};

		unsigned int	size(){
			return (this->_size);
		};

		class OutOfBoundsException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Out of bounds exception");
				}
		};
};

template < typename T >
std::ostream& operator<<( std::ostream& out, Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr.size(); i++ )
        out << arr[i] << " ";
    return out;
}

// #endif
class Fixed {
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &aff);
	~Fixed();

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int	toInt(void) const;

	int	operator>(const Fixed &bit) const;
	int	operator<(const Fixed &bit) const;
	int	operator>=(const Fixed &bit) const;
	int	operator<=(const Fixed &bit) const;
	int	operator==(const Fixed &bit) const;
	int	operator!=(const Fixed &bit) const;

	Fixed	operator+(const Fixed &i) const;
	Fixed	operator-(const Fixed &i) const;
	Fixed	operator*(const Fixed &i) const;
	Fixed	operator/(const Fixed &i) const;

	Fixed&	operator++(void);
	Fixed	operator++(int);

	static Fixed& min(Fixed &n1, Fixed &n2);
	static const Fixed& min(const Fixed &n1, const Fixed &n2);
	static Fixed& max(Fixed &n1, Fixed &n2);
	static const Fixed& max(const Fixed &n1, const Fixed &n2);


private:
	int	_value;
	static const int	_bits = 8;
};

std::ostream & operator<<(std::ostream &flux, Fixed const &i);

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

private:
	int	_value;
	static const int	_bits = 8;
};

std::ostream & operator<<(std::ostream &flux, Fixed const &i);

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &aff);
	~Fixed();

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	_value;
	static const int	_bits = 8;
};

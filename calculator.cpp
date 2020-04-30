/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   calculator.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/27 10:19:45 by pacovali      #+#    #+#                 */
/*   Updated: 2020/04/30 12:22:38 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

using namespace std;

int		common_divisor(int a, int b) {
	if (!a || !b) {
		return (0);
	}
	a = abs(a);
	b = abs(b);
	if (a == b) {
		return (a);
	}
	while (a && b) {
		if (a > b) {
			a %= b;
		} else {
			b %= a;
		}
	}
	return (a + b);
}

class Rational {
public:
	Rational() {
		num = 0;
		den = 1;
	}
	Rational(int numerator, int denominator){
		if (numerator == 0) {
			num = 0;
			den = 1;
		} else {
			if (!denominator) {
				throw invalid_argument("Invalid argument");
			}
			int		common = common_divisor(numerator, denominator);
			int		is_neg = ((numerator < 0 && denominator > 0) ||
							  (numerator > 0 && denominator < 0)) ? -1 : 1;
			num = abs(numerator) / common * is_neg;
			den = abs(denominator) / common;
		}
	}

	int Numerator() const {
		return (num);
	}
	int Denominator() const {
		return (den);
	}
	
	Rational operator+(const Rational& rhs) {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		int c_den = den * rhs.den;
		return (Rational(l_num + r_num, c_den));
	}
	Rational operator-(const Rational& rhs) {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		int c_den = den * rhs.den;
		return (Rational(l_num - r_num, c_den));
	}
	Rational operator*(const Rational& rhs) {
		return (Rational(num * rhs.num, den * rhs.den));
	}
	Rational operator/(const Rational& rhs) {
		if (!rhs.Numerator()) {
			throw domain_error("Division by zero");
		}
		return (Rational(num * rhs.den, den * rhs.num));
	}
	bool operator==(const Rational& rhs) const {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		return (l_num == r_num);
	}
	bool operator!=(const Rational& rhs) const {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		return (l_num != r_num);
	}
	bool operator>(const Rational& rhs) const {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		return (l_num > r_num);
	}
	bool operator<(const Rational& rhs) const {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		return (l_num < r_num);
	}
	bool operator>=(const Rational& rhs) const {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		return (l_num >= r_num);
	}
	bool operator<=(const Rational& rhs) const {
		int l_num = num * rhs.den;
		int	r_num = rhs.num * den;
		return (l_num <= r_num);
	}
	friend istream& operator>>(istream& stream, Rational& rhs) {
		stream >> rhs.num;
        if (cin.peek() != '/') {
            throw runtime_error("Invalid argument");
        }
		stream.ignore(1);
		stream >> rhs.den;
		return (stream);
	}
	friend ostream& operator<<(ostream& stream, const Rational& rhs)
	{
		stream << rhs.num << '/' << rhs.den;
		return (stream);
	}
private:
	int		num;
	int		den;
};

void		skip_character(char ch) {
	if (cin.peek() != ch) {
		throw runtime_error("Invalid argument");
	}
	cin.ignore(1);
}

Rational	get_rational(void) {
	int			n, d;
	cin >> n;
	skip_character('/');
	cin >> d;
	return (Rational(n, d));
}

char		get_operation(void) {
	char		op;
	
	skip_character(' ');
	cin >> op;
	if (op != '-' && op != '+' && op != '*' && op != '/') {
		throw runtime_error("Invalid argument");
	}
	skip_character(' ');
	return (op);
}

int main() {
	while (1) {
		try {
			Rational	a;
			cin >> a;
			char		op = get_operation();
			Rational	b = get_rational();
			Rational	c;
			if (op == '-') {
				c = a - b;
			} else if (op == '+') {
				c = a + b;
			} else if (op == '*') {
				c = a * b;
			} else {
				c = a / b;
			}
			cout << c << endl;
		} catch (const exception &e) {
			cout << e.what() << endl;
		}
	}
   return 0;
}

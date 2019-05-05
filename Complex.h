#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
private:
	int x;
	int y;
public:
	Complex();
	Complex(int re, int im) : x(re), y(im) {};
	Complex(const Complex &obj);
	void mod();
	void output();
	~Complex();
};

#endif // COMPLEX_H_INCLUDED

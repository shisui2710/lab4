#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector
{
public:
	int x;
	int y;
	Vector();
	Vector(int i, int j) : x(i), y(j) {};
	Vector(const Vector &obj);
	void output();
	void mod();
	void sum(Vector v1, Vector v2);
	void dif(Vector v1, Vector v2);
	~Vector();
};

#endif // VECTOR_H_INCLUDED

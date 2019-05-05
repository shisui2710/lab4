#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

class Child
{
private:
	char *name = new char[15];
	char *surname = new char[15];
	int age;
public:
	Child(char *n, char *s, int a) : name(n), surname(s), age(a) {};
	Child(const Child &obj);
	void output();
	~Child();
};

#endif // CHILD_H_INCLUDED

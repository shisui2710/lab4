#ifndef TILES_H_INCLUDED
#define TILES_H_INCLUDED

class Tiles
{
public:
    char *brand = new char[20];
	int size_h, size_w, price;
    Tiles(char *b, int h, int w, int p) : brand(b), size_h(h), size_w(w), price(p) {};
	void getData();
	~Tiles();
};

#endif // TILES_H_INCLUDED

#include "InputOutputClass.h"

class Body {
public:
	virtual double GetArea()const = 0;
	virtual double GetVolume()const = 0;
	virtual char GetId()const = 0;
	virtual void SetCharacteristic(int k) = 0;
	virtual ~Body() {};
};

class Parallelepiped : public Body 
{
public:

	Parallelepiped() : ID('P') {}

	void SetCharacteristic(int k)
	{
		_height = _io.InputHeight(k);
		_width = _io.InputWidth(k);
		_length = _io.InputLength(k);
	}

	double GetArea()const
	{
		return 2 * _length*_width + 2 * _length*_height + 2 * _width*_height;
	}

	double GetVolume()const
	{
		return _length*_width*_height;
	}
	
	char GetId()const
	{
		return ID;
	}

private:
	char ID;
	double _height;
	double _width;
	double _length;
	InputOutputClass _io;
};

class Cone : public Body {
public:

	Cone() : ID('C') {}

	void SetCharacteristic(int k)
	{
		_height = _io.InputHeight(k);
		_r = _io.InputRadius(k);
	}

	double GetArea()const
	{
		return 2 * pi*_r*(_height + _r);
	}

	double GetVolume()const
	{
		return (1 / 3 * pi *_r*_r * _height);
	}
	
	char GetId()const
	{
		return ID;
	}

private:
	char ID;
	const double pi = 3.141592;
	double _r;
	double _height;
	InputOutputClass _io;
};

class Sphere : public Body {
public:

	Sphere() : ID('S') {}

	void SetCharacteristic(int k)
	{
		_r = _io.InputRadius(k);
	}

	double GetArea()const
	{
		return 4 * pi*_r*_r;
	}

	double GetVolume()const
	{
		return 4 / 3 * pi*_r*_r*_r;
	}

	char GetId()const
	{
		return ID;
	}

private:
	char ID;
	const double pi = 3.141592;
	double _r;
	InputOutputClass _io;
};

class Pyramide : public Body { //правильная четырехугорльная пирамида
public:

	Pyramide() : ID('R') {}

	void SetCharacteristic(int k)
	{
		_height = _io.InputHeight(k);
		_width = _io.InputWidth(k);
	}

	double GetArea()const
	{
		return (_width * _width + (_height * _height + _width * _width / 4) * _width * 2);
	}

	double GetVolume()const
	{
		return (1 / 3 * _width * _width * _height);
	}

	char GetId()const
	{
		return ID;
	}

private:
	char ID;
	double _width;
	double _height;
	InputOutputClass _io;
};
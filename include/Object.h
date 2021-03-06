#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "Utilities.h"

class Object
{
public:
	Object(int x, int indexToPic);
	~Object() = default;
	virtual bool ifFull()const;
	virtual void setFull(bool x);
	virtual int getVertex()const { return m_myVertexNumber; };
	virtual void setSprite(const sf::Sprite& picture);
	void printObject(sf::RenderWindow& window)const ; 
	virtual void setLocation(int x, int y);
	virtual bool rotation(const float direction) = 0;
	virtual void colorObject();
	virtual void intiStruct(int ) = 0;
	virtual void colorSprite();
	virtual Position getPosition()const = 0;
	virtual void updateCurrentBits(int rotation) = 0;

protected:
	int m_myVertexNumber;
	sf::Sprite m_objectPng;
	sf::Sprite m_objectPngFull;
	bool m_full;

private:
	
};

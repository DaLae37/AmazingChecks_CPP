#pragma once
#include <Windows.h>
#include <iostream>
#include "Mouse.h"
#define MAP_SIZE 8
using namespace std;
enum
{
	Black,
	DarkBlue,
	DarkGreen,
	DarkSkyBlue,
	DarkRed,
	DarkViolet,
	DarkYellow,
	Gray,
	DarkGray,
	Blue,
	Green,
	SkyBlue,
	Red,
	Violet,
	Yellow,
	White
};
class gameTool
{
public:
	gameTool();
	void setPos(int x, int y);
	void setColor(int color, int bgcolor);
	void whiteTurn();
	void blackTurn();
	void drawMap();
	void exdrawMap();
	void clearUnder();
};


/*This source code copyrighted by Lazy Foo' Productions (2004-2015)
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, and strings
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

bool checkCollusionV2(SDL_Rect& A, SDL_Rect& B)
{
	if ((B.x >= A.x && B.x <= A.x + A.w) && (B.y >= A.y && B.y <= A.y + A.h))
	{
		return true;
	}
	else if ((B.x + B.w >= A.x && B.x + B.w <= A.x + A.w) && (B.y >= A.y && B.y <= A.y + A.h))
	{
		return true;
	}
	else if ((B.x >= A.x && B.x <= A.x + A.w) && (B.y + B.h >= A.y && B.y + B.h <= A.y + A.h))
	{
		return true;
	}
	else if ((B.x + B.w >= A.x && B.x + B.w <= A.x + A.w) && (B.y + B.h >= A.y && B.y + B.h <= A.y + A.h))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(int ,char*[])
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* gWindow = nullptr;
	SDL_Renderer* gRenderer = nullptr;
	SDL_Rect gRect = { 10, 100, 50, 100 };
	SDL_Rect mRect = { 0, 0, 5, 5 };
	SDL_Point sPos;
	SDL_Point ePos;
	SDL_Point cPos;
	SDL_Event e;
	int Mx, My;
	bool quit = 0;
	constexpr int a = 0;
	cout << a << endl;
	return 0;
}
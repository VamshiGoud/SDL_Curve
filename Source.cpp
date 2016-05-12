//#include <SDL.h>
//#include <SDL_image.h>
//#include <SDL_ttf.h>
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <sstream>
//using namespace std;
//
//
//int main(int argc, char* args[])
//{
//	SDL_Init(SDL_INIT_EVERYTHING);
//	SDL_Window* gWindow = nullptr;
//	stringstream sst;
//	sst << "Hello" << endl << "Bitch" << endl;
//	string x = sst.str();
//	SDL_Color tC = {0,0,0,255};
//	//gWindow = SDL_CreateWindow("Hello!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,500,500,SDL_WINDOW_SHOWN);
//
//	gWindow = SDL_CreateWindow("Hello", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,600,600,SDL_WINDOW_SHOWN);
//	SDL_Renderer* gRender = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
//	
//	TTF_Font *gFont = TTF_OpenFont("NinjaLine.ttf",28);
//	SDL_Surface* TextSurf = TTF_RenderText_Solid(gFont,x.c_str(),tC);
//	SDL_Surface* windSurface = SDL_GetWindowSurface(gWindow);
//	SDL_Texture* gText = SDL_CreateTextureFromSurface(gRender,TextSurf);
//	
//
//	SDL_Point points;
//	SDL_Event e;
//
//	bool quit = false;
//	while (!quit)
//	{
//		
//		while (SDL_PollEvent(&e) != 0)
//		{
//			if (e.type == SDL_QUIT)
//			{
//				quit = true;
//			}
//		}
//		
//		SDL_SetRenderDrawColor(gRender,0xff,0,0xff,0xff);
//		SDL_RenderClear(gRender);
//		SDL_RenderCopy(gRender,gText,NULL,NULL);
//		SDL_RenderPresent(gRender);
//	}
//	SDL_Quit();
//	cout << "Good bye!" << endl;
//	return 0;
//}


#include "SDL.h"

#include <iostream>

int main(int args, char* argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	// creating a window
	SDL_Window* window = SDL_CreateWindow("snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 500, SDL_WINDOW_SHOWN);
	SDL_SetWindowFullscreen(window, 0);
	// creating a renderer
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	
	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_Delay(5000);

	SDL_Quit();
	return 0;
}
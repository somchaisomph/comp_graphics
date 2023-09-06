#include "raylib.h"
#include "raymath.h"

#if defined(PLATFORM_WEB)
   #include <emscripten/emscripten.h>
#endif   

/* Global Variables Declarion */
/* Some predefines  */
const int SCR_WIDTH = 800;
const int SCR_HEIGHT = 600;
const float cx = (float)(SCR_WIDTH/2);
const float cy = (float)(SCR_HEIGHT/2);
const int FPS = 60;
const char *title = "Hello World";

/* Custom Variable Declaration section  */


/* ******************************** */
/* Module Functions Declaration section */

void setup(); /* To initialize every thing */
void loop(); /* Program loop */
void update(); /* To update variables  */ 
void draw(); /* To draw a frame */
void unload(); /* To unload all variables */
/* ******************************** */
void setup(){
	/* TODO : initialize all variables */
	
}

void loop(){
	while(!WindowShouldClose()){
		/* Implement algorithm */
		update();
		
		/* ********************** */		
		ClearBackground(WHITE); /* clear screen */
		BeginDrawing();
			/* Draw what you want on screen */
			draw();
			
		EndDrawing();
	}
	
}

void draw(){
	/* TODO : draw a frame */
}

void update(){
	/* TODO : to update variables*/
}

void unload(){
	/* TODO : unload all dynamic loaded data */
}

void UpdateDrawFrame(){
	/* Webassembly frame work */
	update();
	draw();
}

/* Main entry point */
int main(void){
	setup();
	InitWindow(SCR_WIDTH,SCR_HEIGHT,title);
	#if defined(PLATFORM_WEB)
		emscripten_set_main_loop(UpdateDrawFrame, FPS, 1);
	#else
		SetTargetFPS(FPS);
		loop();	
	#endif
	
	unload();
	CloseWindow();
	return 0;
}

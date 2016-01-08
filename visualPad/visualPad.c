#include <genesis.h>
#include "visualPad.h"
#include "gfx.h"

void visualPadInit(Sprite *sprites, s16 x, s16 y){
	SPR_initSprite((Sprite*)&sprites[0], (SpriteDefinition*)&visualpadpad_sprite, x, y, TILE_ATTR(PAL3, FALSE, FALSE, FALSE));
	SPR_initSprite((Sprite*)&sprites[1], (SpriteDefinition*)&visualpadbuttona_sprite, x + 50, y + 10, TILE_ATTR(PAL3, FALSE, FALSE, FALSE));
	SPR_initSprite((Sprite*)&sprites[2], (SpriteDefinition*)&visualpadbuttonb_sprite, x + 70, y + 06, TILE_ATTR(PAL3, FALSE, FALSE, FALSE));
	SPR_initSprite((Sprite*)&sprites[3], (SpriteDefinition*)&visualpadbuttonc_sprite, x + 90, y + 02, TILE_ATTR(PAL3, FALSE, FALSE, FALSE));
	SPR_setAnim((Sprite*)&sprites[0], 0);
	SPR_setAnim((Sprite*)&sprites[1], 0);
	SPR_setAnim((Sprite*)&sprites[2], 0);
	SPR_setAnim((Sprite*)&sprites[3], 0);
}

void visualPadSetPosition(Sprite *sprites, s16 x, s16 y){
	SPR_setPosition((Sprite*)&sprites[0], x, y);
	SPR_setPosition((Sprite*)&sprites[1], x + 50, y + 10);
	SPR_setPosition((Sprite*)&sprites[2], x + 70, y + 06);
	SPR_setPosition((Sprite*)&sprites[3], x + 90, y + 02);
}


void visualPadUpdate(Sprite *sprites){
	if(JOY_readJoypad(JOY_1) == BUTTON_UP){
		SPR_setAnim((Sprite*)&sprites[0],1);
	}
	if(JOY_readJoypad(JOY_1) == BUTTON_RIGHT){
		SPR_setAnim((Sprite*)&sprites[0],2);

	}
	if(JOY_readJoypad(JOY_1) == BUTTON_DOWN){
		SPR_setAnim((Sprite*)&sprites[0],3);

	}
	if(JOY_readJoypad(JOY_1) == BUTTON_LEFT){
		SPR_setAnim((Sprite*)&sprites[0],4);
	}
	if(JOY_readJoypad(JOY_1) == BUTTON_A){
		SPR_setAnim((Sprite*)&sprites[1],1);
	}else{SPR_setAnim((Sprite*)&sprites[1],0);}

	if(JOY_readJoypad(JOY_1) == BUTTON_B){
		SPR_setAnim((Sprite*)&sprites[2],1);
	}else{SPR_setAnim((Sprite*)&sprites[2],0);}

	if(JOY_readJoypad(JOY_1) == BUTTON_C){
		SPR_setAnim((Sprite*)&sprites[3],1);
	}else{SPR_setAnim((Sprite*)&sprites[3],0);}


	if(!JOY_readJoypad(JOY_1)){
		SPR_setAnim((Sprite*)&sprites[0],0);
	}

}

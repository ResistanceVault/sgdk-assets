#include <genesis.h>
#include "gfx.h"
#include "music.h"
#include "nn_core.h"
#include "RSE_startingScreen.h"
#ifdef VISUALPAD_ON
#include "visualPad.h"
#endif
#ifdef KONAMICODE_ON
#include "nn_db.h"
#endif

void RSE_startingScreen(u16 fadeSpeed, u16 fadeSpeed2){
	SYS_disableInts();
	VDP_setScreenWidth320();
	SPR_init(64);
	VDP_setPaletteColors(0, (u16*)palette_black, 64);
	VDP_setPalette(PAL0, palette_grey);
	VDP_setPalette(PAL3, visualpadpad_sprite.palette->data);
	VDP_drawImageEx(APLAN, &logostart_image, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE, 50), 8, 10, FALSE, TRUE);
	SYS_enableInts();

	const u16 palLogoStartFade1[16] =  {0x000,0x000,0x000,0x000,0x620,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade2[16] =  {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x820,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade3[16] =  {0x000,0x000,0x000,0x000,0x000,0xc40,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade4[16] =  {0x000,0x000,0xe40,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade5[16] =  {0x000,0xe62,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade6[16] =  {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xe84,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade7[16] =  {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xe86,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade8[16] =  {0x000,0x000,0x000,0x000,0x000,0x000,0xea8,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade9[16] =  {0x000,0x000,0x000,0xeca,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade10[16] = {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xecc,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade11[16] = {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xeee,0x000,0x000,0x000,0x000,0x000};
	const u16 palLogoStartFade12[16] = {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xeee,0x000,0x000,0x000};
	//----------------------------------------------------------
	const u16 palLogoStartFade20[16] = {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xeee,0x000,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade21[16] = {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xeee,0x000,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade22[16] = {0x000,0x000,0x000,0x000,0x000,0x000,0x000,0xecc,0x000,0x000,0xeee,0x000,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade23[16] = {0x000,0x000,0x000,0xeca,0x000,0x000,0x000,0xecc,0x000,0x000,0xeee,0x000,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade24[16] = {0x000,0x000,0x000,0xeca,0x000,0x000,0xea8,0xecc,0x000,0x000,0xeee,0x000,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade25[16] = {0x000,0x000,0x000,0xeca,0x000,0x000,0xea8,0xecc,0xe86,0x000,0xeee,0x000,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade26[16] = {0x000,0x000,0x000,0xeca,0x000,0x000,0xea8,0xecc,0xe86,0x000,0xeee,0xe84,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade27[16] = {0x000,0xe62,0x000,0xeca,0x000,0x000,0xea8,0xecc,0xe86,0x000,0xeee,0xe84,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade28[16] = {0x000,0xe62,0xe40,0xeca,0x000,0x000,0xea8,0xecc,0xe86,0x000,0xeee,0xe84,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade29[16] = {0x000,0xe62,0xe40,0xeca,0x000,0xc40,0xea8,0xecc,0xe86,0x000,0xeee,0xe84,0xeee,0x000,0x000,0x000};
	const u16 palLogoStartFade30[16] = {0x000,0xe62,0xe40,0xeca,0x000,0xc40,0xea8,0xecc,0xe86,0x820,0xeee,0xe84,0xeee,0x000,0x000,0x000};
	u16 endLoop = 0;
	u16 sequencer = 0;
	#ifdef KONAMICODE_ON
	u16 konamiCodeComplete = FALSE;
	KONAMICODEINIT;
	#endif
	#ifdef VISUALPAD_ON
	Sprite sprites[4];
	visualPadInit((Sprite*)&sprites, 120, 150);
	#endif //VISUALPAD_ON
	#ifdef KONAMICODE_ON
	const vec2s16 promptPos = vec2s16Make(10, 15);
	startTimer(1); //clignotement press start
	#endif //KONAMICODE_ON
	startTimer(0); //fade timing
	startTimer(2); //endLoop
	#ifdef VISUALPAD_ON
	SPR_update((Sprite*)&sprites, 4);
	#endif //VISUALPAD_ON
	while(!endLoop){
		if(getTimer(0,0) >= FIX32(fadeSpeed) ){
			switch(sequencer){
				case 0:
					VDP_fadePalTo(PAL1, palLogoStartFade1,fadeSpeed, 1);
					sequencer++;
					break;
				case 1:
					VDP_fadePalTo(PAL1, palLogoStartFade2,fadeSpeed, 1);
					sequencer++;
					break;
				case 2:
					VDP_fadePalTo(PAL1, palLogoStartFade3,fadeSpeed, 1);
					sequencer++;
					break;
				case 3:
					VDP_fadePalTo(PAL1, palLogoStartFade4,fadeSpeed, 1);
					sequencer++;
					break;
				case 4:
					VDP_fadePalTo(PAL1, palLogoStartFade5,fadeSpeed, 1);
					sequencer++;
					break;
				case 5:
					VDP_fadePalTo(PAL1, palLogoStartFade6,fadeSpeed, 1);
					sequencer++;
					break;
				case 6:
					VDP_fadePalTo(PAL1, palLogoStartFade7,fadeSpeed, 1);
					sequencer++;
					break;
				case 7:
					VDP_fadePalTo(PAL1, palLogoStartFade8,fadeSpeed, 1);
					sequencer++;
					break;
				case 8:
					VDP_fadePalTo(PAL1, palLogoStartFade9,fadeSpeed, 1);
					sequencer++;
					break;
				case 9:
					VDP_fadePalTo(PAL1, palLogoStartFade10,fadeSpeed, 1);
					sequencer++;
					break;
				case 10:
					VDP_fadePalTo(PAL1, palLogoStartFade11,fadeSpeed, 1);
					sequencer++;
					break;
				case 11:
					VDP_fadePalTo(PAL1, palLogoStartFade12,fadeSpeed, 1);
					sequencer++;
					break;
				case 12:
					VDP_fadePalTo(PAL1, palLogoStartFade20,fadeSpeed2, 1);
					sequencer++;
					break;
				case 13:
					VDP_fadePalTo(PAL1, palLogoStartFade21,fadeSpeed2, 1);
					sequencer++;
					break;
				case 14:
					VDP_fadePalTo(PAL1, palLogoStartFade22,fadeSpeed2, 1);
					sequencer++;
					break;
				case 15:
					VDP_fadePalTo(PAL1, palLogoStartFade23,fadeSpeed2, 1);
					sequencer++;
					break;
				case 16:
					VDP_fadePalTo(PAL1, palLogoStartFade24,fadeSpeed2, 1);
					sequencer++;
					break;
				case 17:
					VDP_fadePalTo(PAL1, palLogoStartFade25,fadeSpeed2, 1);
					sequencer++;
					break;
				case 18:
					VDP_fadePalTo(PAL1, palLogoStartFade26,fadeSpeed2, 1);
					sequencer++;
					break;
				case 19:
					VDP_fadePalTo(PAL1, palLogoStartFade27,fadeSpeed2, 1);
					sequencer++;
					break;
				case 20:
					VDP_fadePalTo(PAL1, palLogoStartFade28,fadeSpeed2, 1);
					sequencer++;
					break;
				case 21:
					VDP_fadePalTo(PAL1, palLogoStartFade29,fadeSpeed2, 1);
					sequencer++;
					break;
				case 22:
					VDP_fadePalTo(PAL1, palLogoStartFade30,fadeSpeed2, 1);
					sequencer++;
					break;
				case 23:
					VDP_fadePalTo(PAL1, logostart_image.palette->data,fadeSpeed2, 1);
					sequencer++;
					break;
				default:
					break;
			}
			startTimer(0);
		}
		#ifdef KONAMICODE_ON
		if (!konamiCodeComplete){
			if (getTimer(1, 0) > FIX32(20)){
				printString(">", APLAN, promptPos);
			}
			if (getTimer(1, 0) > FIX32(40)){
				printString(" ", APLAN, promptPos);
				startTimer(1);
			}
			if (konButtonSeqState[1]) { printString("U", APLAN, vec2s16Make(promptPos.x + 2, promptPos.y)); }
			if (konButtonSeqState[2]) { printString("U", APLAN, vec2s16Make(promptPos.x + 3, promptPos.y)); }
			if (konButtonSeqState[3]) { printString("D", APLAN, vec2s16Make(promptPos.x + 4, promptPos.y)); }
			if (konButtonSeqState[4]) { printString("D", APLAN, vec2s16Make(promptPos.x + 5, promptPos.y)); }
			if (konButtonSeqState[5]) { printString("L", APLAN, vec2s16Make(promptPos.x + 6, promptPos.y)); }
			if (konButtonSeqState[6]) { printString("R", APLAN, vec2s16Make(promptPos.x + 7, promptPos.y)); }
			if (konButtonSeqState[7]) { printString("L", APLAN, vec2s16Make(promptPos.x + 8, promptPos.y)); }
			if (konButtonSeqState[8]) { printString("R", APLAN, vec2s16Make(promptPos.x + 9, promptPos.y)); }
			if (konButtonSeqState[9]) { printString("B", APLAN, vec2s16Make(promptPos.x + 10, promptPos.y)); }
			if (konButtonSeqState[10]){ printString("A", APLAN, vec2s16Make(promptPos.x + 11, promptPos.y)); }
		}
		if(KONAMICODEUPDATE){
			printString("Congratulation you have found",	APLAN, vec2s16Make(2, 16));
			printString("my Konami code implementation.", APLAN, vec2s16Make(4, 17));
			printString("Nothing special here", APLAN, vec2s16Make(2, 19));
			printString("except my best Greetings.", APLAN, vec2s16Make(4, 20));
			printString("- Nainain", APLAN, vec2s16Make(20, 22));
			
			konamiCodeComplete = TRUE;
			SND_startPlay_VGM(konami_music);
			#ifdef VISUALPAD_ON
			visualPadSetPosition((Sprite*)&sprites, -100, -170); //offscreen
			SPR_update((Sprite*)&sprites, 4);
			#endif		
		}
		if(konamiCodeComplete && getTimer(1,0) > FIX32(50)){
			printString("Press START",					APLAN, vec2s16Make(15, 23));
		}
		if(konamiCodeComplete && getTimer(1,0) > FIX32(100)){
			printString("           ",					APLAN, vec2s16Make(15, 23));
			startTimer(1);
		}
		if(konamiCodeComplete && JOY_readJoypad(JOY_1) == BUTTON_START) {  endLoop = 1; }
		if(getTimer(2,0) > FIX32(400) && !konamiCodeComplete){ endLoop = 1;}
		#endif // KONAMICODE_ON
		#ifdef VISUALPAD_ON
		SPR_update((Sprite*)&sprites, 4);
		if (endLoop){ SPR_end(); }

		visualPadUpdate((Sprite*)&sprites);
		#endif //VISUALPAD_ON

		VDP_waitVSync();
	}
	VDP_clearPlan(VDP_PLAN_A,1);
	VDP_clearPlan(VDP_PLAN_B,1);
}

#ifndef _BASE_H_
#define _BASE_H_
#include "SDL.h"


//FUNCTION LUNCH SDL START========================
int	lunch();
void	attendreTouche(void);
void	setPixel(int x, int y, Uint32 coul);
void	dessinerEtoiles(void);
void	actualiser(void);
//FUNCTION LUNCH SDL END=============================



//STRUCTURE Ray Tracer
typedef struct	s_pos
{
	int	x;
	int	y;
	int	z;
}	t_pos;




//
#endif

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
typedef struct	vector3
{
	int	x;
	int	y;
	int	z;
}	t_pos;


typedef	struct s_camera
{
	vector3	cpos;
	vector3	cvector;
	int	focale;
}	t_camera;

typedef	struct	s_sphere
{
	vector3	cpos;
	int	rayon;
}	t_sphere;


//
#endif

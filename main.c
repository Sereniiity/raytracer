/*
VERSION DU RAYTRACER AVEC LA LIBRARY SDL
TOUT LE CODE SERAS COMPATIBLE AVEC LA LIB IDX
*/
#include "base.h"




void	raylunch()
{
	t_camera	camera;
	t_sphere	sphere;

	camera.cpos.x = 0;
	camera.cpos.y = 0;
	camera.cpos.z = 0;
	camera.cvector.x = 500;
	camera.cvector.y = 500;
	camera.cvector.z = 1;
	
	sphere.cpos.x = 3;
	sphere.cpos.y = 3;
	sphere.cpos.z = 3;


}



int	main(void)
{
	lunch();
// ON COMMENCE A CODER ICI

	raylunch();

// FIN DU CODE MAIN ICI
	actualiser();
	attendreTouche();
	return 0;
}

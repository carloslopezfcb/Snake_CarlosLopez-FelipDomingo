#pragma once
#include <vector>
#include "Grid.h"
#include "Player.h"

using namespace std;



class Mur {
private:
	COOR *Murs;

public:

	Mur(int num, int caselles) {

		Murs = new COOR[num];
		for (int i = 0; i < num; i++)
		{
			
			Murs[i].x = rand() % caselles-1;
			Murs[i].y = rand() % caselles-1;


		}





	}

	~Mur() {


	}

	COOR Mur::Get_coor(int i) {
	
		return Murs[i];
	
	}
};




	
#pragma once
class Photon_Cannon
{
	int hp, shield;
	int coord_x, coord_y;
	int damage;

	char* name;
	
public:
	Photon_Cannon(int x, int y);
	Photon_Cannon(int x, int y, const char* cannon_name);
	Photon_Cannon(const Photon_Cannon& pc);
	~Photon_Cannon();

	void show_status();
};
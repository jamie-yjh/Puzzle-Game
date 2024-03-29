#include "Map.h"
#include "Plain.h"

/*
The default constructor initialize a map with default length and all plain on it
*/
Map::Map(): grid(DEFAULT_X, std::vector<Component*> (DEFAULT_Y, nullptr)){
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			grid[i][j] = new Plain(i, j);
		}
	}
}

Map::~Map() {
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			delete grid[i][j];
		}
	}
}

/*
Draw each component on the map
*/
void Map::draw() {
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			grid[i][j]->draw();
		}
	}
}

/*
Check whether the position is valid
Non valid case:
out of bound, empty (null in map), canLand = false
*/
bool Map::isValid(int gridX, int gridY)
{
	return gridX >= 0 && gridX < grid.size() && gridY >= 0 && gridY < grid[0].size()
		&& grid[gridX][gridY] && grid[gridX][gridY]->canLand;
}

/******************************************************
 * Define the player of the game.
 *****************************************************/

#pragma once

class Player {
public:
	/* Constants */
	static const int MOVE_SPEED = 2;

	/* Member fields */
	// define the current position on the grid
	int gridX;
	int gridY;

	// define the current position on in the space
	int spaceX;
	int spaceY;

	// define whether current player is moving
	bool isMoving;

	// define the direction of face, useful when performing operations
	int face;

	/* Functions */
	Player(int _gridX, int _gridY);

	void setPosition(int _gridX, int _gridY);
	void move();
	void draw();
};
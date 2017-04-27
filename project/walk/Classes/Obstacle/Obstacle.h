#ifndef __OBSTACLE_H__
#define __OBSTACLE_H__

#pragma once

#include "iostream"
#include "cocos2d.h"

class Obstacle
{
public:
  static Obstacle* getInstance();
  ~Obstacle();

  void obstacleTop() { obstacle_top = true; };
  void obstacleBottom() { obstacle_bottom = true; };
  void obstacleLeft() { obstacle_left = true; };
  void obstacleRight() { obstacle_right = true; };

  void unObstacleTop() { obstacle_top = false; };
  void unObstacleBottom() { obstacle_bottom = false; };
  void unObstacleLeft() { obstacle_left = false; };
  void unObstacleRight() { obstacle_right = false; };

  bool getTopState() { return obstacle_top; };
  bool getBottomState() { return obstacle_bottom; };
  bool getLeftState() { return obstacle_left; };
  bool getRightState() { return obstacle_right; };

private:
  Obstacle();
  bool obstacle_top, obstacle_bottom, obstacle_left, obstacle_right;
  static Obstacle* instance;
};

#endif // __OBSTACLE_H__
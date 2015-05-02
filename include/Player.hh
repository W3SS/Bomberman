//
// Player.hh for Bomberman in /home/tran_0/rendu/cpp_bomberman/include
// 
// Made by David Tran
// Login   <tran_0@epitech.net>
// 
// Started on  Sun May  3 01:20:37 2015 David Tran
// Last update Sun May  3 01:50:22 2015 David Tran
//

#ifndef PLAYER_HH_
# define PLAYER_HH_

# include <vector>
# include "Bomb.hh"

class	Player
{
public:
  Player(char Speed = 1, bool alive = true, char Range = 1);
  ~Player();
public:
  bool					is_Alive() const;
  void					triggerAlive();
public:
  void					addBomb();
  std::vector<Bomb*>			getBombs() const;
  std::vector<Bomb*>::const_iterator	getBombIt() const;
public:
  char					getRange() const;
  void					setRange(char const &);
public:
  char					getSpeed() const;
  void					setSpeed(char const &);
private:
  bool			isAlive;
  std::vector<Bomb *>	bombs;
  char			range;
  char			speed;
};
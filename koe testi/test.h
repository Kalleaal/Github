#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;




class GameObject
{
public:
	GameObject(string name, float health, int id);
	GameObject(string name, float health);

private:
	string name;
	float health;
	int id;


};

GameObject gameObject(std::string s, float f, int id);

GameObject gameObject();

GameObject gameObject("", 0, 0);

GameObject gameObject;

GameObject gameObject("Matti", 20500.50, 1);

GameObject gameObject("Pekka", 1370.40);
#ifndef UTILITIES_H					// avoid repeated expansion
#define UTILITIES_H
#include<string>

void gotoxy(int x, int y);         //For Setting the position of Cursor

void inventoryTypeAdd(std::string typei);
void inventoryTypeDelete(std::string typei);

#endif
#include <iostream>
#include <string.h>
#include "Activity.hpp"
#include "Room.hpp"
#include "Person.hpp"
void Activity :: setDescription(string description)
{
    this -> mDescription = description;
}

void Activity :: setLocation(Room* location)
{
    this -> mLocation = location;
}

void Activity :: setOwner(Person* owner)
{
    this -> mOwner = owner;
}

string Activity :: getDescription()
{
    return mDescription;
}
Room* Activity :: getLocation()
{
    return mLocation;
}
Person* Activity :: getOwner()
{
    return mOwner;
}

Activity :: Activity(string description, Room* location, Person* owner)
{
    this -> mDescription = description;
    this -> mLocation = location;
    this -> mOwner = owner;
}

ostream& operator<<(ostream &out, Activity &ob)
{
    out << "Description: " << ob.mDescription << '\n';
    out << "Owner: " << *(ob.mOwner) << '\n';
    out << "Location: " << *(ob.mLocation) << '\n';

    return out;
}

//Inductor.h - header file for Inductor

#ifndef _INDUCTOR_H_
#define _INDUCTOR_H_

#include "Component.h"

class Inductor : public Component{
	double inductance;

public:
	Inductor(double inductorValue, float red, float green, float blue, const std::string& inductorName);
	std::string GetName() const;
	void Update();
	double GetVoltage(double _current, double timestep);
	void Display();
};

#endif// _INDUCTOR_H_
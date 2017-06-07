#pragma once

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace myparticles {

struct Particle {
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace myparticles */

#endif /* PARTICLE_H_ */
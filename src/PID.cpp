#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double p, double i, double d) {
	
	this->Kp = p;
	this->Ki = i;
	this->Kd = d;
	
	this->p_error = 0.0;
	this->i_error = 0.0;
	this->d_error = 0.0;
	this->previous_cte = 0.0;
	
}

double PID::compute_steering(double cte) {
	
	this->p_error = cte;
	this->i_error = this->i_error + cte;
	this->d_error = cte - this->previous_cte;
	this->previous_cte = cte;
	
	return (-1. * (this->Kp * this->p_error + this->Ki * this->i_error + this->Kd * this->d_error));
	
}

void PID::UpdateError(double cte){
}

double PID::TotalError() {
}


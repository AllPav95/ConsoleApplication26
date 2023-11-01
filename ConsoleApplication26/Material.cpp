#include "Material.h"

Material::Material(
	const std::string& type,
	const std::string& color,
	double hardness,
	double weight,
	double meltingPoint,
	double conductivity,
	double density,
	double softness,
	double state
) : MaterialBase(type, color, hardness, weight, meltingPoint, conductivity, density) {
	softness_ = softness;
	state_ = state;
}

std::string Material::getType() const
{
	return type_;
}

std::string Material::getColor() const
{
	return color_;
}

double Material::getHardness() const
{
	return hardness_;
}

double Material::getWeight() const
{
	return weight_;
}

double Material::getMeltingPoint() const
{
	return meltingPoint_;
}

double Material::getConductivity() const
{
	return conductivity_;
}

double Material::getDensity() const
{
	return density_;        
}

double Material::getMoistureContent() const
{
	return moistureContent_;
}

double Material::getQuality() const
{
	return quality_;
}
double Material::getSoftness() const
{
	return softness_;
}
double Material::getState() const
{
	return state_;
}

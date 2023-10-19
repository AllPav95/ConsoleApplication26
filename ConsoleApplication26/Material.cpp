#include "MaterialBase.h"
#include "Material.h"


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

#include "material.h"

Material::Material()
{
}

Material::Material(float _reflectiveness)
{
	reflectiveness = _reflectiveness;
}

float Material::getReflec()
{
	return reflectiveness;
}

float Material::getRatio()
{
	return refractRatio;
}

void Material::setReflec(float _reflectiveness)
{
	reflectiveness = _reflectiveness;
}

Material::~Material()
{
}

Color Material::sample(const CRay & _ray, const GVector3& _position,  GVector3 & _normal)
{
	return Color::white();
}

Color Material::sample(const CRay & _ray, const CRay _lightray, const GVector3 & _position, GVector3 & _normal)
{
	return Color();
}

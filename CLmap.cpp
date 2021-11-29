#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT * FROM clients";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO clients (nom, prenom, id_adresse) VALUES('" + this->nom + "','" + this->prenom + "','" + this->id + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{	
	return "DELETE FROM clients WHERE nom = '" + this->nom +"' AND prenom = '" + this->prenom + "' AND id = '" + this->id + "'";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE clients SET id_adresse = '" + this->id + "' WHERE nom = '" + this->nom + "' AND prenom = '" + this->prenom+ "'";
}
void NS_Comp_Mappage::CLmapTB::setId(int id)
{
	this->id = id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
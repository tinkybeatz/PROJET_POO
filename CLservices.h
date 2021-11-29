#pragma once
#include "CLmapTB.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void supprimer(System::String^, System::String^, int);
		void update(System::String^, System::String^, int);
		void ajouterUnePersonne(System::String^, System::String^, int);
	};
}

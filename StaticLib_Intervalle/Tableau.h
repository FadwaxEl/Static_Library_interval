#pragma once
namespace interval {
	class Tableau
	{
	protected:
		unsigned int taille;
		float* T;
	public:
		Tableau(unsigned int);
		Tableau(const Tableau& Tab);
		void Remplir();
		Tableau operator=(const Tableau& Tab);
		
		void print() const;
		~Tableau();
	private:
		float& operator[](unsigned int);
	};
};

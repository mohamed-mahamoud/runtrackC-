#include "Contact.cpp"

int main() {
	// Création de plusieurs contacts
	Contact c1("Alice", 12345);
	Contact c2("Bob", 67890);
	Contact c3("Charlie", 54321);

	// Copies
	Contact c1_copy = c1;
	Contact c2_copy = c2;
	Contact c3_copy = c3;

	// Modification des numéros des copies
	c1_copy.setNumber(11111);
	c2_copy.setNumber(22222);
	c3_copy.setNumber(33333);

	// Affichage des originaux
	c1.afficherContact();
	c2.afficherContact();
	c3.afficherContact();

	// Affichage des copies
	c1_copy.afficherContact();
	c2_copy.afficherContact();
	c3_copy.afficherContact();

	return 0;
}

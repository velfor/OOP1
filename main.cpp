//����� �����
#include <iostream>
using namespace std;

class Fraction {
private:
	int nom;//���������
	int denom;//�����������
public:
	//����������� �� ���������
	Fraction() {
		nom = 0;
		denom = 1;
	}
	// get, set
	void setNom(int fnom) { nom = fnom; }//���������� ���������
	int getNom() { return nom; }//�������� ���������
	void setDenom(int fdenom) { denom = fdenom; }//���������� �����������
	int getDenom() { return denom; }//�������� �����������
	void print() {//����� ����� �� �����
		if (nom == 0) cout << 0 << endl;
		else
			if (denom == 0) cout << "Error";
			else cout << nom << '/' << denom << endl;
	}
	//��������� ������
	Fraction mul(Fraction b) {
		Fraction c;
		c.nom = nom * b.nom;
		c.denom = denom * b.denom;
		return c;
	}
	Fraction div(Fraction b) {
		Fraction c;
		c.nom = nom * b.denom;
		c.denom = denom * b.nom;
		return c;
	}
	Fraction add(Fraction b) {
		Fraction c;
		c.denom = denom * b.denom;
		c.nom = nom * b.denom + b.nom * denom;
		return c;
	}
	Fraction sub(Fraction b) {

	}
};
int main() {
	Fraction a,b,res;//����� �������� ����������� �� ���������
	a.setNom(1);
	a.setDenom(2);
	a.print();
	res = a.mul(b);
	res.print();

	b.setNom(1);
	b.setDenom(3);
	res = a.div(b);
	res.print();
	return 0;
}
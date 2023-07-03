#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	void setActivity(float nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise = nilai;
	}

	float getExercise() {
		return exercise;
	}

	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}

};

class Pemograman : public MataKuliah {
public:
	 void cekKelulusan() {
		cout << "Selamat, Anda lulus mata kuliah Pemograman dengan nilai akhir 75";
	}
};

int main() {
	MataKuliah(){

		cout << "Program dibuat\n";
		cout << "Masukkan nilai presensi: ";
		int presensi;
		cin >> presensi;

		cout << "Masukkan nilai activity: ";
		int activity;
		cin >> activity;


	}
}
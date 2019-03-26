#include "Vector3.h"


 Vector3::set(){
	 cin >> arg1;
	 cin >> arg2;
	 cin >> arg3;
 }
 Vector3::Vector3() {
	 cin>>arg;
 }
 Vector3::Vector3() {
	 arg[3];
	 for (int i = 0; i < 3; i++)
		 cin >> arg[i];
 }
 Vector3::SetZero() {
	 arg1 = 0;
	 arg2 = 0;
	 arg3 = 0;
 }

 Vector3 Vector3::operator*=(double B) {
	 Vector3 otv;
	 otv.arg1 = B * arg1;
	 otv.arg2 = B * arg2;
	 otv.arg3 = B * arg3;
	 return otv;
 }
 Vector3 Vector3::operator/=(double B) {
	 Vector3 otv;
	 otv.arg1 = arg1 / B;
	 otv.arg2 = arg2 / B;
	 otv.arg3 = arg3 / B;
	 return otv;
 }
 Vector3::operator*(Vector3 A, double B) {
	 Vector3 otv;
	 otv.arg1 = B * A.arg1;
	 otv.arg2 = B * A.arg2;
	 otv.arg3 = B * A.arg3;
	 return otv;
 }
 Vector3::operator/(Vector3 A, double B) {
	 Vector3 otv;
	 otv.arg1 = A.arg1 / B;
	 otv.arg2 = A.arg2 / B;
	 otv.arg3 = A.arg3 / B;
	 return otv;
 }
 Vector3 Vector3::operator*=(double A) {
	 Vector3 otv;
	 otv.arg1 = A * arg1;
	 otv.arg2 = A * arg2;
	 otv.arg3 = A * arg3;
	 return otv;
 }
 Vector3::operator+(Vector3 A, Vector3 B) {
	 Vector3 otv;
	 otv.arg1 = A.arg1 + B.arg1;
	 otv.arg2 = A.arg2 + B.arg2;
	 otv.arg3 = A.arg3 + B.arg3;
	 return otv;
 }
 Vector3 Vector3::operator+=( Vector3 B) {
	 Vector3 otv;
	 otv.arg1 = arg1 + B.arg1;
	 otv.arg2 = arg2 + B.arg2;
	 otv.arg3 = arg3 + B.arg3;
	 return otv;
 }
 Vector3::operator-(Vector3 A, Vector3 B) {
	 Vector3 otv;
	 otv.arg1 = A.arg1 - B.arg1;
	 otv.arg2 = A.arg2 - B.arg2;
	 otv.arg3 = A.arg3 - B.arg3;
	 return otv;
 }
 Vector3 Vector3::operator-=(Vector3 B) {
	 Vector3 otv;
	 otv.arg1 = arg1 - B.arg1;
	 otv.arg2 = arg2 - B.arg2;
	 otv.arg3 = arg3 - B.arg3;
	 return otv;
 }
 Vector3::operator=(Vector3 B) {
	 Vector3 otv;
	 otv.arg1 =  B.arg1;
	 otv.arg2 =  B.arg2;
	 otv.arg3 =  B.arg3;
	 return otv;
 }
 bool::operator==(Vector3 A, Vector3 B) {
	 if ((A.arg1 == B.arg1) && (A.arg2 == B.arg2) && (A.arg3 == B.arg3))
		 return true;
	 else return false;
 }
 bool::isVectorZero() {
	 if ((arg1 == 0) && (arg2 == 0) && (arg3 == 0))
		 return true;
	 else return false;
 }
 Vector3::operator*(Vector3 K, Vector3 L) {
	 Vector3 otv;
	 otv.arg1 = L.arg2 * K.arg3 - L.arg3 * K.arg2;
	 otv.arg2 = L.arg3 * K.arg1 - L.arg1 * K.arg3;
	 otv.arg3 = L.arg1 * K.arg2 - L.arg2 * K.arg1;
	 return otv;
 }
 Vector3::operator/(Vector3 K, double L) {
	 Vector3 otv;
	 otv.arg1 = K.arg1 / L;
	 otv.arg2 = K.arg2 / L;
	 otv.arg3 = K.arg3 / L;
	 return otv;
 }
 double Vector3::getScalarProduct(Vector3 K) {
	 double otv;
	 otv = arg1 * K.arg1 + arg2 * K.arg2 + arg3 * K.arg3;
	 return otv;
 }
 void Vector3::show() {
	 std::cout << arg1 << " " << arg2 << " " << arg3 << std::endl;
 }



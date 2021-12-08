#ifndef INCLUDE_ELLIPSE__
#define INCLUDE_ELLIPSE__


// The class Ellipse stores a ellipse in R2


class Ellipse {
private:
	// the coordinates of the focal points
	// cordinates of the center of the ellipse
	double center[2];
	double a;
	double b;
public:
	// constructors and destructors
	Ellipse();
	Ellipse(double = 0, double = 0);
	~Ellipse(); 

	// define or change the focal points of an elliipse,
	// e.g., ellipse.setF1(x1,x2) writes the
	// coordinates for the first focal point
	void setFirstFocalPoint(double, double);
	void setSecondFocalPoin(double, double);
	void setCenter(double, double);
	void setA(double);
	void setB(double);

	// get methods
	void getCenter(double, double);
	void getA(double);
	void getB(double);
	void getCenter();

	// bool methods
	bool isInside(double, double);
	bool isCircle();

	// print focal points
	void printFocalPoints();

	// gets the eccentrity of an ellipse
	/* Die Exzentrität beschreibt man zunächst die Abweichung
	einer Ellipse von der Kreisform
	*/
	double getEccentrity();




	// return the
};



#endif
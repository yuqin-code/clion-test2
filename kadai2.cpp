#include "kadai2.h"

double bmi(double height_m, double weight) {

        if (height_m <= 0 || weight <= 0) {
            return 0.0;
        }
            return weight / (height_m * height_m);

    }

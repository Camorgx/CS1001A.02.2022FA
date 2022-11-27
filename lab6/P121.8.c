typedef struct complex {
    int real;
    int imag;
} complex;

complex complexAdd(complex x, complex y) {
    return (complex) {
        x.real + y.real,
        x.imag + y.imag
    };
}

complex complexSub(complex x, complex y) {
    return (complex) {
        x.real - y.real,
        x.imag - y.imag
    };
}

complex complexMul(complex x, complex y) {
    return (complex) {
        x.real * y.real - x.imag * y.imag,
	    x.real * y.imag + x.imag * y.real
    };
}

complex complexDiv(complex x, complex y) {
    double t = y.real * y.real + y.imag * y.imag;
    return (complex) {
	    x.real * y.real + x.imag * y.imag / t,
	    x.imag * y.real - x.real * y.imag / t
    };
}

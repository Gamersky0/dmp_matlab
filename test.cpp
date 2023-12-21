/*=================================================================
 * mexfunction.c
 *
 * This example demonstrates how to use mexFunction.  It returns
 * the number of elements for each input argument, providing the
 * function is called with the same number of output arguments
 * as input arguments.


 * This is a MEX-file for MATLAB.
 * Copyright 1984-2018 The MathWorks, Inc.
 * All rights reserved.
 *=================================================================*/
#include "mex.h"
void add(double* x, double* y, double* z)
{
	*z = *x + *y;
}

void mexFunction(int nlhs, mxArray* plhs[], int nrhs, const mxArray* prhs[]) {
    int i;
    double *A;
    double *B;
    double *C;
    /* Examine input (right-hand-side) arguments. */
    mexPrintf("\n%d input argument(s).", nrhs);
    for (i = 0; i < nrhs; i++) {
        mexPrintf("\n\tInput Arg %i is of type:\t%s ", i, mxGetClassName(prhs[i]));
    }
    A = mxGetPr(prhs[0]); //取得输入变量的指针
    B = mxGetPr(prhs[1]);
    plhs[0] = mxCreateDoubleMatrix(1, 1, mxREAL); //创建输出矩阵
    C = mxGetPr(plhs[0]);
    add(A, B, C);
    //* C = (*A) + (*B) ;

    /* Examine output (left-hand-side) arguments. */
    mexPrintf("\n\n%d output argument(s).\n", nlhs);
    if (nlhs > nrhs)
        mexErrMsgIdAndTxt("MATLAB:mexfunction:inputOutputMismatch",
            "Cannot specify more outputs than inputs.\n");
}

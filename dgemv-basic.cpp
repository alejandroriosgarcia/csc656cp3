const char* dgemv_desc = "Basic implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of basic matrix multiply

   // Temp array to hold result of Ax
   double tempYarr[n];

   for (int i = 0; i < n; i++) {
      tempYarr[i] = 0.0;
   }

   // Do A * X portion of operation
   for (int i = 0; i < n; i++) {
      for (int j = 0; i < n; i++) {
         tempYarr[i] += A[i * n + j] * x[j];
      }
   }

   // Add previous result to Y
   for (int i = 0; i < n; i++) {
      y[i] += tempYarr[i];
   }
}

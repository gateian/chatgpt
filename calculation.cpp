// // C++ calculation function
// extern "C" int cppCalculation(int x, int y) {
//   int result = 0;
//   for (int i = 0; i < 1000000; i++) {
//     result += x * y + i;
//   }
//   return result;
// }

// extern "C" {
//   int _cppCalculation(int x, int y) {
//     int result = 0;
//     for (int i = 0; i < 1000000; i++) {
//       result += x * y + i;
//     }
//     return result;
//   }
// }

// C++ calculation function
extern "C" int _cppCalculation(int x, int y) {
  int result = 0;
  for (int i = 0; i < 1000000; i++) {
    result += x * y + i;
  }
  return result;
}
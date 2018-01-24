#include <criterion/criterion.h>
#include "../distance.c"


#define EXPECTED_DISTANCE 1.414214

Test(distance_test, simple) {
	double result;
	point a = {6, 2, 3};
	point b = {6, 3, 4};

	result = distance(a, b);

	cr_assert_eq(result, EXPECTED_DISTANCE,
	"Distance not what was expected. Expected: [%.6f] Actual: [%.6f]\n", EXPECTED_DISTANCE, result);
}
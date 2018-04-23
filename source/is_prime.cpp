#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

bool is_prime(int zahl)
{
	int i;
	bool prim;

	for (i = 2; i < sqrt(zahl); i++){
		if (zahl % i == 0){
			prim = false;
		}
		else{
			prim = true;
		}
	}
	return prim;
}

TEST_CASE("testing_is_prime", "[is_prime]")
{
  REQUIRE(is_prime(7) == true);
  REQUIRE(is_prime(36) == false);
  REQUIRE(is_prime(52) == false);
}

int main(int argc, char* argv[]){
	return Catch::Session().run(argc, argv);
	return 0;
}

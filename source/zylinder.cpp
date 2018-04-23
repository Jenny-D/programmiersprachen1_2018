#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double volumen_zylinder(double radius, double hoehe)
{
	
}

TEST_CASE("testing_volumen_zylinder", "[volumen_zylinder]")
{
  REQUIRE(volumen_zylinder(3,4) == 113,097);
  REQUIRE(volumen_zylinder(1,2) == 6,283);
}

int main(int argc, char* argv[]){
	return Catch::Session().run(argc, argv);
	return 0;
}

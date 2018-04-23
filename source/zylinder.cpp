#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double oberflaeche_zylinder(double radius, double hoehe)
{
	double oberflaeche;
	if(radius >= 0 && hoehe >= 0){
		oberflaeche = 2 * M_PI * radius * (radius + hoehe);
	}
	else{
		oberflaeche = 0;
	}
	return oberflaeche;
}

double volumen_zylinder(double radius, double hoehe)
{
	double volumen;
	if (radius >= 0 && hoehe >= 0){
		volumen = M_PI * pow(radius, 2) * hoehe;
	}
	else{
		volumen = 0;
	}
	return volumen;
}

TEST_CASE("testing_oberflaeche_zylinder", "[oberflaeche_zylinder]")
{
  REQUIRE(oberflaeche_zylinder(2.0,3.0) == 62,83);
  REQUIRE(oberflaeche_zylinder(1.0,2.0) == 18,849);
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

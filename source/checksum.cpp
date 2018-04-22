#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int checksum (int zahl)
{
	int sum = 0;
	{
		while (zahl > 0) {
			sum += zahl % 10;
			zahl /= 10;
		}
	return sum;
	}
}

TEST_CASE("testing_checksum", "[checksum]")
{
  REQUIRE(checksum(24) == 6);
  REQUIRE(checksum(1111111) == 7);
  REQUIRE(checksum(118179) == 27);
}

main(int argc, char* argv[]){
	return Catch::Session().run(argc, argv);
	return 0;
}

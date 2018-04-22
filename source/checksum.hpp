#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <iostream>

void checksum (int zahl)
{
	while (zahl > 0) {
		checksum += zahl % 10;
		zahl /= 10;
	}
}

TEST_CASE("describe_checksum", "[checksum]")
{
  REQUIRE(checksum(24) == 6);
  REQUIRE(checksum(1111111) == 7);
  REQUIRE(checksum(118179) == 27);
}

main(int argc, char* argv[]){
	return Catch::Session().run(argc, argv);
}

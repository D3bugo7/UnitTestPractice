/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, multiple_leading_characters)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aaaaabbb");
	ASSERT_EQ(5, actual);
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}

TEST (PasswordTest, mixed_case_true)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("HelloWorld");
	ASSERT_EQ(true, actual);
}

TEST (PasswordTest, mixed_case_false_all_lower)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("helloworld");
	ASSERT_EQ(false,actual);
}


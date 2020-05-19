#include <iostream>
#include <gtest/gtest.h>
using namespace std;

class MyClass{
    string id;
public:
     MyClass(string _id) : id(_id){}
     string GetId() { return id; }

};

TEST( TestName, increment_by_5 ){
    // EXPECT_EQ(1, 2);
    // cout <<"After assertion"<<endl;

    //Arrange
    MyClass mc("robot");

    //Act
    string value = mc.GetId();

    //Assert 
    ASSERT_STREQ(value.c_str(), "robot");

}

// TEST( TestName2, Subtest_1 ){
//     ASSERT_TRUE(1 == 2);

// }


//3 main types of assertions - Success, Non-fatal failure[EXPECT_EQ()] , Fatal failure[ASSERT_EQ()]
// TEST( TestName, increment_by_10 ){
//     // EXPECT_EQ(1, 2);
//     // cout <<"After assertion"<<endl;

//     //Arrange
//     int value = 100;
//     int increment = 10;

//     //Act
//     value = value + increment;

//     //Assert 
//     ASSERT_EQ(value, 110);

// }



int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

// ARRANGE --> ACT --> ASSERT(Verify o/p)

//UNIT TEST -Run extremely fast (within ms), must run independently, doesnt depend on external i/p
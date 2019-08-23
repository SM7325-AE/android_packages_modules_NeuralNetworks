// Generated from tanh.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::tanh {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, tanh) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, tanh) { execute(get_test_model()); }

} // namespace generated_tests::tanh

TEST_AVAILABLE_SINCE(V1_0, tanh, generated_tests::tanh::get_test_model());


namespace generated_tests::tanh {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, tanh_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, tanh_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::tanh

TEST_AVAILABLE_SINCE(V1_0, tanh_all_inputs_as_internal, generated_tests::tanh::get_test_model_all_inputs_as_internal());

// Copyright 2021 Simon Batardiere.
// All Rights Reserved.
//
// Licensed under the Apache License 2.0 (the "License"). You may not use this
// file except in compliance with the License. You can obtain a copy in the file
// LICENSE in the source distribution.

#include <gtest/gtest.h>
#include <sandbox/sandbox.h>

TEST(sandbox, sandbox) {
	EXPECT_EQ(1, 0);
}

TEST(sandbox, echo) {
	EXPECT_EQ(sandbox::echo(0), 0);
	EXPECT_EQ(sandbox::echo(1), 1);
	EXPECT_EQ(sandbox::echo(-1), -1);
	EXPECT_EQ(sandbox::echo(100), 100);
}


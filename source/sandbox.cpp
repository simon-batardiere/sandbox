// Copyright 2021 Simon Batardiere.
// All Rights Reserved.
//
// Licensed under the Apache License 2.0 (the "License"). You may not use this
// file except in compliance with the License. You can obtain a copy in the file
// LICENSE in the source distribution.

#include "sandbox.h"
#include <iostream>

namespace sandbox {
void sandbox()
{
	std::cout << "Have fun!" << std::endl;
}

int echo(int number)
{
	return number;
}
}


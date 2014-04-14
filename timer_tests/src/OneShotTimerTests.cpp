/**
* Copyright (C) 2014, BMW Car IT GmbH
* Author: Jonas Sticha (Jonas.Sticha@bmw-carit.de)
*
* This software is licensed under BSD 3-clause License
* (see http://spdx.org/licenses/BSD-3-Clause).
**/

#include "RosOneShotTimerTestsFixture.h"
#include "main.h"

TEST_F(RosOneShotTimerTests, MaxLatencySmallerThan400MicroSecond)
{
	ASSERT_LE(maxLatencyMs, 400);
}

TEST_F(RosOneShotTimerTests, AverageLatencySmallerThan400MicroSecond)
{
	ASSERT_LE(avgLatencyMs, 400);
}

TEST_F(RosOneShotTimerTests, NoNegativeLatencies)
{
	ASSERT_GE(minLatencyMs, 0);
}

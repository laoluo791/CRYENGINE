// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

namespace CubemapUtils
{
bool GenCubemapWithPathAndSize(string& filename, const int size, const bool dds = true);
bool GenCubemapWithObjectPathAndSize(string& filename, CBaseObject* pObject, const int size, const bool dds);
void GenHDRCubemapTiff(const string& fileName, int size, Vec3& pos);
void RegenerateAllEnvironmentProbeCubemaps();
void GenerateCubemaps();
}

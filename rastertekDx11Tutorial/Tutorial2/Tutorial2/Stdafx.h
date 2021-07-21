// 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포험 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.

// 전방선언 사용의 이점과 빌드 시간 감축을 위해서
// 미리 컴파일된 헤더(Stdafx.h)의 이점을 사용하기 위해서
// 미리 사용될 헤더파일을 따로 작성(DxDefine.h)하여 만들도록 하겠습니다.

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include "DxDefine.h"

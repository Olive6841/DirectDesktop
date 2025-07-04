#pragma once
#include "framework.h"
#include "Include\dui70\DirectUI\DirectUI.h"
#include "DDControls.h"
#include <string>
#include <vector>

using namespace DirectUI;

extern bool renameactive;
extern bool touchmode;
extern std::vector<LVItem*> pm;
extern std::wstring RemoveQuotes(const std::wstring& input);
extern int localeType;
extern Element* pMain;
extern DUIXmlParser* parser;
extern NativeHWNDHost* wnd;
extern void SelectItemListener(Element* elem, const PropertyInfo* pProp, int type, Value* pV1, Value* pV2);

template <typename elemType>
extern elemType regElem(const wchar_t* elemName, Element* peParent);

void ShowRename();
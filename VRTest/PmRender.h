///////////////////////////////////////////
//

#pragma once

#include		"PmObject.h"
#include		"Mof.h"

//描画関係のクラス
class PmRenderShape
{

private:

	PmRenderShape(){};
	~PmRenderShape(){};

public:
	static void RenderShape(PmObject* obj, Mof::Color color);
};
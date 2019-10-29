#pragma once
#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン:主人公
class CObjHeroHP :public CObj
{
public:
	CObjHeroHP(float x, float y);  //コンストラクタ
	~CObjHeroHP() {};
	void Init();   //イニシャライズ
	void Action(); //アクション
	void Draw();   //ドロー
private:
	
};

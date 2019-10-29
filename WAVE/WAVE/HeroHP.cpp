#include "GameL\DrawTexture.h"
#include "GameHead.h"
#include "HeroHP.h"
#include "GameL\HitBoxManager.h"


//使用するネームスペース
using namespace GameL;


//イニシャライズ
void CObjHeroHP::Init()
{
	
}

//アクション
void CObjHeroHP::Action()
{
	
}

//ドロー
void CObjHeroHP::Draw()
{
	/*//歩くアニメーション情報を登録
	int AniData[4] =
	{
		1 , 0 , 2 , 0,
	};w
	*/

	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//切り取り位置の設定
	src.m_top = 64.0f;
	src.m_left = 256.0f;
	src.m_right = 320.0f;
	src.m_bottom = 128.0f;

	//表示位置の設定
	dst.m_top = 0.0f    ;
	dst.m_left = 0.0f   ;
	dst.m_right = 16.0f ;
	dst.m_bottom = 16.0f;

	//描画
	Draw::Draw(1, &src, &dst, c, 0.0f);

}
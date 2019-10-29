#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン:主人公
class CObjHero :public CObj
{
    public:CObjHero() {};
	       ~CObjHero() {};
		   void Init();   //イニシャライズ
		   void Action(); //アクション
		   void Draw();   //ドロー
		   void SetX(float x);//位置情報X変更用
		   void SetY(float y);//位置情報Y変更用
		   float GetX();      //位置情報X取得用
		   float GetY();      //位置情報Y取得用

	private:
		float m_px;    //位置
		float m_py;
		bool  m_f;     //弾丸発射制御用

		float m_vx;    //移動ベクトル
		float m_vy;
		float m_posture;  //姿勢

		int m_ani_time;  //アニメーションフレーム動作間隔
		int m_ani_frame; //描画フレーム

		float m_speed_power;  //スピードパワー
		float m_ani_max_time; //アニメーション動作間隔最大値

		int m_hp;//主人公の最大HP
		int m_hp2;//主人公の最大HPのコピー

		int m_nuw_hp;//主人公の現在のHP
		int m_nue_hp2;//主人公の現在のHOのコピー

		int gX;//ゲージX座標
		int gY;//ゲージY座標

		int gX2;//ゲージ座標コピー
		int attaku;//敵の攻撃力
};
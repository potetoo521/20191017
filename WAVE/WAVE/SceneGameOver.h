#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームオーバー
class CSceneGameOver :public CScene
{
public:
	CSceneGameOver();
	~CSceneGameOver();
	void InitScene();
	void Scene();
private:
};
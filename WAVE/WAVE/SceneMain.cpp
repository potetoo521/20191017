#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBBUGGING (0)

#include "GameL\DrawTexture.h"

using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

//�R���X�g���N�^
CSceneMain::CSceneMain()
{

}

//�f�X�g���N�^
CSceneMain::~CSceneMain()
{

}

//�Q�[�����C���̏��������\�b�h
void CSceneMain::InitScene()
{
	Draw::LoadImage(L"�^�C�g��2.png", 0, TEX_SIZE_1024);
}

//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{

}
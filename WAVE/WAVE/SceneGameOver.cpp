//STL�f�o�b�O�@�\OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include "SceneGameOver.h"
#include "GameHead.h"

//�R���g���X�^
CSceneGameOver::CSceneGameOver()
{

}

//�f�X�g���N�^
CSceneGameOver::~CSceneGameOver()
{

}

//���������\�b�h
void CSceneGameOver::InitScene()
{
	/*Font::SetStrTex(L"GAMEOVER");
	Font::SetStrTex(L"RESTART");
	Font::SetStrTex(L"TITlE");*/

	//�Q�[���I�[�o�[�I�u�W�F�N�g�쐬
	CObjGameOver*obj = new CObjGameOver();
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);
}

//���s�����\�b�h
void CSceneGameOver::Scene()
{

}


//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\Audio.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include "title.h"
#include "GameHead.h"

//�R���X�g���N�^
Ctitle::Ctitle()
{

}

//�f�X�g���N�^
Ctitle::~Ctitle()
{

}

//�Q�[�����������\�b�h
void Ctitle::InitScene()
{
	CObjTitle* p = new CObjTitle();
	Objs::InsertObj(p, OBJ_TITLE, 1);
}

//�Q�[���^�C�g�����s���\�b�h
void Ctitle::Scene()
{

}
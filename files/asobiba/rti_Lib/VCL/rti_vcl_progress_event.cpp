/**********************************************************/
// リストボックスのイベントとか
/**********************************************************/
#include "StartWithExeFile.h"
#ifdef PROGRESS_LIFE

#include <.\VCL\rti_vcl_progress_event.h>

/**********************************************************/
//コンストラクタ   初期化します...
/**********************************************************/
TProgressEvent::TProgressEvent()
{
}
/**********************************************************/
//WM_COMMAND イベントディスパッチャ
/**********************************************************/
void TProgressEvent::WmCommandCome(WPARAM wParam)
{
	switch(HIWORD(wParam))
	{
	}
}

#endif


#include "NoteSh.h"
#include "CellRef.h"
#include <Binary/CFRecord.h>

namespace XLS
{


NoteSh::NoteSh()
{
	x_ = y_ = 0;
}


NoteSh::NoteSh(CFRecord& record)
{
	x_ = y_ = 0;
	load(record);
}


BiffStructurePtr NoteSh::clone()
{
	return BiffStructurePtr(new NoteSh(*this));
}


void NoteSh::store(CFRecord& record)
{
#pragma message("####################### NoteSh record has no BiffStructure::store() implemented")
	Log::error(" Error!!! NoteSh record has no BiffStructure::store() implemented.");
	//record << something;
}


void NoteSh::load(CFRecord& record)
{
	global_info = record.getGlobalWorkbookInfo();

	unsigned short flags;
	record >> row >> col >> flags;
	
	fShow		= GETBIT(flags, 1);
	fRwHidden	= GETBIT(flags, 7);
	fColHidden	= GETBIT(flags, 8);

	record >> idObj >> stAuthor;
	record.skipNunBytes(1); // unused
}

//-----------------------------------------------------------------------
void NoteSh::calculate()
{
	XLS::GlobalWorkbookInfo::_sheet_size_info zero;
	XLS::GlobalWorkbookInfo::_sheet_size_info & sheet_info = global_info->current_sheet >=0 ? 
										global_info->sheet_size_info[global_info->current_sheet - 1] : zero;

	ref_ = CellRef(row, col, true, true).toString();

	double kfCol	= 17640 / 256.;
	double kfRow	= ( 360000 * 2.54 / 72) / 256. ;

	for (int i = 0 ; i < col; i++)
	{
		if (sheet_info.customColumnsWidth.find(i) != sheet_info.customColumnsWidth.end())
			x_ +=  256 * kfCol * sheet_info.customColumnsWidth[i];	
		else 
			x_ +=  256 * kfCol * sheet_info.defaultColumnWidth;
	}

	for (int i = 0 ; i < row; i++)
	{
		if (sheet_info.customRowsHeight.find(i) != sheet_info.customRowsHeight.end())
		{
			y_ += 256 * kfRow * sheet_info.customRowsHeight[i];	
		}
		else 
			y_ += 256 * kfRow * sheet_info.defaultRowHeight;	
	}
}


} // namespace XLS


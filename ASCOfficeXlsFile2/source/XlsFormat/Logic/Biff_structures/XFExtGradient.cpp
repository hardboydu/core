
#include "XFExtGradient.h"
#include <Binary/CFRecord.h>

namespace XLS
{;


BiffStructurePtr XFExtGradient::clone()
{
	return BiffStructurePtr(new XFExtGradient(*this));
}


//void XFExtGradient::toXML(BiffStructurePtr & parent)
//{
//	MSXML2::IXMLDOMElementPtr own_tag = XMLSTUFF::createElement(getClassName(), parent);
//	gradient.toXML(own_tag);
//	for(size_t i = 0; i < rgGradStops.size(); ++i)
//	{
//		rgGradStops[i].toXML(own_tag);
//	}
//}
//
//const bool XFExtGradient::fromXML(BiffStructurePtr & parent)
//{
//#pragma message("####################### XFExtGradient record has no BiffStructure::fromXML() implemented")
//	Log::error(" Error!!! XFExtGradient record has no BiffStructure::fromXML() implemented.");
//	return false;
//}
//

void XFExtGradient::store(CFRecord& record)
{
#pragma message("####################### XFExtGradient record has no BiffStructure::store() implemented")
	Log::error(" Error!!! XFExtGradient record has no BiffStructure::store() implemented.");
	//record << something;
}


void XFExtGradient::load(CFRecord& record)
{
	record >> gradient >> cGradStops;
	for(size_t i = 0; i < cGradStops; ++i)
	{
		GradStop grad_stop;
		record >> grad_stop;
		rgGradStops.push_back(grad_stop);
	}
}


} // namespace XLS

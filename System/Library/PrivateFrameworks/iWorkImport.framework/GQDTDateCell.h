/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@class GQDTComputedFormatSpec;

@interface GQDTDateCell : GQDTCell {

	CFDateRef mDate;
	GQDTComputedFormatSpec* mComputedFormat;

}
-(int)readAttributesForDateCell:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(CFStringRef)createStringValue;
-(CFStringRef)getDateFormat;
-(void)dealloc;
-(CFDateRef)date;
@end


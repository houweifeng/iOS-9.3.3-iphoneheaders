/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTableCellBorderStyle, OADFill;

@interface OADTableCellStyle : NSObject {

	OADTableCellBorderStyle* mBorderStyle;
	OADFill* mFill;

}
+(id)defaultStyle;
+(id)defaultFill;
-(void)dealloc;
-(id)description;
-(id)fill;
-(void)setBorderStyle:(id)arg1 ;
-(id)borderStyle;
-(void)setFill:(id)arg1 ;
-(id)shallowCopy;
-(void)applyOverridesFrom:(id)arg1 ;
@end


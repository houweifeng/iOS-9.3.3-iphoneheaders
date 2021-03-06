/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDDrawableLayout.h>

@class TSWPShapeInfo, TSWPShapeLayout;

@interface TSWPTextHostLayout : TSDDrawableLayout {

	TSWPShapeInfo* _editingShapeInfo;
	TSWPShapeLayout* _editingShapeLayout;

}

@property (nonatomic,readonly) TSWPShapeLayout * editingShapeLayout;              //@synthesize editingShapeLayout=_editingShapeLayout - In the implementation block
-(void)updateChildrenFromInfo;
-(TSWPShapeLayout *)editingShapeLayout;
-(void)dealloc;
@end


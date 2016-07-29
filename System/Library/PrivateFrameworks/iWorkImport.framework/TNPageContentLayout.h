/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDLayout.h>

@class TNPageLayout;

@interface TNPageContentLayout : TSDLayout {

	TNPageLayout* mPageLayout;
	unsigned long long mPageNumber;

}

@property (assign) TNPageLayout * pageLayout; 
@property (readonly) unsigned long long pageNumber; 
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)initWithPageLayout:(id)arg1 ;
-(void)setPageLayout:(TNPageLayout *)arg1 ;
-(TNPageLayout *)pageLayout;
-(unsigned long long)pageCount;
-(void)validate;
-(unsigned long long)pageNumber;
@end

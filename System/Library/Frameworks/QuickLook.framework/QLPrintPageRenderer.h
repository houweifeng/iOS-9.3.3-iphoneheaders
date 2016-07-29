/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIPrintPageRenderer.h>

@protocol QLPrintPageRendererDataSource;
@interface QLPrintPageRenderer : UIPrintPageRenderer {

	id<QLPrintPageRendererDataSource> _dataSource;
	long long _cachedNumberOfPages;
	CGSize _sizeWhenNumberOfPagesWasCached;
	BOOL _printingDone;
	long long _numberOfPrintedPages;

}

@property (assign) id<QLPrintPageRendererDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setDataSource:(id<QLPrintPageRendererDataSource>)arg1 ;
-(id)init;
-(id<QLPrintPageRendererDataSource>)dataSource;
-(long long)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)prepareForPrinting;
@end

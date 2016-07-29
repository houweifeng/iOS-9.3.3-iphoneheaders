/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNPrintProperties : NSObject {

	double _headerInset;
	double _footerInset;
	CGSize _unscaledPageSize;
	UIEdgeInsets _printMargins;

}

@property (assign) CGSize unscaledPageSize;                   //@synthesize unscaledPageSize=_unscaledPageSize - In the implementation block
@property (readonly) double pageHeight; 
@property (readonly) double pageWidth; 
@property (assign) UIEdgeInsets printMargins;                 //@synthesize printMargins=_printMargins - In the implementation block
@property (assign,nonatomic) double headerInset;              //@synthesize headerInset=_headerInset - In the implementation block
@property (assign,nonatomic) double footerInset;              //@synthesize footerInset=_footerInset - In the implementation block
+(id)letterSizePrintProperties;
+(id)a4SizePrintProperties;
+(id)letterSizePortraitFormPrintProperties;
+(id)letterSizeLandscapeFormPrintProperties;
+(id)legacyExportPrintProperties;
-(CGRect)pageHeaderFooterRectForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2 footer:(BOOL)arg3 textHeight:(double)arg4 ;
-(CGSize)unscaledPageSize;
-(UIEdgeInsets)printMargins;
-(void)setPrintMargins:(UIEdgeInsets)arg1 ;
-(CGRect)unscaledPageRectForDisplayForPortraitOrientation:(BOOL)arg1 userViewScale:(double)arg2 atPageCoordinate:(SCD_Struct_TS315)arg3 ;
-(id)initWithPageSize:(CGSize)arg1 printMargins:(UIEdgeInsets)arg2 headerInset:(double)arg3 footerInset:(double)arg4 ;
-(CGSize)pageSizeForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2 ;
-(CGRect)contentRectForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2 headerHeight:(double)arg3 footerHeight:(double)arg4 ;
-(CGSize)pageSizeWithGutterForContentScale:(double)arg1 userViewScale:(double)arg2 portraitOrientation:(BOOL)arg3 ;
-(id)initWithPageSize:(CGSize)arg1 printMargins:(UIEdgeInsets)arg2 ;
-(double)contentScaleForIntegralWidthWithContentScale:(double)arg1 portraitOrientation:(BOOL)arg2 ;
-(void)setUnscaledPageSize:(CGSize)arg1 ;
-(void)setHeaderInset:(double)arg1 ;
-(void)setFooterInset:(double)arg1 ;
-(id)initWithPageSize:(CGSize)arg1 contentRect:(CGRect)arg2 ;
-(double)headerInset;
-(double)footerInset;
-(CGRect)p_unscaledContentRectForOrientation:(BOOL)arg1 headerHeight:(double)arg2 footerHeight:(double)arg3 ;
-(CGAffineTransform)p_transformForContentScale:(double)arg1 portraitOrientation:(BOOL)arg2 ;
-(double)pageWidth;
-(double)pageHeight;
@end

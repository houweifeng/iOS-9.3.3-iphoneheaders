/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer, UIView, UILabel, PKPDFView, CAFilter, PKShapeView;

@interface PKPaymentButton : UIButton {

	CAShapeLayer* _layer;
	long long _style;
	long long _type;
	UIView* _container;
	UILabel* _buyLabel;
	PKPDFView* _pdfView;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	CGSize _boundsSize;
	PKShapeView* _maskView;

}
+(Class)layerClass;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2 ;
@end


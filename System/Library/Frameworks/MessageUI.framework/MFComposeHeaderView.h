/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class MFHeaderLabelView, UIView, NSString;

@interface MFComposeHeaderView : UIView {

	id _delegate;
	MFHeaderLabelView* _labelView;
	UIView* _separator;
	UIView* _highlightBackgroundView;
	BOOL _showsHighlightWhenTouched;
	NSString* _navTitle;
	double _labelIndentation;

}

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * navTitle;                            //@synthesize navTitle=_navTitle - In the implementation block
@property (nonatomic,readonly) MFHeaderLabelView * labelView;              //@synthesize labelView=_labelView - In the implementation block
@property (assign,nonatomic) double labelIndentation;                      //@synthesize labelIndentation=_labelIndentation - In the implementation block
@property (assign,nonatomic) BOOL showsHighlightWhenTouched;               //@synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched - In the implementation block
+(id)defaultFont;
+(double)preferredHeight;
+(double)_labelTopPaddingSpecification;
+(double)separatorHeight;
+(id)defaultSeparatorColor;
-(id)_automationID;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canBecomeFirstResponder;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLabelIndentation:(double)arg1 ;
-(double)labelIndentation;
-(double)labelTopPadding;
-(BOOL)showsHighlightWhenTouched;
-(void)handleTouchesEnded;
-(UIEdgeInsets)_recipientViewEdgeInsets;
-(CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1 ;
-(void)refreshPreferredContentSize;
-(id)_baseAttributes;
-(void)setNavTitle:(NSString *)arg1 ;
-(void)setShowsHighlightWhenTouched:(BOOL)arg1 ;
-(id)_highlightedBackgroundView;
-(MFHeaderLabelView *)labelView;
-(NSString *)navTitle;
-(id)labelColor;
@end

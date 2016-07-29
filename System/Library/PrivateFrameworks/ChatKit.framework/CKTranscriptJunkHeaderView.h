/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, _UIBackdropView, UILabel, UIImageView, UIView;

@interface CKTranscriptJunkHeaderView : UIView {

	UIButton* _reportJunkButton;
	UIButton* _ignoreButton;
	_UIBackdropView* _backdropView;
	UILabel* _titleLabel;
	UIImageView* _titleImageView;
	UIView* _titleSeparator;
	UIView* _bottomSeparator;
	UIView* _buttonSeparator;

}

@property (nonatomic,retain) UIButton * reportJunkButton;                 //@synthesize reportJunkButton=_reportJunkButton - In the implementation block
@property (nonatomic,retain) UIButton * ignoreButton;                     //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * titleImageView;                //@synthesize titleImageView=_titleImageView - In the implementation block
@property (nonatomic,retain) UIView * titleSeparator;                     //@synthesize titleSeparator=_titleSeparator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                    //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) UIView * buttonSeparator;                    //@synthesize buttonSeparator=_buttonSeparator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(void)setReportJunkButton:(UIButton *)arg1 ;
-(void)setIgnoreButton:(UIButton *)arg1 ;
-(void)setTitleImageView:(UIImageView *)arg1 ;
-(void)setTitleSeparator:(UIView *)arg1 ;
-(void)setButtonSeparator:(UIView *)arg1 ;
-(UIImageView *)titleImageView;
-(UIButton *)ignoreButton;
-(UIButton *)reportJunkButton;
-(UIView *)titleSeparator;
-(UIView *)buttonSeparator;
@end

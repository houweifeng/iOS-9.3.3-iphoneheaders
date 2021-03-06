/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, UIImage;


@protocol _UISwitchInternalViewProtocol <NSObject>
@property (nonatomic,retain) UIColor * onTintColor; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * thumbTintColor; 
@property (nonatomic,retain) UIImage * onImage; 
@property (nonatomic,retain) UIImage * offImage; 
@property (assign,nonatomic) BOOL on; 
@property (assign,nonatomic) BOOL useAlternateColor; 
@required
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(void)setThumbTintColor:(id)arg1;
-(UIColor *)thumbTintColor;
-(void)_setPressed:(BOOL)arg1;
-(void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
-(void)_cleanUpAfterAnimating;
-(void)_setProgress:(double)arg1 animated:(BOOL)arg2 withDuration:(double)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5;
-(void)_setProgress:(double)arg1;
-(void)_prepareForInteraction;
-(void)setSendAction:(BOOL)arg1;
-(void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(UIColor *)onTintColor;
-(void)setOnTintColor:(id)arg1;
-(UIImage *)onImage;
-(void)setOnImage:(id)arg1;
-(UIImage *)offImage;
-(void)setOffImage:(id)arg1;
-(BOOL)on;
-(void)setOn:(BOOL)arg1;
-(BOOL)useAlternateColor;
-(void)setUseAlternateColor:(BOOL)arg1;

@end


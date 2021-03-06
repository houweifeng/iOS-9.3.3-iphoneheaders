/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardFoundation/SBFButton.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/SBUIControlCenterControl.h>

@protocol SBUIControlCenterButtonDelegate;
@class UIVisualEffect, UIImageView, UIVisualEffectView, UIImage, NSString;

@interface SBUIControlCenterButton : SBFButton <_UISettingsKeyObserver, SBUIControlCenterControl> {

	UIEdgeInsets _bgCapInsets;
	UIVisualEffect* _normalStateEffect;
	UIVisualEffect* _highlightedStateEffect;
	UIVisualEffect* _disabledStateEffect;
	UIImageView* _backgroundImageView;
	UIImageView* _glyphImageView;
	UIVisualEffectView* _backgroundEffectView;
	BOOL _useSmallButton;
	BOOL _isCircleButton;
	BOOL _isRectButton;
	id<SBUIControlCenterButtonDelegate> _delegate;
	UIImage* _normalBGImage;
	UIImage* _sourceGlyphImage;
	UIImage* _sourceSelectedGlyphImage;
	NSString* _glyphName;
	double _naturalHeight;

}

@property (assign,nonatomic,__weak) id<SBUIControlCenterButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useSmallButton;                                              //@synthesize useSmallButton=_useSmallButton - In the implementation block
@property (assign,nonatomic) BOOL isCircleButton;                                              //@synthesize isCircleButton=_isCircleButton - In the implementation block
@property (assign,nonatomic) BOOL isRectButton;                                                //@synthesize isRectButton=_isRectButton - In the implementation block
@property (nonatomic,retain) UIImage * normalBGImage;                                          //@synthesize normalBGImage=_normalBGImage - In the implementation block
@property (nonatomic,retain) UIImage * sourceGlyphImage;                                       //@synthesize sourceGlyphImage=_sourceGlyphImage - In the implementation block
@property (nonatomic,retain) UIImage * sourceSelectedGlyphImage;                               //@synthesize sourceSelectedGlyphImage=_sourceSelectedGlyphImage - In the implementation block
@property (nonatomic,copy) NSString * glyphName;                                               //@synthesize glyphName=_glyphName - In the implementation block
@property (assign,nonatomic) double naturalHeight;                                             //@synthesize naturalHeight=_naturalHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_circleBackgroundImageForSize:(CGSize)arg1 ;
+(id)_roundRectBackgroundImageForSize:(CGSize)arg1 ;
+(id)_circleBackgroundImage;
+(id)_buttonWithBGImage:(id)arg1 glyphImage:(id)arg2 naturalHeight:(double)arg3 ;
+(id)_roundRectBackgroundImage;
+(id)_smallCircleBackgroundImage;
+(id)_smallRoundRectBackgroundImage;
+(id)circularButton;
+(id)roundRectButton;
-(NSString *)glyphName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBUIControlCenterButtonDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SBUIControlCenterButtonDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 ;
-(id)_backgroundImage;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)_drawingAsSelected;
-(void)_updateForStateChange;
-(void)setIsCircleButton:(BOOL)arg1 ;
-(void)setIsRectButton:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(double)arg4 ;
-(void)_setBackgroundImage:(id)arg1 naturalHeight:(double)arg2 ;
-(void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2 name:(id)arg3 ;
-(void)_pressAction;
-(void)_updateForReduceTransparencyChange;
-(BOOL)isCircleButton;
-(BOOL)useSmallButton;
-(BOOL)isRectButton;
-(CGRect)_rectForGlyph:(id)arg1 centeredInRect:(CGRect)arg2 ;
-(id)_controlStateStringFromState:(long long)arg1 ;
-(void)_updateBackgroundForStateChange;
-(UIImage *)normalBGImage;
-(UIImage *)sourceGlyphImage;
-(void)_updateGlyphForStateChange;
-(UIImage *)sourceSelectedGlyphImage;
-(id)_glyphImageForState:(long long)arg1 ;
-(id)_backgroundImageWithGlyphImage:(id)arg1 state:(long long)arg2 ;
-(void)setSourceGlyphImage:(UIImage *)arg1 ;
-(void)setSourceSelectedGlyphImage:(UIImage *)arg1 ;
-(void)setGlyphName:(NSString *)arg1 ;
-(void)setNormalBGImage:(UIImage *)arg1 ;
-(void)setNaturalHeight:(double)arg1 ;
-(void)setUseSmallButton:(BOOL)arg1 ;
-(void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2 ;
-(void)_updateEffects;
-(double)naturalHeight;
-(long long)_currentState;
@end


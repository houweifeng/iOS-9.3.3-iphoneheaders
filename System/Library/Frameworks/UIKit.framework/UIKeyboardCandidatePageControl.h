/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl;

@interface UIKeyboardCandidatePageControl : UIView {

	UIKeyboardCandidateBarSegmentControl* _pageControl;
	BOOL _usingVerticalArrows;

}
+(id)imageWithColor:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setUseVerticalArrows:(BOOL)arg1 ;
-(void)_changePage:(id)arg1 ;
-(void)updatePageControlWithStatus:(BOOL)arg1 rightControlButtonEnabled:(BOOL)arg2 ;
@end


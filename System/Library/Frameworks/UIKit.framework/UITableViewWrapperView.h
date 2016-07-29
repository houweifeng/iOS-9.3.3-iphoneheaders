/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSArray;

@interface UITableViewWrapperView : UIScrollView {

	NSMutableArray* _stuckToBackViews;

}

@property (nonatomic,readonly) NSArray * stuckToBackViews;              //@synthesize stuckToBackViews=_stuckToBackViews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(BOOL)_forwardsToParentScroller;
-(void)handleSwipeBeginning:(id)arg1 ;
-(void)_stickViewToBack:(id)arg1 ;
-(void)_unstickView:(id)arg1 ;
-(NSArray *)stuckToBackViews;
@end

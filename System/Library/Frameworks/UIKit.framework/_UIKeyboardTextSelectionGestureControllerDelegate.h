/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;


@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@optional
-(BOOL)hasMarkedText;
-(double)timestampOfLastTouchesEnded;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3;
-(void)setTwoFingerTapTimestamp:(double)arg1;
-(BOOL)transitionInProgress;
-(void)willBeginGesture;
-(void)didEndGesture;

@required
-(UIKeyboardTaskQueue *)taskQueue;
-(_UIKeyboardTextSelectionController *)textSelectionController;

@end

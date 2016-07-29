/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIButton.h>

@interface SBUIButton : UIButton {

	UIEdgeInsets _hitAreaAdjustments;

}

@property (assign,nonatomic) UIEdgeInsets hitAreaAdjustments;              //@synthesize hitAreaAdjustments=_hitAreaAdjustments - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHitAreaAdjustments:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitAreaAdjustments;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegionMapEntry.h>

@class UIFocusContainerGuide;

@interface _UIFocusContainerGuideMapEntry : _UIFocusRegionMapEntry {

	UIFocusContainerGuide* _focusContainerGuide;
	double _axisAlignedDistanceFromFocusedRect;
	CGRect _focusContainmentFrame;

}

@property (assign,nonatomic,__weak) UIFocusContainerGuide * focusContainerGuide;              //@synthesize focusContainerGuide=_focusContainerGuide - In the implementation block
@property (assign,nonatomic) CGRect focusContainmentFrame;                                    //@synthesize focusContainmentFrame=_focusContainmentFrame - In the implementation block
@property (assign,nonatomic) double axisAlignedDistanceFromFocusedRect;                       //@synthesize axisAlignedDistanceFromFocusedRect=_axisAlignedDistanceFromFocusedRect - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(void)setFocusContainmentFrame:(CGRect)arg1 ;
-(UIFocusContainerGuide *)focusContainerGuide;
-(CGRect)focusContainmentFrame;
-(void)setAxisAlignedDistanceFromFocusedRect:(double)arg1 ;
-(double)axisAlignedDistanceFromFocusedRect;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 ;
-(id)visualRepresentationColor;
@end

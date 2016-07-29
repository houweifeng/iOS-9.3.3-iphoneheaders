/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface CompassRotatingView : UIView {

	double _compassHeading;
	double _angle;

}

@property (assign,nonatomic) double compassHeading;              //@synthesize compassHeading=_compassHeading - In the implementation block
@property (nonatomic,readonly) double angle;                     //@synthesize angle=_angle - In the implementation block
-(double)angle;
-(double)compassHeading;
-(void)setCompassHeading:(double)arg1 ;
@end

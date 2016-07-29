/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKAnimatableObjectPropertyAnimation.h>

@interface HKFloatPropertyAnimation : HKAnimatableObjectPropertyAnimation {

	float _startValue;
	float _endValue;
	float _currentValue;

}

@property (nonatomic,readonly) float startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) float endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) float currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 customTimingFunction:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_currentValue;
-(float)currentValue;
-(float)endValue;
-(float)startValue;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_endValue;
-(id)_startValue;
-(void)_setEndValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
@end

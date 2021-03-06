/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VKAnimation.h>

@interface VKDynamicAnimation : VKAnimation {

	/*^block*/id _dynamicStepHandler;
	double _lastTimestamp;
	BOOL _resuming;

}

@property (nonatomic,copy) id dynamicStepHandler;              //@synthesize dynamicStepHandler=_dynamicStepHandler - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)resume;
-(void)pause;
-(void)onTimerFired:(double)arg1 ;
-(BOOL)runsForever;
-(void)setRunsForever:(BOOL)arg1 ;
-(id)dynamicStepHandler;
-(void)setDynamicStepHandler:(id)arg1 ;
@end


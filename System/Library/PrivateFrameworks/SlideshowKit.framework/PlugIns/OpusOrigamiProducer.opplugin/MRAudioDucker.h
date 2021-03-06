/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRAudioDucker.h>

@class NSString;

@interface MRAudioDucker : NSObject <MRAudioDucker> {

	double _duration;
	double _duckInDuration;
	double _duckOutDuration;
	double _duckLevel;
	double _time;
	double _parentDuration;
	long long _priority;
	double _duckInTime;
	double _duckOutTime;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double duckInTime;                     //@synthesize duckInTime=_duckInTime - In the implementation block
@property (assign,nonatomic) double duckOutTime;                    //@synthesize duckOutTime=_duckOutTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duckLevel;                      //@synthesize duckLevel=_duckLevel - In the implementation block
@property (assign,nonatomic) double duckInDuration;                 //@synthesize duckInDuration=_duckInDuration - In the implementation block
@property (assign,nonatomic) double duckOutDuration;                //@synthesize duckOutDuration=_duckOutDuration - In the implementation block
@property (assign,nonatomic) double parentDuration;                 //@synthesize parentDuration=_parentDuration - In the implementation block
@property (assign,nonatomic) long long priority;                    //@synthesize priority=_priority - In the implementation block
@property (readonly) double currentDuckLevel; 
-(void)setDuckOutTime:(double)arg1 ;
-(void)setDuckInTime:(double)arg1 ;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(double)duckInTime;
-(void)setDuckLevel:(double)arg1 ;
-(double)duckLevel;
-(double)duckOutDuration;
-(double)duckInDuration;
-(void)setParentDuration:(double)arg1 ;
-(double)parentDuration;
-(double)duckOutTime;
-(double)currentDuckLevel;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNLockScreenDimmingBehavior : NSObject {

	int _dimmingState;
	BOOL _userLockedScreenForCurrentManeuver;
	unsigned long long _lastSeenState;
	NSArray* _lastSeenInstructions;
	int _lastSeenManeuver;
	unsigned long long _lastSeenAlert;
	BOOL _wasWithinManeuver;
	BOOL _guidanceAffectsDimming;

}

@property (nonatomic,readonly) int dimmingState;                            //@synthesize dimmingState=_dimmingState - In the implementation block
@property (assign,nonatomic) BOOL guidanceAffectsDimming;                   //@synthesize guidanceAffectsDimming=_guidanceAffectsDimming - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenState;              //@synthesize lastSeenState=_lastSeenState - In the implementation block
@property (nonatomic,copy) NSArray * lastSeenInstructions;                  //@synthesize lastSeenInstructions=_lastSeenInstructions - In the implementation block
@property (assign,nonatomic) int lastSeenManeuver;                          //@synthesize lastSeenManeuver=_lastSeenManeuver - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenAlert;              //@synthesize lastSeenAlert=_lastSeenAlert - In the implementation block
@property (assign,nonatomic) BOOL wasWithinManeuver;                        //@synthesize wasWithinManeuver=_wasWithinManeuver - In the implementation block
-(void)userDidLockScreen;
-(void)setGuidanceAffectsDimming:(BOOL)arg1 ;
-(void)didReceiveGuidanceUpdateWithNewState:(unsigned long long)arg1 maneuver:(int)arg2 instructions:(id)arg3 alert:(unsigned long long)arg4 ;
-(void)setWasWithinManeuver:(BOOL)arg1 ;
-(BOOL)wasWithinManeuver;
-(BOOL)guidanceAffectsDimming;
-(NSArray *)lastSeenInstructions;
-(void)setLastSeenAlert:(unsigned long long)arg1 ;
-(void)setLastSeenState:(unsigned long long)arg1 ;
-(int)lastSeenManeuver;
-(void)setLastSeenInstructions:(NSArray *)arg1 ;
-(void)setLastSeenManeuver:(int)arg1 ;
-(unsigned long long)lastSeenAlert;
-(unsigned long long)lastSeenState;
-(int)dimmingState;
-(id)init;
@end


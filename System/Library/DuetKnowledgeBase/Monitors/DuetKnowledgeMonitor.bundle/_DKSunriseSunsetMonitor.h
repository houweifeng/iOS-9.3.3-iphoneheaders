/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, CLLocationManager, NSString;

@interface _DKSunriseSunsetMonitor : _DKMonitor <CLLocationManagerDelegate> {

	int _authorizationStatus;
	NSObject*<OS_dispatch_source> _updateTimer;
	unsigned long long _updateInterval;
	CLLocationManager* _manager;
	SCPreferencesRef _radioPrefs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> updateTimer;              //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) unsigned long long updateInterval;                      //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) CLLocationManager * manager;                            //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) SCPreferencesRef radioPrefs;                            //@synthesize radioPrefs=_radioPrefs - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithLocation:(id)arg1 authorizationStatus:(int)arg2 ;
+(id)eventStream;
+(id)entitlements;
-(void)unprotectedUpdateSunriseSunsetTime:(id)arg1 ;
-(void)respondToTimeChange:(id)arg1 ;
-(void)respondToAirplaneModeChange:(id)arg1 ;
-(BOOL)previousSunrise:(id)arg1 differsSignificantFromCurrent:(id)arg2 ;
-(void)setRadioPrefs:(SCPreferencesRef)arg1 ;
-(SCPreferencesRef)radioPrefs;
-(CLLocationManager *)manager;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(unsigned long long)updateInterval;
-(void)setUpdateInterval:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)updateTimer;
-(void)setUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)authorizationStatus;
-(id)loadState;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)saveState;
-(BOOL)isAirplaneModeEnabled;
-(void)setAuthorizationStatus:(int)arg1 ;
-(void)setManager:(CLLocationManager *)arg1 ;
@end


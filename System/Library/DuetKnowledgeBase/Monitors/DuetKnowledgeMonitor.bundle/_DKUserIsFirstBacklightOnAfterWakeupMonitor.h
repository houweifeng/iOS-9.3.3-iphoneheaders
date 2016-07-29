/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <DuetKnowledgeMonitor/_DKNotificationReceiver.h>

@class _DKPeriod, NSString;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver> {

	_DKPeriod* eligibleForNotification;
	int displayStatusNotifyToken;
	int internalSettingChangedNotificationToken;
	BOOL _enabled;
	BOOL _FirstWakeUINotificationEnabled;
	BOOL _SoftwareUpdateUINotificationEnabled;

}

@property (assign,nonatomic) BOOL FirstWakeUINotificationEnabled;                                                             //@synthesize FirstWakeUINotificationEnabled=_FirstWakeUINotificationEnabled - In the implementation block
@property (assign,setter=oftwareUpdateUINotificationEnabled,nonatomic) BOOL SoftwareUpdateUINotificationEnabled;              //@synthesize SoftwareUpdateUINotificationEnabled=_SoftwareUpdateUINotificationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchMostRecentPastEventForStream:(id)arg1 ;
+(id)prettyPrintDateAsLocalTime:(id)arg1 ;
+(id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+(id)eventStream;
-(id)getNextSWUpdatePrediction;
-(void)receiveNotificationEvent:(id)arg1 ;
-(void)unregisterHandleBacklightEvents;
-(void)showUINotification:(id)arg1 ;
-(BOOL)FirstWakeUINotificationEnabled;
-(void)setInternalSettingsChangedNotficationHandler;
-(void)handleBacklightTurnedOffEvent;
-(void)handleScreenUnlockEvent;
-(void)registerHandleBacklightEvents;
-(BOOL)isFirstBacklightOn;
-(id)firstWakeupEventWithValue:(BOOL)arg1 ;
-(void)showFirstWakeupUINotification;
-(BOOL)isUINotificationEnabledForKey:(id)arg1 ;
-(void)recordFirstWakeup:(id)arg1 ;
-(BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
-(void)setFirstWakeUINotificationEnabled:(BOOL)arg1 ;
-(void)setSoftwareUpdateUINotificationEnabled:(BOOL)arg1 ;
-(BOOL)eligibleForFirstWakeUINotification;
-(BOOL)SoftwareUpdateUINotificationEnabled;
-(void)showSoftwareUpdateUINotification;
-(void)setupNotificationEligiblityPeriod;
-(id)convertUTCToLocalTimeString:(id)arg1 ;
-(void)handleBacklightTurnedOnEvent;
-(void)setUINotificationEligibility;
-(void)stop;
-(void)start;
-(BOOL)isInternalBuild;
@end

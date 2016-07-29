/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableSet;

@interface SBOrientationLockManager : NSObject {

	long long _userLockedOrientation;
	long long _previousLockedOrientation;
	CFRunLoopObserverRef _runLoopObserver;
	NSMutableSet* _lockOverrideReasons;

}
+(id)sharedInstance;
-(void)restoreStateFromPrefs;
-(void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2 ;
-(void)setLockOverrideEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isUserLocked;
-(BOOL)isEffectivelyLocked;
-(long long)effectiveLockedOrientation;
-(void)lock:(long long)arg1 ;
-(void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(BOOL)arg2 changes:(/*^block*/id)arg3 ;
-(void)_updateLockStateWithChanges:(/*^block*/id)arg1 ;
-(BOOL)lockOverrideEnabled;
-(void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(BOOL)arg2 ;
-(void)_handler_runLoopObserverDispose;
-(long long)userLockOrientation;
-(void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2 ;
-(void)updateLockOverrideForCurrentDeviceOrientation;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
@end

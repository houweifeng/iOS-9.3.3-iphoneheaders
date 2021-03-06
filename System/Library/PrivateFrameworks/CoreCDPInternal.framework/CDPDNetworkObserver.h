/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class NSLock, NSMutableDictionary, NSObject;

@interface CDPDNetworkObserver : NSObject {

	BOOL _networkIsReachable;
	NSLock* _clientsLock;
	NSMutableDictionary* _clientsByUUID;
	SCNetworkReachabilityRef _networkReach;
	NSObject*<OS_dispatch_queue> _eventQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)addNetworkObserverWithEventHandler:(/*^block*/id)arg1 ;
-(void)startObservingNetwork;
-(void)_networkReachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(void)removeObserverWithToken:(id)arg1 ;
@end


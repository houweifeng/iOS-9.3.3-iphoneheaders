/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverClientInterface.h>
#import <libobjc.A.dylib/BBObserverServerInterface.h>

@protocol OS_dispatch_queue;
@class BBZeroingWeakReference, NSXPCConnection, NSObject;

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {

	BOOL _isValid;
	BOOL _isEstablished;
	BBZeroingWeakReference* _observerZWR;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) BBZeroingWeakReference * observerZWR;              //@synthesize observerZWR=_observerZWR - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
+(id)xpcInterface;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)observer;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3 ;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2 ;
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)requestTodayBulletinsForSectionID:(id)arg1 ;
-(void)requestFutureBulletinsForSectionID:(id)arg1 ;
-(void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getActiveAlertBehaviorOverridesWithHandler:(/*^block*/id)arg1 ;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1 ;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPrimaryAttachmentDataForBulletinID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 ;
-(void)clearSection:(id)arg1 ;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3 ;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)updateSectionOrderRule:(id)arg1 ;
-(void)updateSectionOrder:(id)arg1 ;
-(void)updateSectionInfo:(id)arg1 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)noteAlertBehaviorOverridesChanged:(id)arg1 ;
-(void)noteAlertBehaviorOverrideStateChanged:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 ;
-(void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getObserverDebugInfo:(/*^block*/id)arg1 ;
-(BOOL)established;
-(BBZeroingWeakReference *)observerZWR;
-(void)setObserverZWR:(BBZeroingWeakReference *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
@end

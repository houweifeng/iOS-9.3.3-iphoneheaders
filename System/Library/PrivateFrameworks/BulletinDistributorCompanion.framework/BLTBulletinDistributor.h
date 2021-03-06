/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/BLTCompanionServer.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class BLTRemoteGizmoClient, BBObserver, NSMutableDictionary, NSMutableSet, BLTBulletinDistributorSubscriberList, BLTAttachmentHashCache, BLTWatchKitAppList, BLTSettingSync, NSDate, NSString;

@interface BLTBulletinDistributor : NSObject <BBObserverDelegate, BLTCompanionServer, NSXPCListenerDelegate> {

	BOOL _standaloneTestModeEnabled;
	BLTRemoteGizmoClient* _gizmoConnection;
	BBObserver* _bbObserver;
	NSMutableDictionary* _bulletins;
	NSMutableSet* _noticesFeed;
	NSMutableSet* _lockScreenFeed;
	BLTBulletinDistributorSubscriberList* _subscribers;
	BLTAttachmentHashCache* _attachmentHashCache;
	BLTWatchKitAppList* _watchKitAppList;
	BLTSettingSync* _settingSync;
	NSDate* _startupTime;
	NSString* _bundleRootPath;

}

@property (nonatomic,retain) BLTRemoteGizmoClient * gizmoConnection;                          //@synthesize gizmoConnection=_gizmoConnection - In the implementation block
@property (nonatomic,readonly) BOOL isStandaloneTestModeEnabled; 
@property (nonatomic,retain) BBObserver * bbObserver;                                         //@synthesize bbObserver=_bbObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletins;                                 //@synthesize bulletins=_bulletins - In the implementation block
@property (nonatomic,retain) NSMutableSet * noticesFeed;                                      //@synthesize noticesFeed=_noticesFeed - In the implementation block
@property (nonatomic,retain) NSMutableSet * lockScreenFeed;                                   //@synthesize lockScreenFeed=_lockScreenFeed - In the implementation block
@property (nonatomic,retain) BLTBulletinDistributorSubscriberList * subscribers;              //@synthesize subscribers=_subscribers - In the implementation block
@property (nonatomic,retain) BLTAttachmentHashCache * attachmentHashCache;                    //@synthesize attachmentHashCache=_attachmentHashCache - In the implementation block
@property (nonatomic,retain) BLTWatchKitAppList * watchKitAppList;                            //@synthesize watchKitAppList=_watchKitAppList - In the implementation block
@property (nonatomic,retain) BLTSettingSync * settingSync;                                    //@synthesize settingSync=_settingSync - In the implementation block
@property (nonatomic,retain) NSDate * startupTime;                                            //@synthesize startupTime=_startupTime - In the implementation block
@property (nonatomic,copy) NSString * bundleRootPath;                                         //@synthesize bundleRootPath=_bundleRootPath - In the implementation block
@property (assign,nonatomic) BOOL standaloneTestModeEnabled;                                  //@synthesize standaloneTestModeEnabled=_standaloneTestModeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDistributor;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSDate *)startupTime;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1 ;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1 ;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2 ;
-(id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4 ;
-(CGSize)observer:(id)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)disableStandaloneTestMode;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 ;
-(void)_reconnectObserver;
-(BLTRemoteGizmoClient *)gizmoConnection;
-(void)_handleSyncStateChanged:(id)arg1 ;
-(void)handleAction:(id)arg1 ;
-(void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 ;
-(void)handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 ;
-(void)handlePairedDeviceIdentifier:(id)arg1 carry:(BOOL)arg2 ;
-(BOOL)shouldSuppressLightsAndSirensNow;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BLTBulletinDistributorSubscriberList *)subscribers;
-(void)setSubscribers:(BLTBulletinDistributorSubscriberList *)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendSectionInfoWithSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAllSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)clearSectionInfoSentCache;
-(BOOL)isStandaloneTestModeEnabled;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 considerSubtype:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)settingOverrides;
-(id)originalSettings;
-(id)overriddenSettings;
-(void)_loadPingSubscriberBundles;
-(void)_performSync;
-(void)_startBulletinListening;
-(void)_sendCurrentBulletinList;
-(void)_handleInitialSyncStateCompleteChanged:(id)arg1 ;
-(BOOL)_willNanoPresent:(unsigned long long)arg1 ;
-(void)performInitialSyncWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendCurrentBulletinIdentifiers;
-(void)_reloadBulletinsWithCompletion:(/*^block*/id)arg1 ;
-(void)_rememberBulletin:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(void)_handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 finalReply:(BOOL)arg4 ;
-(void)_notifyGizmoOfCancelBulletin:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 withBulletinDate:(id)arg4 ;
-(BOOL)_isObsoleteBulletin:(id)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 attachment:(id)arg5 attachmentType:(long long)arg6 withReply:(/*^block*/id)arg7 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 attachment:(id)arg5 attachmentType:(long long)arg6 alwaysSend:(BOOL)arg7 withReply:(/*^block*/id)arg8 ;
-(BOOL)_willNanoPresent:(unsigned long long)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3 ;
-(void)_pingSubscriberWithBulletin:(id)arg1 ;
-(unsigned long long)_nanoPresentableFeedFromPhoneFeed:(unsigned long long)arg1 ;
-(void)setReplyBlock:(/*^block*/id)arg1 forSection:(id)arg2 bulletin:(id)arg3 publicationDate:(id)arg4 ;
-(void)_notifyGizmoOfBulletin:(id)arg1 forFeed:(unsigned long long)arg2 updateType:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 shouldSendReplyIfNeeded:(BOOL)arg5 attachment:(id)arg6 attachmentType:(long long)arg7 ;
-(void)_handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 fromGizmo:(BOOL)arg6 finalReply:(BOOL)arg7 ;
-(id)_bulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 ;
-(void)setGizmoConnection:(BLTRemoteGizmoClient *)arg1 ;
-(BBObserver *)bbObserver;
-(void)setBbObserver:(BBObserver *)arg1 ;
-(NSMutableSet *)noticesFeed;
-(void)setNoticesFeed:(NSMutableSet *)arg1 ;
-(NSMutableSet *)lockScreenFeed;
-(void)setLockScreenFeed:(NSMutableSet *)arg1 ;
-(BLTAttachmentHashCache *)attachmentHashCache;
-(void)setAttachmentHashCache:(BLTAttachmentHashCache *)arg1 ;
-(BLTWatchKitAppList *)watchKitAppList;
-(void)setWatchKitAppList:(BLTWatchKitAppList *)arg1 ;
-(BLTSettingSync *)settingSync;
-(void)setSettingSync:(BLTSettingSync *)arg1 ;
-(void)setStartupTime:(NSDate *)arg1 ;
-(NSString *)bundleRootPath;
-(void)setBundleRootPath:(NSString *)arg1 ;
-(BOOL)standaloneTestModeEnabled;
-(void)setStandaloneTestModeEnabled:(BOOL)arg1 ;
-(NSMutableDictionary *)bulletins;
-(void)setBulletins:(NSMutableDictionary *)arg1 ;
@end


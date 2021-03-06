/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol SVServerBrowserDelegate;
@class NSNetServiceBrowser, NSMutableSet, NSMutableDictionary, NSString;

@interface SVServerBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	id<SVServerBrowserDelegate> _delegate;
	NSNetServiceBrowser* _netServiceBrowser;
	NSMutableSet* _resolvingNetServices;
	NSMutableSet* _resolvedNetServices;
	NSMutableDictionary* _serversByNetServices;
	NSMutableSet* _discoveredServers;

}

@property (assign,nonatomic,__weak) id<SVServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * netServiceBrowser;                  //@synthesize netServiceBrowser=_netServiceBrowser - In the implementation block
@property (retain) NSMutableSet * resolvingNetServices;                                //@synthesize resolvingNetServices=_resolvingNetServices - In the implementation block
@property (retain) NSMutableSet * resolvedNetServices;                                 //@synthesize resolvedNetServices=_resolvedNetServices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serversByNetServices;               //@synthesize serversByNetServices=_serversByNetServices - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveredServers;                         //@synthesize discoveredServers=_discoveredServers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)browserWithSearchType:(id)arg1 ;
-(id)initWithSearchType:(id)arg1 ;
-(NSMutableDictionary *)serversByNetServices;
-(void)setNetServiceBrowser:(NSNetServiceBrowser *)arg1 ;
-(void)setResolvedNetServices:(NSMutableSet *)arg1 ;
-(void)setResolvingNetServices:(NSMutableSet *)arg1 ;
-(NSMutableSet *)resolvedNetServices;
-(void)setDiscoveredServers:(NSMutableSet *)arg1 ;
-(void)setServersByNetServices:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)resolvingNetServices;
-(NSMutableSet *)discoveredServers;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)setDelegate:(id<SVServerBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id<SVServerBrowserDelegate>)delegate;
-(NSNetServiceBrowser *)netServiceBrowser;
@end


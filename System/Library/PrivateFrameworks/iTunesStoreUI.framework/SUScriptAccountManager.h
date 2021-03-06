/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock, NSArray;

@interface SUScriptAccountManager : NSObject {

	NSMutableArray* _accounts;
	NSLock* _lock;

}

@property (retain,readonly) NSArray * accounts; 
+(void)endAccountManagerSessionForObject:(id)arg1 ;
+(id)beginAccountManagerSessionForObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)accountForDSID:(id)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(NSArray *)accounts;
-(void)_ntsReloadAccounts;
@end


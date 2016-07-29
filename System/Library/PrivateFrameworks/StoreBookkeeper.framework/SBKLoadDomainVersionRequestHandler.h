/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKSyncRequestHandler.h>
#import <libobjc.A.dylib/SBKSyncTransactionProcessing.h>

@class SBKSyncTransaction, NSString;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing> {

	BOOL _loadsRemoteItemCount;
	unsigned long long _responseItemCount;
	unsigned long long _itemCount;
	SBKSyncTransaction* _transaction;

}

@property (assign) BOOL loadsRemoteItemCount;                           //@synthesize loadsRemoteItemCount=_loadsRemoteItemCount - In the implementation block
@property (readonly) unsigned long long responseItemCount;              //@synthesize responseItemCount=_responseItemCount - In the implementation block
@property (copy) NSString * responseDomainVersion; 
@property (assign) unsigned long long itemCount;                        //@synthesize itemCount=_itemCount - In the implementation block
@property (retain) SBKSyncTransaction * transaction;                    //@synthesize transaction=_transaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)conflictDetectionType;
-(void)setTransaction:(SBKSyncTransaction *)arg1 ;
-(void)setItemCount:(unsigned long long)arg1 ;
-(unsigned long long)itemCount;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)loadsRemoteItemCount;
-(void)setLoadsRemoteItemCount:(BOOL)arg1 ;
-(unsigned long long)responseItemCount;
-(SBKSyncTransaction *)transaction;
@end

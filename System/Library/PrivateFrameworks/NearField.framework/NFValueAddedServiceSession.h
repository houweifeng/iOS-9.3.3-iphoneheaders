/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFValueAddedServiceSessionCallbacks.h>

@class NFWeakReference, NSString;

@interface NFValueAddedServiceSession : NFSession <NFValueAddedServiceSessionCallbacks> {

	NFWeakReference* _delegate;

}

@property (assign) id<NFValueAddedServiceSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<NFValueAddedServiceSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<NFValueAddedServiceSessionDelegate>)delegate;
-(void)endSession;
-(void)setHostCards:(id)arg1 ;
-(void)didStartSession:(id)arg1 ;
-(void)didSelectValueAddedService:(BOOL)arg1 ;
-(void)didPerformValueAddedServiceTransactions:(id)arg1 ;
-(BOOL)startHostCardEmulation;
-(void)_didError:(id)arg1 ;
-(BOOL)stopHostCardEmulation;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FTMessageQueueDelegate;
@class NSMutableArray, IDSBaseMessage, NSArray;

@interface FTMessageQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableArray* _addDates;
	id<FTMessageQueueDelegate> _delegate;

}

@property (readonly) IDSBaseMessage * topMessage; 
@property (readonly) long long count; 
@property (readonly) NSArray * messages; 
@property (assign) id<FTMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * _queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * _addDates;                       //@synthesize addDates=_addDates - In the implementation block
-(void)setDelegate:(id<FTMessageQueueDelegate>)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)init;
-(id<FTMessageQueueDelegate>)delegate;
-(NSMutableArray *)_queue;
-(void)set_queue:(NSMutableArray *)arg1 ;
-(IDSBaseMessage *)topMessage;
-(void)_timeoutHit;
-(void)_clearTimeout;
-(void)_setTimeout;
-(id)dequeueTopMessage;
-(BOOL)addMessage:(id)arg1 ;
-(BOOL)removeMessage:(id)arg1 ;
-(NSMutableArray *)_addDates;
-(void)set_addDates:(NSMutableArray *)arg1 ;
-(NSArray *)messages;
-(void)removeAllMessages;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSMutableArray;

@interface IMFuture : NSObject {

	BOOL _cancelled;
	BOOL _hasValue;
	id _value;
	NSError* _error;
	NSMutableArray* _waitingBlocks;

}

@property (nonatomic,retain) id value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL hasValue;                               //@synthesize hasValue=_hasValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitingBlocks;              //@synthesize waitingBlocks=_waitingBlocks - In the implementation block
-(void)_notifyWithValue:(id)arg1 error:(id)arg2 ;
-(NSMutableArray *)waitingBlocks;
-(void)get:(/*^block*/id)arg1 ;
-(void)getBeforeDate:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)getBeforeTimeIntervalFromNow:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)setWaitingBlocks:(NSMutableArray *)arg1 ;
-(void)cancel;
-(id)init;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end


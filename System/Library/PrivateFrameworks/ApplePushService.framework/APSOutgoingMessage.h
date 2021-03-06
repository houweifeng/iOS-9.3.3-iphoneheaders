/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ApplePushService/APSMessage.h>

@interface APSOutgoingMessage : APSMessage

@property (assign,nonatomic) unsigned long long timeout; 
@property (assign,getter=isCritical,nonatomic) BOOL critical; 
@property (assign,nonatomic) unsigned long long payloadFormat; 
@property (assign,nonatomic) unsigned long long payloadLength; 
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveSendTimeout;
-(id)eagernessTimeoutTime;
-(BOOL)isEager;
-(id)sendTimeoutTime;
-(BOOL)wasSent;
-(long long)sendInterface;
-(void)setSendInterface:(long long)arg1 ;
-(unsigned long long)payloadFormat;
-(unsigned long long)payloadLength;
-(void)setPayloadLength:(unsigned long long)arg1 ;
-(id)senderTokenName;
-(void)setSenderTokenName:(id)arg1 ;
-(void)setPayloadFormat:(unsigned long long)arg1 ;
-(void)setTimedOut:(BOOL)arg1 ;
-(BOOL)hasTimedOut;
-(unsigned long long)timeout;
-(BOOL)wasCancelled;
-(unsigned long long)messageID;
-(void)setMessageID:(unsigned long long)arg1 ;
-(void)setSent:(BOOL)arg1 ;
-(BOOL)isCritical;
-(void)setCritical:(BOOL)arg1 ;
@end


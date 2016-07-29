/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOLogAdaptor <NSObject>
@optional
-(void)disableLogMsgInstrumentation;
-(void)enableLogMsgInstrumentation;
-(void)adaptorDidGetAdded:(id)arg1;
-(void)adaptorWillGetAdded:(id)arg1;
-(void)adaptorWillGetRemoved:(id)arg1;
-(void)adaptorDidGetRemoved:(id)arg1;

@required
-(void)flushLogs;
-(void)queueLogMessage:(id)arg1;
-(BOOL)isLogFrameworkAdaptor;
-(BOOL)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2;
-(id)adaptorQueue;

@end

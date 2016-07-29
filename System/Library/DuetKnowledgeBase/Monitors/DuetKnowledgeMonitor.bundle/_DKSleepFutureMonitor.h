/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@protocol _DKKnowledgeStoreExecuteProtocol;
@class NSDictionary, NSObject;

@interface _DKSleepFutureMonitor : _DKMonitor {

	NSDictionary* _tuningDictionary;
	NSObject*<_DKKnowledgeStoreExecuteProtocol> _knowledgeStore;

}

@property (retain) NSDictionary * tuningDictionary;                                         //@synthesize tuningDictionary=_tuningDictionary - In the implementation block
@property (retain) NSObject*<_DKKnowledgeStoreExecuteProtocol> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
+(id)eventStream;
-(id)initWithQueryExecutor:(id)arg1 ;
-(void)setTuningDictionary:(NSDictionary *)arg1 ;
-(id)_eventWithDate:(id)arg1 ;
-(id)defaultTuningConfiguration;
-(id)sanitizeTuningConfiguration:(id)arg1 ;
-(id)readConfigurationFromDefaults;
-(NSDictionary *)tuningDictionary;
-(id)init;
-(void)stop;
-(void)start;
-(void)update;
-(NSObject*<_DKKnowledgeStoreExecuteProtocol>)knowledgeStore;
-(void)setKnowledgeStore:(NSObject*<_DKKnowledgeStoreExecuteProtocol>)arg1 ;
@end

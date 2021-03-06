/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSMutableArray, NSArray;

@interface MCActionGroup : MCAction {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfActions; 
+(id)actionGroup;
-(id)initWithImprint:(id)arg1 ;
-(void)insertActions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveActionsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)demolish;
-(id)actionAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)actions;
-(void)removeAllActions;
-(void)addAction:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(unsigned long long)countOfActions;
-(id)imprint;
@end


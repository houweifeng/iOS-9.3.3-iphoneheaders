/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMManualUpdater.h>

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater {

	NSCountedSet* _holdingUpdatesKeys;

}

@property (nonatomic,retain) NSCountedSet * holdingUpdatesKeys;              //@synthesize holdingUpdatesKeys=_holdingUpdatesKeys - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)invalidate;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(BOOL)isHoldingUpdates;
-(void)endHoldingUpdatesForAllKeys;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
@end


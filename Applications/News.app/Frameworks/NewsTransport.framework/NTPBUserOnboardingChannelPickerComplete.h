/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBUserOnboardingChannelPickerComplete : PBCodable <NSCopying> {

	NSMutableArray* _channelIds;
	NSMutableArray* _topicIds;
	int _totalChannelSelections;
	int _totalTopicSelections;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasTotalChannelSelections; 
@property (assign,nonatomic) int totalChannelSelections;                  //@synthesize totalChannelSelections=_totalChannelSelections - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTopicSelections; 
@property (assign,nonatomic) int totalTopicSelections;                    //@synthesize totalTopicSelections=_totalTopicSelections - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelIds;                 //@synthesize channelIds=_channelIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                   //@synthesize topicIds=_topicIds - In the implementation block
-(void)addChannelId:(id)arg1 ;
-(void)addTopicId:(id)arg1 ;
-(void)setTotalChannelSelections:(int)arg1 ;
-(void)setHasTotalChannelSelections:(BOOL)arg1 ;
-(BOOL)hasTotalChannelSelections;
-(void)setTotalTopicSelections:(int)arg1 ;
-(void)setHasTotalTopicSelections:(BOOL)arg1 ;
-(BOOL)hasTotalTopicSelections;
-(void)clearChannelIds;
-(unsigned long long)channelIdsCount;
-(id)channelIdAtIndex:(unsigned long long)arg1 ;
-(void)clearTopicIds;
-(unsigned long long)topicIdsCount;
-(id)topicIdAtIndex:(unsigned long long)arg1 ;
-(int)totalChannelSelections;
-(int)totalTopicSelections;
-(NSMutableArray *)channelIds;
-(void)setChannelIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end


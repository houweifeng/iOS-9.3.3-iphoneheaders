/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBPrefetchConfig : PBCodable <NSCopying> {

	double _backgroundFetchMinimumInterval;
	long long _feedPrefetchFavoritesLimit;
	BOOL _backgroundFetchEnabled;
	BOOL _feedPrefetchForYou;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasBackgroundFetchEnabled; 
@property (assign,nonatomic) BOOL backgroundFetchEnabled;                         //@synthesize backgroundFetchEnabled=_backgroundFetchEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundFetchMinimumInterval; 
@property (assign,nonatomic) double backgroundFetchMinimumInterval;               //@synthesize backgroundFetchMinimumInterval=_backgroundFetchMinimumInterval - In the implementation block
@property (assign,nonatomic) BOOL hasFeedPrefetchForYou; 
@property (assign,nonatomic) BOOL feedPrefetchForYou;                             //@synthesize feedPrefetchForYou=_feedPrefetchForYou - In the implementation block
@property (assign,nonatomic) BOOL hasFeedPrefetchFavoritesLimit; 
@property (assign,nonatomic) long long feedPrefetchFavoritesLimit;                //@synthesize feedPrefetchFavoritesLimit=_feedPrefetchFavoritesLimit - In the implementation block
-(void)setBackgroundFetchEnabled:(BOOL)arg1 ;
-(void)setHasBackgroundFetchEnabled:(BOOL)arg1 ;
-(BOOL)hasBackgroundFetchEnabled;
-(void)setBackgroundFetchMinimumInterval:(double)arg1 ;
-(void)setHasBackgroundFetchMinimumInterval:(BOOL)arg1 ;
-(BOOL)hasBackgroundFetchMinimumInterval;
-(void)setFeedPrefetchForYou:(BOOL)arg1 ;
-(void)setHasFeedPrefetchForYou:(BOOL)arg1 ;
-(BOOL)hasFeedPrefetchForYou;
-(void)setFeedPrefetchFavoritesLimit:(long long)arg1 ;
-(void)setHasFeedPrefetchFavoritesLimit:(BOOL)arg1 ;
-(BOOL)hasFeedPrefetchFavoritesLimit;
-(BOOL)backgroundFetchEnabled;
-(double)backgroundFetchMinimumInterval;
-(BOOL)feedPrefetchForYou;
-(long long)feedPrefetchFavoritesLimit;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
